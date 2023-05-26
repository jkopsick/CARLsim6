# A Simulation Framework for Testing Data-Driven, Neuron-Type Specific SNNs of the Hippocampal Formation 
This repository includes information necessary to instantiate and simulate full-scale spiking neural network (SNN) models of the hippocampal formation, utilizing hippocampal subregion CA3 as an example. The following instructions assume that the user has Ubuntu installed or is using a supercomputing cluster that is Linux-based. Furthermore, installation instructions of the CARLsim software can be found in the parent directory's [README](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc), but will also be provided here.

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

* [Installation and Simulation of SNNs](#installation-and-simulation-of-the-SNNs)
	* [Ubuntu Users](#ubuntu-users)
	* [GMU Hopper Users](#users-with-access-to-GMU-Hopper-cluster)

## Language and Module Dependencies for the Software:
Beyond the dependencies of CARLsim6 described at the link above, the following dependencies are necessary to instantiate and simulate the full scale SNNs:

### Programming Languages and Proficiency
|Language|Proficiency|
|---|---|
|C++|basic to intermediate|

### Ubuntu 
|module|tested version(s)|
|---|---|
|gcc|9.3.0|
|nohup|8.30|
|CUDA|11.2.0|

### GMU Hopper Cluster
|module|tested version(s)|
|---|---|
|gcc|9.3.0|
|openmpi|4.0.4|
|CUDA|11.2.0|

## Creation of a network simulation
The creation of a cell-type and connection-type specific network and the subsequent simulation of it in CARLsim6 relies on the following critical components, which will each be described in their own section:

### Neuron Type Components
The two necessary components to defining a neuron type in CARLsim are the population size (i.e., the number of neurons) and the input-output relationship of the neuron type to the current it receives (i.e. parameters that govern the neuron type's firing patterns). The current release of [Hippocampome.org](https://hippocampome.org/php_v2/index.php) includes parameter estimates for both the [population sizes](https://hippocampome.org/php_v2/counts.php) and the [input-output relationships](https://hippocampome.org/php_v2/Izhikevich_model.php). Using the examples of the excitatory CA3 Pyramidal and inhibitory CA3 Axo-Axonic neuron types, the parameter estimates for their input-output relationships as defined by the Izhikevich model can be found [here](https://hippocampome.org/php_v2/neuron_page.php?id=2000) and [here](https://hippocampome.org/php_v2/neuron_page.php?id=2028) under the Izhikevich Model section of the pages (subtype 1 parameter sets are used for both neuron types). To create an entity that can define both the population size and input-output relationship for a neuron type, one must define a CARLsim group as follows (more details can be found at the top of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/projects/full_scale_CA3_snn/generateCONFIGStateSTP.h)):

```
  // Define a group for the excitatory neuron type CA3 Pyramidal
  int CA3_Pyramidal = sim.createGroup("CA3_Pyramidal", // name of the neuron type
                                      183844, // population size of the neuron type
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
                                       340,
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
The three necessary components to defining a connection type in CARLsim are the probability of connection, the short-term synaptic signals, and the conductance delay between two neuron types. In Hippocampome, this can only be performed for neuron types that have either a [known or potential connection](https://hippocampome.org/php_v2/connectivity.php). The current release of Hippocampome includes parameter estimates for the [connection probabilities](https://hippocampome.org/php_v2/synapse_probabilities_sypr.php), somatic distances of dendrites and axons that can be used for defining a [conductance delay](https://hippocampome.org/php_v2/synapse_probabilities_sd.php), and for the [short-term synaptic signals](https://hippocampome.org/php/synaptome_modeling.php). To create a connection between two neuron types that can define these three parameter types, one must define a connection in CARLsim as follows (illustrated for the CA3 Pyramidal to CA3 Axo-Axonic connection type; more details can be found within the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/projects/full_scale_CA3_snn/generateCONFIGStateSTP.h)):

```
  // Define a connection between Pyramidal and Axo-Axonic neuron types
  sim.connect(CA3_Pyramidal, // presynaptic neuron type 
              CA3_Axo_Axonic, // postsynaptic neuron type
              "random", // create connections randomly between the two neuron types
              RangeWeight(0.0f, 1.0f, 2.0f), // define the lower, initial, and upper weight bounds for the connection type
              0.008752842698051f, // define the connection probability
              RangeDelay(1), // define the conductance delay 
              RadiusRF(-1.0), // define that no receptive field should be formed
              SYN_PLASTIC, // indicate that the connection type's weight can be modified 
              0.9990419184313726f, // indicate the conductance of the fast currents of the synapse 
              0.0f // indicate the conductance of the slow currents of the synapse
	      );
              
   // Define short-term plasticity parameters between the Pyramidal and Axo-Axonic neuron types
   sim.setSTP(CA3_Pyramidal, // presynaptic neuron type 
              CA3_Axo_Axonic, // postsynaptic neuron type
              true, // define short-term plasticity for the connection type
              STPu(0.16712277686274518f, 0.0f), // define mean and standard deviation of the U parameter
              STPtauU(29.08398523529412f, 0.0f), // define mean and standard deviation of the tauU parameter; tau_f on Hippocampome
              STPtauX(464.5912673529413f, 0.0f), // define mean and standard deviation of the tauX parameter; tau_r on Hippocampome
              STPtdAMPA(5.411203675490194f, 0.0f), // define mean and standard deviation of the AMPA receptor current decay time constant
              STPtdNMDA(150.0f, 0.0f), // define mean and standard deviation of the NMDA receptor current decay time constant
              STPtdGABAa(6.0f, 0.0f), // define mean and standard deviation of the GABAA receptor current decay time constant
              STPtdGABAb(150.0f, 0.0f), // define mean and standard deviation of the GABAB receptor current decay time constant
              STPtrNMDA(0.0f, 0.0f), // define mean and standard deviation of the NMDA receptor current rise time constant; disabled by default but can be enabled with non-zero input
              STPtrGABAb(0.0f, 0.0f) // define mean and standard deviation of the GABAB receptor current rise time constant; disabled by default but can be enabled with non-zero input
	      );
  ```

### Monitoring of specific neuron types
The membrane potential (intracellular recording) and spikes (extracellular recording) of each neuron of a neuron type can be monitored and stored using the NeuronMonitor and SpikeMonitor CARLsim classes, respectively. To instantiate either monitor in a network simulation, it can be done so as follows (more details can be found within the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/projects/full_scale_CA3_snn/generateCONFIGStateSTP.h) and the top of the page [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/projects/full_scale_CA3_snn/generateSETUPStateSTP.h)):

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
Once the neuron type and connection type properties have been defined through CARLsim, along with the specific monitors needed to record intracellular and extracellular activity, the stimulation protocol and simulation duration are defined. For this particular example, we use a basic stimulation paradigm that will provide a continuous 300 pA current injection to each CA3 Pyramidal cell in the network (more details can be found [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/projects/full_scale_CA3_snn/src/main_full_scale_CA3_snn.cpp)):

```
  // Run full-scale CA3 network for 10 seconds, stimulating the major principal cell of the subregion
	for (int i=0; i<20; i++) {
        sim.setExternalCurrent(CA3_Pyramidal, 300.0f);
        sim.runNetwork(0,500);
	}
  ```

### The Simulation Summary
After each simulation is executed, the output of the network to the terminal can be saved to a text file. This allows for a user to get a quick and informative summary of what the network activity looked like during the simulation. Since this network is currently too large to run with our supercompting cluster, we have provided below an example simulation summary for a full-scale SNN of the mouse CA3 described in [Kopsick et al., 2022](https://link.springer.com/article/10.1007/s12559-021-09954-2) (more details can be found [here](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc_ca3/projects/synchronous/ca3_snn_GPU_02_26_23_baseline/ca3_snn_02_26_23_sync_baseline.txt)):

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
There are seven directories from which SNNs can be simulated: one SNN corresponding to each hippocampal sub-region and one SNN corresponding to the entire hippocampal formation. 

## Installation and Simulation of the SNNs

### Ubuntu Users
For users compiling and running simulations with Ubuntu, the following steps will need to be taken (this guide assumes use of an A100 GPU with CUDA 11.2):

1. Navigate to a directory of your choice (/home/username used in this guide) and create a new directory where the compiled CARLsim6 software will reside:

 ```
  cd ~
  mkdir git_05_26_23 
 ```

2. Download the CARLsim6 source code for this branch:

 ```
  git clone https://github.com/jkopsick/CARLsim6.git -b feat/CS6_hc
 ```

3. Update gencode in the CARLsim6 main directory CMakeLists text file, by changing the following [line](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/CMakeLists.txt#L54) to the compute capability of your GPU:

 ```
  cd CARLsim6
  nano CMakeLists.txt
  set(CARLSIM_CUDA_GENCODE "-gencode arch=compute_80,code=sm_80" CACHE STRING "CUDA target architecture and device, e.g. _80 for Ampere/A100, _86 for Ampere/RTX3090" ) # A100 has a compute capability of 8.0
 ```

4. Download the latest UNIX/Linux binary for [cmake](https://cmake.org/download/) and place it in the directory created from step 1 (e.g., /home/username/git_05_26_23 in this guide).

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

7. Download the [google test suite](https://github.com/google/googletest/releases/tag/release-1.10.0) (this guide assumes version 1.10.0) and place it in the directory created from step 1 (e.g., /home/username/git_05_26_23 in this guide).

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

10. With the google test suite and cmake installed, we can now install CARLsim6. Navigate back to the directory from step 1 (e.g., /home/username/git_05_26_23 in this guide) and perform the following:

  ```
  cd /home/username/git_05_26_23/CARLsim6
  mkdir .build
  cd .build
  /home/username/cmake-3.22/bin/cmake \
  -DCMAKE_INSTALL_PREFIX=/home/username/CARL6_05_26_23 \
  -DCARLSIM_NO_CUDA=OFF \
  /home/username/git_05_26_23/CARLsim6
  make all -j32
  make install -j32
  ```
  
11. With CARLsim6 now successfully installed, let's switch to the directory of the network that you would like to simulate (the code below uses the [full-scale CA3 network](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc/projects/full_scale_CA3_snn)), and run the following commands to compile the SNN:

  ```
  # Switch directory
  cd /home/username/git_05_26_23/CARLsim6/.build/projects/full_scale_CA3_snn

  # Clear previous version of executable, and then compile the SNN to create a new executable
  make clean && make -j32
  ```
  
12. Run the compiled simulation in the background using nohup and output the simulation summary to a text file

  ```
  nohup ./full_scale_CA3_snn > full_scale_CA3_snn_results_05_26_23.txt &
  ```
  
13. Once the simulation has been finished, view the simulation summary:

  ```
  cat full_scale_CA3_snn_results_05_26_23.txt
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
  mkdir git_05_26_23 
 ```

3. Download the CARLsim6 source code for this branch:

 ```
  git clone https://github.com/jkopsick/CARLsim6.git -b feat/CS6_hc
 ```

4. Update gencode in the CARLsim6 main directory CMakeLists text file, by changing the following [line](https://github.com/jkopsick/CARLsim6/blob/feat/CS6_hc/CMakeLists.txt#L54) to the compute capability of your GPU:

 ```
  cd CARLsim6
  nano CMakeLists.txt
  set(CARLSIM_CUDA_GENCODE "-gencode arch=compute_80,code=sm_80" CACHE STRING "CUDA target architecture and device, e.g. _80 for Ampere/A100, _86 for Ampere/RTX3090" ) # A100 has a compute capability of 8.0
 ```

5. Download the latest UNIX/Linux binary for [cmake](https://cmake.org/download/) and place it in the directory created from step 1 (e.g., /home/username/git_05_26_23 in this guide).

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

7. Download the [google test suite](https://github.com/google/googletest/releases/tag/release-1.10.0) (this guide assumes version 1.10.0) and place it in the directory created from step 1 (e.g., /home/username/git_05_26_23 in this guide).

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

10. With the google test suite and cmake installed, we can now install CARLsim6. Navigate back to the directory from step 1 (e.g., /home/username/git_05_26_23 in this guide) and perform the following:

  ```
  cd /home/username/git_05_26_23/CARLsim6
  mkdir .build
  cd .build
  salloc -p gpuq -q gpu --gres=gpu:A100.80gb:1 --ntasks-per-node=1 -t 0-01:00:00
  /home/username/cmake-3.22/bin/cmake \
  -DCMAKE_INSTALL_PREFIX=/home/username/CARL6_05_26_23 \
  -DCARLSIM_NO_CUDA=OFF \
  /home/username/git_05_26_23/CARLsim6
  make all -j32
  make install -j32
  ```
  
11. With CARLsim6 now successfully installed, let's switch to the directory of the network that you would like to simulate (the code below uses the [full-scale CA3 network](https://github.com/jkopsick/CARLsim6/tree/feat/CS6_hc/projects/full_scale_CA3_snn)), and run the following commands to compile the SNN:

  ```
  # Switch directory
  cd /home/username/git_05_26_23/CARLsim6/.build/projects/full_scale_CA3_snn

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
  #SBATCH --job-name="ca3_snn"
  #SBATCH --output /home/username/git_05_26_23/CARLsim6/.build/projects/full_scale_CA3_snn/full_scale_CA3_snn_results_05_26_23.txt
  #SBATCH --mail-type=END,FAIL
  #SBATCH --mail-user=username@gmu.edu
  #SBATCH --mem-per-cpu=100G
  srun ./full_scale_CA3_snn
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
  cat full_scale_CA3_snn_results_05_26_23.txt
  ```
