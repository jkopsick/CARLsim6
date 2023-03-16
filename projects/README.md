# A Simulation Framework for Testing Data-Driven, Neuron-Type Specific CA3 SNNs 
This repository includes information as to how to run an example and full-scale spiking neural network (SNN) model of hippocampal subregion CA3. Additionally, it describes a framework for building full-scale SNNs to test hypotheses regarding the hippocampal formation. The following instructions assume that the user has Ubuntu installed or is using a supercomputing cluster that is Linux-based. Furthermore, installation instructions of the CARLsim software can be found in the parent directory's [README](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3), but will also be provided here.

## Table of Contents:
* [Language and Module Dependencies](#language-and-module-dependencies-for-the-software)
	* [Programming Languages and Proficiency](#programming-languages-and-proficiency)
	* [Ubuntu Users](#ubuntu)
	* [GMU Hopper Users](#GMU-Hopper-cluster)

* [Creation of a network simulation](#creation-of-a-network-simulation)
	* [Neuron Type Components](#neuron-type-components)
	* [Connection Type Components](#connection-type-components)
	* [Monitoring of specific neuron types](#monitoring-of-specific-neuron-types)
	* [Running a Simulation](#running-a-simulation)
	* [The Simulation Summary](#the-simulation-summary)

* [Choosing a Network to Run](#choosing-a-network-to-run)

* [Bug Fix and Parameter Modification](#bug-fix-and-parameter-modification)

* [Installation and Simulation of SNNs](#installation-and-simulation-of-the-SNNs)
	* [Ubuntu Users](#ubuntu-users)
	* [GMU Hopper Users](#users-with-access-to-GMU-Hopper-cluster)

* [Framework to Test Hippocampal Hypotheses](#A-framework-to-test-hypotheses-of-the-hippocampal-formation) 

## Language and Module Dependencies for the Software:
Beyond the dependencies of CARLsim6 described at the link above, the following dependencies are necessary to instantiate and simulate the example and full scale SNNs:

### Programming Languages and Proficiency
|Language|Proficiency|
|---|---|
|C++|basic to intermediate|

### Ubuntu 
|module|tested version(s)|
|---|---|
|boost|1.73.0|
|gcc|9.3.0|
|nohup|8.30|
|CUDA|11.2.0|

### GMU Hopper Cluster
|module|tested version(s)|
|---|---|
|boost|1.73.0|
|gcc|9.3.0|
|openmpi|4.0.4|
|CUDA|11.2.0|

## Creation of a network simulation
The creation of a cell-type and connection-type specific network and the subsequent simulation of it in CARLsim6 relies on the following critical components, which will each be described in their own section:

### Neuron Type Components
The two necessary components to defining a neuron type in CARLsim are the population size (i.e., the number of neurons) and the input-output relationship of the neuron type to the current it receives (i.e. parameters that govern the neuron type's firing patterns). The current release of [Hippocampome.org](https://hippocampome.org/php/index.php) includes parameter estimates for both the [population sizes](https://hippocampome.org/php/counts.php) and the [input-output relationships](https://hippocampome.org/php/Izhikevich_model.php). Using the examples of the excitatory CA3 Pyramidal and inhibitory CA3 Axo-Axonic neuron types, the parameter estimates for their input-output relationships as defined by the Izhikevich model can be found [here](https://hippocampome.org/php/neuron_page.php?id=2000) and [here](https://hippocampome.org/php/neuron_page.php?id=2028) under the Izhikevich Model section of the pages (subtype 1 parameter sets are used for both neuron types). To create an entity that can define both the population size and input-output relationship for a neuron type, one must define a CARLsim group as follows (more details can be found at the top of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/generateCONFIGStateSTP.h)):

```
  // Define a group for the excitatory neuron type CA3 Pyramidal
  int CA3_Pyramidal = sim.createGroup("CA3_Pyramidal", // name of the neuron type
                                      74366, // population size of the neuron type
                                      EXCITATORY_NEURON, // define whether neuron type is excitatory/inhibitory 
                                      0, // define the processor (CPU or GPU) to create the group on (e.g., GPU = 0)
                                      GPU_CORES // define whether the group will be created on CPU/GPU
				      );
                                
  // Define the input-output relationship for CA3 Pyramidal,
  // based on the RASP.NASP firing pattern phenotype
  sim.setNeuronParameters(CA3_Pyramidal, // neuron type
                          366.0, // mean C parameter
                          0.0, // standard deviation C parameter
                          0.792338703789581, // mean k parameter
                          0.0, // standard deviation k parameter
                          -63.2044008171655, // mean resting membrane potential parameter
                          0.0, // standard deviation resting membrane potential parameter
                          -33.6041733124267, // mean spike threshold membrane potential parameter
                          0.0, // standard deviation spike threshold membrane potential parameter
                          0.00838350334098279, // mean a parameter
                          0.0, // standard deviation a parameter
                          -42.5524776883928, // mean b parameter
                          0.0, // standard deviation b parameter
                          35.8614648558726, // mean spike peak membrane potential parameter
                          0.0, // standard deviation spike peak membrane potential parameter
                          -38.8680990294091, // mean c parameter
                          0.0, // standard deviation c parameter
                          588.0, // mean d parameter
                          0.0, // standard deviation d parameter
                          1 // mean refractory period parameter
			  );
                          
  // Define a group for the inhibitory neuron type CA3 Axo-Axonic
  int CA3_Axo_Axonic = sim.createGroup("CA3_Axo_Axonic", 
                                       1909,
                                       INHIBITORY_NEURON, 
                                       0, 
                                       GPU_CORES
				       );
  
  // Define the input-output relationship for CA3 Axo-Axonic,
  // based on the ASP firing pattern phenotype
  sim.setNeuronParameters(CA3_Axo_Axonic, 
                          165.0, 
                          0.0, 
                          3.96146287759279, 
                          0.0,
                          -57.099782869594,
                          0.0, 
                          -51.7187562820223, 
                          0.0, 
                          0.00463860807187154,
                          0.0, 
                          8.68364493653417, 
                          0.0, 
                          27.7986355932787,
                          0.0, 
                          -73.9685042125372, 
                          0.0,
                          15.0, 
                          0.0, 
                          1
			  );                            
  ```

### Connection Type Components
The three necessary components to defining a connection type in CARLsim are the probability of connection, the short-term synaptic signals, and the conductance delay between two neuron types. In Hippocampome, this can only be performed for neuron types that have either a [known or potential connection](https://hippocampome.org/php/connectivity.php). The current release of Hippocampome includes parameter estimates for the [connection probabilities](https://hippocampome.org/php/synapse_probabilities_sypr.php), somatic distances of dendrites and axons that can be used for defining a [conductance delay](https://hippocampome.org/php/synapse_probabilities_sd.php), and for the [short-term synaptic signals](https://hippocampome.org/php/synaptome_modeling.php). To create a connection between two neuron types that can define these three parameter types, one must define a connection in CARLsim as follows (illustrated for the CA3 Axo-Axonic to CA3 Pyramidal connection type; more details can be found near the top of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/generateCONFIGStateSTP.h)):

```
  // Define a connection between Axo-Axonic and Pyramidal neuron types
  sim.connect(CA3_Axo_Axonic, // presynaptic neuron type 
              CA3_Pyramidal, // postsynaptic neuron type
              "random", // create connections randomly between the two neuron types
              RangeWeight(0.0f, 0.65f, 1.65f), // define the lower, initial, and upper weight bounds for the connection type
              0.15f, // define the connection probability
              RangeDelay(1), // define the conductance delay 
              RadiusRF(-1.0), // define that no receptive field should be formed
              SYN_PLASTIC, // indicate that the connection type's weight can be modified 
              1.869561088f, // indicate the conductance of the fast currents of the synapse 
              0.0f // indicate the conductance of the slow currents of the synapse
	      );
              
   // Define short-term plasticity parameters between the Axo-Axonic and Pyramidal neuron types
   sim.setSTP(CA3_Axo_Axonic, // presynaptic neuron type 
              CA3_Pyramidal, // postsynaptic neuron type
              true, // define short-term plasticity for the connection type
              STPu(0.1302436377f, 0.0f), // define mean and standard deviation of the U parameter
              STPtauU(12.93029701f, 0.0f), // define mean and standard deviation of the tauU parameter; tau_f on Hippocampome
              STPtauX(361.0287219f, 0.0f), // define mean and standard deviation of the tauX parameter; tau_r on Hippocampome
              STPtdAMPA(5.0f, 0.0f), // define mean and standard deviation of the AMPA receptor current decay time constant
              STPtdNMDA(150.0f, 0.0f), // define mean and standard deviation of the NMDA receptor current decay time constant
              STPtdGABAa(7.623472774f, 0.0f), // define mean and standard deviation of the GABAA receptor current decay time constant
              STPtdGABAb(150.0f, 0.0f), // define mean and standard deviation of the GABAB receptor current decay time constant
              STPtrNMDA(0.0f, 0.0f), // define mean and standard deviation of the NMDA receptor current rise time constant; disabled by default but can be enabled with non-zero input
              STPtrGABAb(0.0f, 0.0f) // define mean and standard deviation of the GABAB receptor current rise time constant; disabled by default but can be enabled with non-zero input
	      );
  ```

### Monitoring of specific neuron types
The membrane potential (intracellular recording) and spikes (extracellular recording) of each neuron of a neuron type can be monitored and stored using the NeuronMonitor and SpikeMonitor CARLsim classes, respectively. To instantiate either monitor in a network simulation, it can be done so as follows (more details can be found at the bottom of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/generateCONFIGStateSTP.h) and the top of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/generateSETUPStateSTP.h)):

```
  // Define a NeuronMonitor for the Pyramidal neuron type
  sim.setNeuronMonitor(CA3_Pyramidal, // neuron type to be monitored
                       "DEFAULT" // directory location of the file containing the intracellular recording of membrane potential
		       );
 
   // Define a SpikeMonitor for the Pyramidal neuron type
  sim.setSpikeMonitor(CA3_Pyramidal, // neuron type to be monitored
                       "DEFAULT" // directory location of the file containing the extracellular recording of spikes
		       );
  ```

### Running a simulation
Once the neuron type and connection type properties have been defined through CARLsim, along with the specific monitors needed to record intracellular and extracellular activity, the stimulation protocol and simulation duration are defined. For this particular example, we use the synchronous stimulation paradigm that will activate a random subset of 100 Pyramidal cells in the network (more details can be found [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/src/main_ca3_snn_GPU_02_26_23_baseline.cpp)):

```
  // Declare variables that will store the start and end ID for the neurons
	// in the pyramidal group
	int pyr_start = sim.getGroupStartNeuronId(CA3_Pyramidal);
	std::cout << "Beginning neuron ID for Pyramidal Cells is : " << pyr_start;
	int pyr_end = sim.getGroupEndNeuronId(CA3_Pyramidal);
	std::cout << "Ending neuron ID for Pyramidal Cells is : " << pyr_end;
	int pyr_range = (pyr_end - pyr_start) + 1;
	std::cout << "The range for Pyramidal Cells is : " << pyr_range;

	// Create vectors that are the length of the number of neurons in the pyramidal
	// group, and another that will store the current at the position for the
  // random pyramidal cells that will be selected
	std::vector<int> pyr_vec( boost::counting_iterator<int>( 0 ),
							              boost::counting_iterator<int>( pyr_range ));
  std::vector<float> current(pyr_range, 0.0f);
  
  // Define the number of neurons to receive input from the external current
  int numPyramidalFire = 100;
  
  // Set the seed of the pseudo-random number generator based on the current system time,
  // which will allow for a random subset of 100 Pyramidal cells to be chosen to receive
  // transient input.
	std::srand(std::time(nullptr));
  
  // run for a total of 9 seconds
	// at the end of each runNetwork call, SpikeMonitor stats will be printed
	for (int i=0; i<20; i++) 
	{
    	if (i == 0)
        {
            // Set external current for a fraction of pyramidal cells based on the random
            // seed
            for (int i = 0; i < numPyramidalFire; i++)
            {
                int randPyrCell = pyr_vec.front() + ( std::rand() % ( pyr_vec.back() - pyr_vec.front() ) );
                current.at(randPyrCell) = 45000.0f;
            }
            
            // Set the external current for all Pyramidal cells and run the network
            // for one ms
            sim.setExternalCurrent(CA3_Pyramidal, current);
            sim.runNetwork(0,1);
        }
        
		if (i == 1)
		{
    		// Set the external current for all Pyramidal cells to zero and run the 
    		// network for one ms
    		sim.setExternalCurrent(CA3_Pyramidal, 0.0f);
    		sim.runNetwork(0,1);
        }
        
        if (i >= 2 && i < 19)
		{
    		// Run the network for 500 ms
    		sim.runNetwork(0,500);
		}
		
        if (i == 19)
        {
            // Run the network for 498 ms
            sim.runNetwork(0,498);
        }
	}
  ```

### The Simulation Summary
After each simulation is executed, the output of the network to the terminal can be saved to a text file. This allows for a user to get a quick and informative summary of what the network activity looked like during the simulation. An example simulation summary is shown below for the synchronous network with 100 random Pyramidal cells transiently activated (more details can be found [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/ca3_snn_02_26_23_sync_baseline.txt)):

```
--------------------------------------------------------------------------------
| Stopwatch                                                                    |
|------------------------------------------------------------------------------|
|                  Tag         Start          Stop           Lap         Total |
|                start  00:00:00.000  00:00:00.193  00:00:00.193  00:00:00.193 |
|         setupNetwork  00:00:00.193  01:10:13.096  01:10:12.903  01:10:13.096 |
|           runNetwork  01:10:13.096  01:40:38.188  00:30:25.092  01:40:38.188 |
--------------------------------------------------------------------------------


********************    Simulation Summary      ***************************
Network Parameters: 	numNeurons = 89226 (numNExcReg:numNInhReg = 83.3:16.7)
			numSynapses = 250078223
			maxDelay = 1
Simulation Mode:	COBA
Random Seed:		10
Timing:			Model Simulation Time = 9 sec
			Actual Execution Time = 1825.09 sec
			Speed Factor (Model/Real) = 0.5 % 
Average Firing Rate:	2+ms delay = 0.000 Hz
			1ms delay = 0.775 Hz
			Overall = 0.775 Hz
Overall Spike Count Transferred:
			2+ms delay = 0
			1ms delay = 0
Overall Spike Count:	2+ms delay = 0
			1ms delay = 622231
			Total = 622231
*********************************************************************************
```

We can view details such as the duration necessary for the network structure to be created (~70 minutes to create a network of ~90K neurons and ~250M synapses) and the duration of time to run a nine second simulation (~30 minutes). Additionally, we can view the mean firing rate of the network and how many total spikes were generated. Further information regarding how each neuron type fired in 500 ms intervals can be found near the bottom of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/ca3_snn_02_26_23_sync_baseline.txt).

## Choosing a network to run
There are three directories from which SNNs can be simulated: [ca3_example_net_02_26_23](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_example_net_02_26_23), where a scaled-down version of the model can be simulated, [synchronous](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/synchronous) where full-scale versions activated by synchronous stimulation can be simulated, and the [asynchronous](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/asynchronous) where full-scale versions activated by asynchronous stimulation can be simulated. Within both the synchronous and asynchronous directories, three full-scale model versions can be simulated -- the baseline, class, and archetype SNNs. The network features are broadly as follows: the baseline SNN maintains neuron and connection-type specificity; the class SNN maintains neuron-type specificity while removing connection-type specificity; and the archetype SNN maintains connection-type specificity while removing neuron-type specificity.

## Bug Fix and Parameter Modification
After publication, we became aware of a critical bug within the [Hippocampome-CARLsim4 software](https://github.com/UCI-CARL/CARLsim4/tree/feat/meansdSTPPost_hc/projects) that pertained to the calculation of synaptic currents to a given post-synaptic neuron when using connection-type specific STP. Instead of the synaptic currents for a given post-synaptic neuron decaying at a rate independent of the other synapses connected to that neuron, the synaptic currents would decay based on all synapses connected to it, leading to a 'pooled' synaptic decay effect that influenced the synaptic current generated by a given synapse.

In the current branch of CARLsim6, we have resolved this bug so that the synaptic currents to a given post-synaptic neuron decay independently when using connection-type specific STP. With the bug-fixed code, we reproduced all of the main conclusions of the published work, although we made some slight changes to the parameters that define the network structures. These changes were within the parameter estimate ranges provided by the Hippocampome.org knowledge base, and also operated within the constraints of the latest version of CARLsim, CARLsim6. The parameter changes can be found in the updated tables, along with reproduced figures in the [updated_figures_tables](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/updated_figures_tables) directory.

## Installation and Simulation of the SNNs

### Ubuntu Users
For users compiling and running simulations with Ubuntu, the following steps will need to be taken (this guide assumes use of an A100 GPU with CUDA 11.2):

1. Navigate to a directory of your choice (/home/username used in this guide) and create a new directory where the compiled CARLsim6 software will reside:

 ```
  cd ~
  mkdir git_02_26_23 
 ```

2. Download the CARLsim6 source code for this branch:

 ```
  git clone https://github.com/jkopsick/CARLsim6.git -b feat/CS6_hc_ca3
 ```

3. Update gencode in the CARLsim6 main directory CMakeLists text file, by changing the following [line](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/CMakeLists.txt#L54) to the compute capability of your GPU:

 ```
  cd CARLsim6
  nano CMakeLists.txt
  set(CARLSIM_CUDA_GENCODE "-gencode arch=compute_80,code=sm_80" CACHE STRING "CUDA target architecture and device, e.g. _80 for Ampere/A100, _86 for Ampere/RTX3090" ) # A100 has a compute capability of 8.0
 ```

4. Download the latest UNIX/Linux binary for [cmake](https://cmake.org/download/) and place it in the directory created from step 1 (e.g., /home/username/git_02_26_23 in this guide).

5. After downloading, we now install cmake (this guide assumes version 3.22.0) which is necessary for compiling CARLsim6, and add its path to the bashrc:

 ```
  chmod +x ./cmake-3.22.0-linux-x86_64.sh
  ./cmake-3.22.0-linux-x86_64.sh --prefix=/home/username/cmake-3.22
 ```
 
 ```
 cd ~
 nano ~/.bashrc
 ```
 
 ```
 # Add cmake path
 export PATH=/home/username/cmake-3.22/bin/cmake:$PATH
 ```

6. After installation, move bin, doc, man, and share folders to /home/username/cmake-3.22 from their subfolder, and delete the original subfolder. This allows for /home/username/cmake-3.22/bin/cmake to be the correct path.

7. Download the [google test suite](https://github.com/google/googletest/releases/tag/release-1.10.0) (this guide assumes version 1.10.0) and place it in the directory created from step 1 (e.g., /home/username/git_02_26_23 in this guide).

8. After downloading, we now install the google test suite:

 ```
  unzip googletest-release-1.10.0.zip
  cd googletest-release-1.10.0l
  mkdir build
  cd build
  /home/username/cmake-3.22/bin/cmake \
  -DCMAKE_INSTALL_PREFIX=/home/username/gtest-1.10 \
  /home/username/git/googletest-release-1.10.0
  make -j32
  make install -j32
 ```

9. After installation of the google test suite, update the bashrc from your home directory (/home/username) with the following settings:

  ```
  cd ~
  nano ~/.bashrc
  ```

  ```
  # Google test suite related path variables
  export GTEST_LIBRARY=/home/username/gtest_1.10/lib/libgtest.a
  export GTEST_MAIN_LIBRARY=/home/username/gtest_1.10/lib/libgtest_main.a
  export GTEST_ROOT=/home/username/gtest_1.10/
  ```

10. With the google test suite and cmake installed, we can now install CARLsim6. Navigate back to the directory from step 1 (e.g., /home/username/git_02_26_23 in this guide) and perform the following:

  ```
  cd /home/username/git_02_26_23/CARLsim6
  mkdir .build
  cd .build
  /home/username/cmake-3.22/bin/cmake \
  -DCMAKE_INSTALL_PREFIX=/home/username/CARL6_02_26_23 \
  -DCARLSIM_NO_CUDA=OFF \
  /home/username/git_02_26_23/CARLsim6
  make all -j32
  make install -j32
  ```
  
11. With CARLsim6 now successfully installed, let's switch to the directory of the network that you would like to simulate (the code below uses the [example network](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_example_net_02_26_23)), and run the following commands to compile the SNN:

  ```
  # Switch directory
  cd /home/username/git_02_26_23/CARLsim6/.build/projects/ca3_example_net_02_26_23

  # Clear previous version of executable, and then compile the SNN to create a new executable
  make clean && make -j32
  ```
  
12. Run the compiled simulation in the background using nohup and output the simulation summary to a text file

  ```
  nohup ./ca3_example_net_02_26_23 > HC_IM_02_26_23_ca3_example_net_results.txt &
  ```
  
13. Once the simulation has been finished, view the simulation summary:

  ```
  cat HC_IM_02_26_ca3_example_net_results.txt
  ```



### Users with access to GMU Hopper Cluster
For users with a Hopper account at GMU, the following steps will need to be taken:
  
1. Update the bashrc from your home directory (/home/username) with the following settings, which will load all modules necessary to compile and install CARLsim, along with compiling and running the simulations:

  ```
  nano ~/.bashrc
  ```

  ```
  if [ ${CLUSTER} == "hopper" ] && [[ ${CNODE} == *"gpu"* ]]; then
  # User specific aliases and functions
  module load gnu9/9.3.0
  module load openmpi4/4.0.4
  module load boost/1.73.0

  # Add path to existing CUDA installation and libraries
  export PATH=/opt/sw/dgx-a100/apps/cuda/11.2.0/bin:$PATH
  export LD_LIBRARY_PATH=/opt/sw/dgx-a100/apps/cuda/11.2.0/lib64:$LD_LIBRARY_PATH
  ```

2. Navigate to a directory of your choice (/home/username used in this guide) and create a new directory where the compiled CARLsim6 software will reside:

 ```
  cd ~
  mkdir git_02_26_23 
 ```

3. Download the CARLsim6 source code for this branch:

 ```
  git clone https://github.com/jkopsick/CARLsim6.git -b feat/CS6_hc_ca3
 ```

4. Update gencode in the CARLsim6 main directory CMakeLists text file, by changing the following [line](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/CMakeLists.txt#L54) to the compute capability of your GPU:

 ```
  cd CARLsim6
  nano CMakeLists.txt
  set(CARLSIM_CUDA_GENCODE "-gencode arch=compute_80,code=sm_80" CACHE STRING "CUDA target architecture and device, e.g. _80 for Ampere/A100, _86 for Ampere/RTX3090" ) # A100 has a compute capability of 8.0
 ```

5. Download the latest UNIX/Linux binary for [cmake](https://cmake.org/download/) and place it in the directory created from step 1 (e.g., /home/username/git_02_26_23 in this guide).

6. After downloading, we now install cmake (this guide assumes version 3.22.0) which is necessary for compiling CARLsim6, and add its path to the bashrc:

 ```
  chmod +x ./cmake-3.22.0-linux-x86_64.sh
  ./cmake-3.22.0-linux-x86_64.sh --prefix=/home/username/cmake-3.22
 ```
 
 ```
 cd ~
 nano ~/.bashrc
 ```
 
 ```
 # Add cmake path
 export PATH=/home/username/cmake-3.22/bin/cmake:$PATH
 ```

7. Download the [google test suite](https://github.com/google/googletest/releases/tag/release-1.10.0) (this guide assumes version 1.10.0) and place it in the directory created from step 1 (e.g., /home/username/git_02_26_23 in this guide).

8. After downloading, we now install the google test suite:

 ```
  salloc -p gpuq -q gpu --gres=gpu:A100.80gb:1 --ntasks-per-node=1 -t 0-01:00:00
  unzip googletest-release-1.10.0.zip
  cd googletest-release-1.10.0l
  mkdir build
  cd build
  /home/username/cmake-3.22/bin/cmake \
  -DCMAKE_INSTALL_PREFIX=/home/username/gtest-1.10 \
  /home/username/git/googletest-release-1.10.0
  make -j32
  make install -j32
 ```

9. After installation of the google test suite, update the bashrc from your home directory (/home/username) with the following settings:

  ```
  cd ~
  nano ~/.bashrc
  ```

  ```
  # Google test suite related path variables
  export GTEST_LIBRARY=/home/username/gtest_1.10/lib/libgtest.a
  export GTEST_MAIN_LIBRARY=/home/username/gtest_1.10/lib/libgtest_main.a
  export GTEST_ROOT=/home/username/gtest_1.10/
  ```

10. With the google test suite and cmake installed, we can now install CARLsim6. Navigate back to the directory from step 1 (e.g., /home/username/git_02_26_23 in this guide) and perform the following:

  ```
  cd /home/username/git_02_26_23/CARLsim6
  mkdir .build
  cd .build
  salloc -p gpuq -q gpu --gres=gpu:A100.80gb:1 --ntasks-per-node=1 -t 0-01:00:00
  /home/username/cmake-3.22/bin/cmake \
  -DCMAKE_INSTALL_PREFIX=/home/username/CARL6_02_26_23 \
  -DCARLSIM_NO_CUDA=OFF \
  /home/username/git_02_26_23/CARLsim6
  make all -j32
  make install -j32
  ```
  
11. With CARLsim6 now successfully installed, let's switch to the directory of the network that you would like to simulate (the code below uses the [example network](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_example_net_02_26_23)), and run the following commands to compile the SNN:

  ```
  # Switch directory
  cd /home/username/git_02_26_23/CARLsim6/.build/projects/ca3_example_net_02_26_23

  # Clear previous version of executable, and then compile the SNN to create a new executable
  make clean && make -j32
  ```

12. Create a SLURM submission script (this guide uses slurm_wrapper.sh) so that the output goes to the directory of your choice (example used is in the current folder you are in):

  ```
  nano slurm_wrapper.sh
  ```

  ```
  #!/bin/bash
  #SBATCH --partition=gpuq
  #SBATCH --qos=gpu
  #SBATCH --gres=gpu:A100.80gb:1
  #SBATCH --ntasks-per-node=1
  #SBATCH --job-name="ca3_ex_net"
  #SBATCH --output /scratch/username/git_02_26_23/.build/projects/ca3_example_net_02_26_22/HC_IM_02_26_23_ca3_example_net_results.txt
  #SBATCH --mail-type=END,FAIL
  #SBATCH --mail-user=username@gmu.edu
  #SBATCH --mem-per-cpu=10G
  srun ./ca3_snn_GPU
  ```
  
13. Submit the SLURM script to the Hopper Supercomputing Cluster:

  ```
  sbatch slurm_wrapper.sh
  ```
  
14. Verify that a SLURM job was created after running your SLURM script

  ```
  squeue -u username
  ```
  
15. Once the simulation has been finished (either by checking the squeue command to see if the simulation is still running and/or checking the email provided that will update you when the simulation has finished), view the simulation summary:

  ```
  cat HC_IM_02_26_23_ca3_example_net_results.txt
  ```

## A framework to test hypotheses of the hippocampal formation
The examples shown above describe how a network model of CA3 consisting of eight neuron types and fifty-one connection types can be utilized to test the network's stability and robustness to a transient, synchronous or asynchronous stimulation protocol. What if we wanted to test different hypotheses regarding CA3, or other subregions of the hippocampal formation? Hippocampal network models created in CARLsim are flexible enough to test additional hypotheses, which we provide an example of below.

Suppose we wanted to understand how different representative cell types in area CA3 were involved in pattern storage and completion. One way we could approach this is by using the cell types involved in the [archetype network](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_archetype), with noisy external input applied to these cell types reflecting the synaptic input they may receive from the mossy fibers of the dentate gyrus granule cells. The following code will walk through how to create and simulate such a network and the scenario of pattern storage and completion. A directory containing the code to run this example can be found [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion).

1. Declare groups for each representative neuron type, along with Izhikevich parameter sets, how they connect to other representative neuron types, and their short-term plasticity rules. Additionally we set the max synaptic weight to 5 nS for each connection type (more details can be found [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/generateCONFIGStateSTP.h)):

```
int CA3_Basket = sim.createGroup("CA3_Basket", 3089,
                              INHIBITORY_NEURON, 0, GPU_CORES
			      	);
                              
int CA3_MFA_ORDEN = sim.createGroup("CA3_MFA_ORDEN", 11771,
                              INHIBITORY_NEURON, 0, GPU_CORES
			      	   );
                              
int CA3_Pyramidal = sim.createGroup("CA3_Pyramidal", 74366,
                              EXCITATORY_NEURON, 0, GPU_CORES
			      	   );
                              
sim.setNeuronParameters(CA3_Basket, 45.0, 0.0, 0.9951729, 0.0,
                                                -57.506126, 0.0, -23.378766, 0.0, 0.003846186,
                                                0.0, 9.2642765, 0.0, 18.454934,
                                                0.0, -47.555661, 0.0,
                                                -6.0, 0.0, 1
		       );
                     
sim.setNeuronParameters(CA3_MFA_ORDEN, 209.0, 0.0, 1.37980713457205, 0.0,
                                                -57.076423571379, 0.0, -39.1020427841762, 0.0, 0.00783805979364104,
                                                0.0, 12.9332855397722, 0.0, 16.3132681887705,
                                                0.0, -40.6806648852695, 0.0,
                                                0.0, 0.0, 1
		       );
                     
sim.setNeuronParameters(CA3_Pyramidal, 366.0, 0.0, 0.792338703789581, 0.0,
                                                -63.2044008171655, 0.0, -33.6041733124267, 0.0, 0.00838350334098279,
                                                0.0, -42.5524776883928, 0.0, 35.8614648558726,
                                                0.0, -38.8680990294091, 0.0,
                                                588.0, 0.0, 1
		       );
                     
sim.connect(CA3_Basket, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.00663136909224044f,
                                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.139606233f, 0.0f);
                                       
sim.connect(CA3_Basket, CA3_MFA_ORDEN, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.00573675602167279f,
                                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.681117626f, 0.0f);
                                       
sim.connect(CA3_Basket, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.15f,
                                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.104194742f, 0.0f);
                                       
sim.connect(CA3_MFA_ORDEN, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.0117345087001957f,
                                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.450174133f, 0.0f);
                                       
sim.connect(CA3_MFA_ORDEN, CA3_MFA_ORDEN, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.00913901938344389f,
                                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.828413006f, 0.0f);
                                       
sim.connect(CA3_MFA_ORDEN, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.0637836805073049f,
                                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.858647029f, 0.0f);
                                   
sim.connect(CA3_Pyramidal, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.0161746579069214f,
                                      RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.910763922f, 0.0f);
                                  
sim.connect(CA3_Pyramidal, CA3_MFA_ORDEN, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.0176731417548347f,
                                      RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.039009039f, 0.0f);
                                   
sim.connect(CA3_Pyramidal, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 5.0f), 0.0250664662231983f,
                                      RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.663674974f, 0.0f);
                                     
sim.setSTP(CA3_Basket, CA3_Basket, true, STPu(0.162517426384018f, 0.0f),
                                         STPtauU(11.19042564f, 0.0f),
                                         STPtauX(689.5059466f, 0.0f),
                                         STPtdAMPA(5.0f, 0.0f),
                                         STPtdNMDA(150.0f, 0.0f),
                                         STPtdGABAa(3.007016545f, 0.0f),
                                         STPtdGABAb(150.0f, 0.0f),
                                         STPtrNMDA(0.0f, 0.0f),
                                         STPtrGABAb(0.0f, 0.0f));
                                     
sim.setSTP(CA3_Basket, CA3_MFA_ORDEN, true, STPu(0.177068034944573f, 0.0f),
                                         STPtauU(19.60369075f, 0.0f),
                                         STPtauX(581.9355018f, 0.0f),
                                         STPtdAMPA(5.0f, 0.0f),
                                         STPtdNMDA(150.0f, 0.0f),
                                         STPtdGABAa(5.230610278f, 0.0f),
                                         STPtdGABAb(150.0f, 0.0f),
                                         STPtrNMDA(0.0f, 0.0f),
                                         STPtrGABAb(0.0f, 0.0f));
                                     
sim.setSTP(CA3_Basket, CA3_Pyramidal, true, STPu(0.118642073007157f, 0.0f),
                                         STPtauU(16.73589406f, 0.0f),
                                         STPtauX(384.3363321f, 0.0f),
                                         STPtdAMPA(5.0f, 0.0f),
                                         STPtdNMDA(150.0f, 0.0f),
                                         STPtdGABAa(7.63862234f, 0.0f),
                                         STPtdGABAb(150.0f, 0.0f),
                                         STPtrNMDA(0.0f, 0.0f),
                                         STPtrGABAb(0.0f, 0.0f));
                                     
sim.setSTP(CA3_MFA_ORDEN, CA3_Basket, true, STPu(0.24814064689538f, 0.0f),
                                         STPtauU(15.70448009f, 0.0f),
                                         STPtauX(759.1190877f, 0.0f),
                                         STPtdAMPA(5.0f, 0.0f),
                                         STPtdNMDA(150.0f, 0.0f),
                                         STPtdGABAa(3.896195604f, 0.0f),
                                         STPtdGABAb(150.0f, 0.0f),
                                         STPtrNMDA(0.0f, 0.0f),
                                         STPtrGABAb(0.0f, 0.0f));
                                     
sim.setSTP(CA3_MFA_ORDEN, CA3_MFA_ORDEN, true, STPu(0.206752592891043f, 0.0f),
                                         STPtauU(22.52027885f, 0.0f),
                                         STPtauX(642.0975453f, 0.0f),
                                         STPtdAMPA(5.0f, 0.0f),
                                         STPtdNMDA(150.0f, 0.0f),
                                         STPtdGABAa(5.533747322f, 0.0f),
                                         STPtdGABAb(150.0f, 0.0f),
                                         STPtrNMDA(0.0f, 0.0f),
                                         STPtrGABAb(0.0f, 0.0f));
                                     
sim.setSTP(CA3_MFA_ORDEN, CA3_Pyramidal, true, STPu(0.112589304970516f, 0.0f),
                                         STPtauU(20.61711347f, 0.0f),
                                         STPtauX(496.0484093f, 0.0f),
                                         STPtdAMPA(5.0f, 0.0f),
                                         STPtdNMDA(150.0f, 0.0f),
                                         STPtdGABAa(7.149050278f, 0.0f),
                                         STPtdGABAb(150.0f, 0.0f),
                                         STPtrNMDA(0.0f, 0.0f),
                                         STPtrGABAb(0.0f, 0.0f));
                                 
sim.setSTP(CA3_Pyramidal, CA3_Basket, true, STPu(0.217145987458849f, 0.0f),
                                     STPtauU(21.16086172f, 0.0f),
                                     STPtauX(691.4177768f, 0.0f),
                                     STPtdAMPA(3.97130389f, 0.0f),
                                     STPtdNMDA(150.0f, 0.0f),
                                     STPtdGABAa(6.0f, 0.0f),
                                     STPtdGABAb(150.0f, 0.0f),
                                     STPtrNMDA(0.0f, 0.0f),
                                     STPtrGABAb(0.0f, 0.0f));

sim.setSTP(CA3_Pyramidal, CA3_MFA_ORDEN, true, STPu(0.182858254313729f, 0.0f),
                                     STPtauU(29.01335489f, 0.0f),
                                     STPtauX(444.9925289f, 0.0f),
                                     STPtdAMPA(5.948303553f, 0.0f),
                                     STPtdNMDA(150.0f, 0.0f),
                                     STPtdGABAa(6.0f, 0.0f),
                                     STPtdGABAb(150.0f, 0.0f),
                                     STPtrNMDA(0.0f, 0.0f),
                                     STPtrGABAb(0.0f, 0.0f));

sim.setSTP(CA3_Pyramidal, CA3_Pyramidal, true, STPu(0.279220899f, 0.0f),
                                     STPtauU(21.44820657f, 0.0f),
                                     STPtauX(318.510891f, 0.0f),
                                     STPtdAMPA(10.21893984f, 0.0f),
                                     STPtdNMDA(150.0f, 0.0f),
                                     STPtdGABAa(6.0f, 0.0f),
                                     STPtdGABAb(150.0f, 0.0f),
                                     STPtrNMDA(0.0f, 0.0f),
                                     STPtrGABAb(0.0f, 0.0f));
```

2. We set excitatory spike-time dependent plasticity for the connection between the Pyramidal cells, using default parameters (more details can be found near the bottom of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/generateCONFIGStateSTP.h)):

```
sim.setESTDP(CA3_Pyramidal, CA3_Pyramidal_ true, STANDARD, ExpCurve(0.1f, 20.0f, -0.1f, 20.0f));
```

3. Create SpikeMonitors and NeuronMonitors for each neuron type (more details can be found at the bottom of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/generateCONFIGStateSTP.h) and at the top of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/generateSETUPStateSTP.h)):

```
sim.setNeuronMonitor(CA3_Basket, "DEFAULT");

sim.setNeuronMonitor(CA3_MFA_ORDEN, "DEFAULT");
                                 
sim.setNeuronMonitor(CA3_Pyramidal, "DEFAULT");

```

```
sim.setSpikeMonitor(CA3_Basket, "DEFAULT");

sim.setSpikeMonitor(CA3_MFA_ORDEN, "DEFAULT");
                                 
sim.setSpikeMonitor(CA3_Pyramidal, "DEFAULT");
```

4. In the main simulation script file, we now declare variables and vectors that will be used to apply noisy current to all cell types, and choose 20 Pyramidal cells from the assigned set of {0,5,10,...,95} to reflect a pattern to be stored, pattern A (more details can be found near the middle of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/src/main_ca3_snn_GPU.cpp)):

```
// Declare variables that will store the start and end ID for the neurons
// in the Pyramidal, MFA-ORDEN, and Basket groups
int pyr_start = sim.getGroupStartNeuronId(CA3_Pyramidal);
int pyr_end = sim.getGroupEndNeuronId(CA3_Pyramidal);
int pyr_range = (pyr_end - pyr_start) + 1;

int mfao_start = sim.getGroupStartNeuronId(CA3_MFA_ORDEN);
int mfao_end = sim.getGroupEndNeuronId(CA3_MFA_ORDEN);
int mfao_range = (mfao_end - mfao_start) + 1;

int bc_start = sim.getGroupStartNeuronId(CA3_Basket);
int bc_end = sim.getGroupEndNeuronId(CA3_Basket);
int bc_range = (bc_end - bc_start) + 1;

// Create a vector that is the length of the number of neurons for each group to define the noisy current
std::vector<int> pyr_vec( boost::counting_iterator<int>( 0 ),
                          boost::counting_iterator<int>( pyr_range ));
std::vector<float> pc_background_current(pyr_range, 0.0f);
std::vector<float> pc_current = pc_background_current;

std::vector<int> mfao_vec( boost::counting_iterator<int>( 0 ),
                          boost::counting_iterator<int>( mfao_range ));
std::vector<float> mfao_background_current(mfao_range, 0.0f);
std::vector<float> mfao_current = mfao_background_current;

std::vector<int> bc_vec( boost::counting_iterator<int>( 0 ),
                          boost::counting_iterator<int>( bc_range ));
std::vector<float> bc_background_current(bc_range, 0.0f);
std::vector<float> bc_current = bc_background_current;

// Define the number of Pyramidal cells to fire
int numPyramidalFire = 20;

std::vector<int> PC_vec_A;

// Define the location of those Pyramidal cells so that we choose the same Pyramidal cells each time we evoke pattern A
for (int i = 0; i < numPyramidalFire; i++)
{
    PC_vec_A.push_back(5*(i+1));
}
```
5. Before the first simulation begins, the newly created network structure can be saved by calling the saveSimulation function (more details can be found near the middle of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/src/main_ca3_snn_GPU.cpp)):

```
 sim.saveSimulation("ca3SNN1.dat", true); // define where to save the network structure to and save synapse info
```

6. A simulation protocol is now defined which runs the simulation for 10 seconds, where halfway through the simulation the twenty Pyramidal cells selected receive elevated input, which will define pattern A, within two 25 ms time windows (corresponding to gamma cycles; more details can be found near the bottom of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/src/main_ca3_snn_GPU.cpp)):

```
// run for a total of 10 seconds
// at the end of each runNetwork call, SpikeMonitor stats will be printed
for (int i=0; i<10000; i++)
{

  float pc_Iapp = 50.0f;
  float pc_Iapp_sd = 175.0f;
  
  for (int i = 0; i < pyr_range; i++)
  {
      pc_background_current.at(i) = pc_Iapp + pc_Iapp_sd * (float)drand48();
  }   

  float mfao_Iapp = 10.0f;
  float mfao_Iapp_sd = 50.0f;
  for (int i = 0; i < mfao_range; i++)
  {
      mfao_background_current.at(i) = mfao_Iapp + mfao_Iapp_sd * (float)drand48();
  }

  float bc_Iapp = 10.0f;
  float bc_Iapp_sd = 50.0f;
  
  for (int i = 0; i < bc_range; i++)
  {
      bc_background_current.at(i) = bc_Iapp + bc_Iapp_sd * (float)drand48();
  } 

	if (i >= 5000 && i < 5025)
	{
		for (int j = 0; j < numPyramidalFire; j++)
		{
			int pyrCellA = pyr_vec.front() + PC_vec_A[j]; // choose the jth Pyramidal cell for pattern A
			pc_current.at(pyrCellA) = 1500; // increase the current to 1500 pA
		}
		sim.setExternalCurrent(CA3_Pyramidal, pc_current); // update the current to each Pyramidal cell before the next run of the simulation           
		sim.runNetwork(0,1); // run network for 1 ms
	}
	
	if (i == 5025)
	{
		for (int j = 0; j < numPyramidalFire; j++)
		{
			int pyrCellA = pyr_vec.front() + PC_vec_A[j]; // choose the jth Pyramidal cell for pattern A
			pc_current.at(pyrCellA) = pc_background_current.at(pyrCellA); // return current to background noisy current value
		}
		sim.setExternalCurrent(CA3_Pyramidal, pc_current); // update the current to each Pyramidal cell before the next run of the simulation           
		sim.runNetwork(0,1); // run network for 1 ms
	}

	if (i >= 6000 && i < 6025)
	{
		for (int j = 0; j < numPyramidalFire; j++)
		{
			int pyrCellA = pyr_vec.front() + PC_vec_A[j]; // choose the jth Pyramidal cell for pattern A
			pc_current.at(pyrCellA) = 1500; // increase the current to 1500 pA
		}
		sim.setExternalCurrent(CA3_Pyramidal, pc_current); // update the current to each Pyramidal cell before the next run of the simulation           
		sim.runNetwork(0,1); // run network for 1 ms
	}
		
	if (i == 6025)
	{
		for (int j = 0; j < numPyramidalFire; j++)
		{
			int pyrCellA = pyr_vec.front() + PC_vec_A[j]; // choose the jth Pyramidal cell for pattern A
			pc_current.at(pyrCellA) = pc_background_current.at(pyrCellA); // return current to background noisy current value
		}
		sim.setExternalCurrent(CA3_Pyramidal, pc_current); // update the current to each Pyramidal cell before the next run of the simulation           
		sim.runNetwork(0,1); // run network for 1 ms
	}

		sim.runNetwork(0,1); // run network for 1 ms

}
```

7. The outcome of the simulation can now be saved by calling the saveSimulation function, which will save the network structure (more details can be found near the bottom of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/src/main_ca3_snn_GPU.cpp)):

```
 sim.saveSimulation("ca3SNN2.dat", true); // define where to save the network structure to and save synapse info
```

8. The saved network can now be loaded in additional simulation runs, by calling the loadSimulation function before the setupNetwork is called (invokes the SETUP simulation state; more details can be found near the middle of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/src/main_ca3_snn_GPU.cpp)):

```
// before calling setupNetwork, call loadSimulation
FILE* fId = NULL;
fId = fopen("ca3SNN2.dat", "rb");
sim.loadSimulation(fId);
```

9. Now the setupNetwork function can be called and after its completion the connection to the network structure file can be closed (more details can be found near the middle of the page [here](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc_ca3/projects/ca3_snn_GPU_02_26_23_pattern_completion/src/main_ca3_snn_GPU.cpp)):

```
sim.setupNetwork();

// ... wait until after setupNetwork is called
fclose(fId);
```

10. The same stimulation protocol from steps 5-9 can be called in additional runs to save and load the network structure to make the pattern stored more robustly. Once the user believes that the pattern has been robustly stored within the network structure, the stimulation protocol can be changed to test for pattern completion by selecting fewer neurons than the original set of Pyramidal cells. In the example below, only seven ({0,5,10,...,30}) of the original twenty Pyramidal cells are selected for testing pattern completion:

```
// Define the number of Pyramidal cells to fire
int numPyramidalFire = 7;

std::vector<int> PC_vec_A;

// Define the location of those Pyramidal cells so that we choose the same Pyramidal cells each time we evoke a pattern
for (int i = 0; i < numPyramidalFire; i++)
{
    PC_vec_A.push_back(5*(i+1));
}
```

11. Steps 5-10 can be followed again to see if the stored pattern was successfully recalled, which can be observed in MATLAB using the [CARLsim MATLAB Analysis Toolbox](https://uci-carl.github.io/CARLsim6/ch9_matlab_oat.html) and custom built functions and scripts used to interact with the Toolbox [here](https://github.com/Hippocampome-Org/snn_analysis/).
