/* * Copyright (c) 2016 Regents of the University of California. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the distribution.
*
* 3. The names of its contributors may not be used to endorse or promote
*    products derived from this software without specific prior written
*    permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
* PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* *********************************************************************************************** *
* CARLsim
* created by: (MDR) Micah Richert, (JN) Jayram M. Nageswaran
* maintained by:
* (MA) Mike Avery <averym@uci.edu>
* (MB) Michael Beyeler <mbeyeler@uci.edu>,
* (KDC) Kristofor Carlson <kdcarlso@uci.edu>
* (TSC) Ting-Shuo Chou <tingshuc@uci.edu>
* (HK) Hirak J Kashyap <kashyaph@uci.edu>
*
* CARLsim v1.0: JM, MDR
* CARLsim v2.0/v2.1/v2.2: JM, MDR, MA, MB, KDC
* CARLsim3: MB, KDC, TSC
* CARLsim4: TSC, HK
*
* CARLsim available from http://socsci.uci.edu/~jkrichma/CARLsim/
* Ver 12/31/2016
*/

// include CARLsim user interface
#include <carlsim.h>

// Include libraries that will allow for us to perform vector operations, and
// print their results
#include <iostream>
#include <algorithm>
#include <vector>
#include <boost/iterator/counting_iterator.hpp>
#include <ctime>
#include <cstdlib>

// include stopwatch for timing
#include <stopwatch.h>

// Create a function that will print out all of the elements of a vector
void print(std::vector <int> const &a) {
 std::cout << "The vector elements are : ";

 for(int i=0; i < a.size(); i++)
		std::cout << a.at(i) << ' ';
}

// Create a function that will create a subset of a vector, which will can be
// used in defining Poisson rates for a fraction of neurons in a group
template<typename T>
std::vector<T> slice(std::vector<T> &v, int m, int n)
{
    std::vector<T> vec;
    std::copy(v.begin() + m, v.begin() + n + 1, std::back_inserter(vec));
    return vec;
}

int main() 
{
	// keep track of execution time
	Stopwatch watch;

	// ---------------- CONFIG STATE -------------------

	// create a network on GPU
	int numGPUs = 0;
	int randSeed = 10;
	CARLsim sim("ca3_snn_GPU", GPU_MODE, USER, numGPUs, randSeed);

	// include header file that contains generation of groups and their
	// properties
	#include "../generateCONFIGStateSTP.h"

	// Set the time constants for the excitatory and inhibitory receptors, and
	// set the method of integration to numerically solve the systems of ODEs
	// involved in the SNN
	// sim.setConductances(true);
	sim.setIntegrationMethod(RUNGE_KUTTA4, 5);

    // before calling setupNetwork, call loadSimulation
//     FILE* fId = NULL;
//     fId = fopen("ca3SNN1.dat", "rb");
//     sim.loadSimulation(fId);

	// ---------------- SETUP STATE -------------------
	// build the network
	watch.lap("setupNetwork");
	sim.setupNetwork();

    // ... wait until after setupNetwork is called
//     fclose(fId);

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

	// Define the location of those Pyramidal cells so that we choose the same Pyramidal cells each time we evoke a pattern
	for (int i = 0; i < numPyramidalFire; i++)
	{
		PC_vec_A.push_back(5*(i+1));
	}

	// include header file that contains generation of groups and their
	// properties
	#include "../generateSETUPStateSTP.h"

	// Set the seed of the pseudo-random number generator based on the current system time
	std::srand(std::time(nullptr));

	// ---------------- RUN STATE -------------------
	watch.lap("runNetwork");

 	sim.saveSimulation("ca3SNN1.dat", true); // define where to save the network structure to and save synapse info

	// run for a total of 10 seconds
	// at the end of each runNetwork call, SpikeMonitor stats will be printed
	for (int i=0; i<10000; i++)
	{
		// Apply random noisy current to the Pyramidal cells
		float pc_Iapp = 50.0f;
		float pc_Iapp_sd = 175.0f;
		
		for (int i = 0; i < pyr_range; i++)
		{
			pc_background_current.at(i) = pc_Iapp + pc_Iapp_sd * (float)drand48();
		}   

		// Apply random noisy current to the MFA-ORDEN cells
		float mfao_Iapp = 10.0f;
		float mfao_Iapp_sd = 50.0f;
		for (int i = 0; i < mfao_range; i++)
		{
			mfao_background_current.at(i) = mfao_Iapp + mfao_Iapp_sd * (float)drand48();
		}

		// Apply random noisy current to the Basket cells
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

	sim.saveSimulation("ca3SNN2.dat", true); // define where to save the network structure to and save synapse info

	// print stopwatch summary
	watch.stop();

	return 0;
}
