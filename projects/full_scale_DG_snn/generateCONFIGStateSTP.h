int DG_Granule = sim.createGroup("DG_Granule", 962200,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int DG_Hilar_Ectopic_Granule = sim.createGroup("DG_Hilar_Ectopic_Granule", 90,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int DG_Semilunar_Granule = sim.createGroup("DG_Semilunar_Granule", 163633,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int DG_Mossy = sim.createGroup("DG_Mossy", 25573,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int DG_Mossy_MOLDEN = sim.createGroup("DG_Mossy_MOLDEN", 5206,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int DG_AIPRIM = sim.createGroup("DG_AIPRIM", 8559,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_Axo_Axonic = sim.createGroup("DG_Axo_Axonic", 235,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_Basket = sim.createGroup("DG_Basket", 1612,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_Basket_CCK = sim.createGroup("DG_Basket_CCK", 128,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_HICAP = sim.createGroup("DG_HICAP", 833,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_HIPP = sim.createGroup("DG_HIPP", 6006,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_HIPROM = sim.createGroup("DG_HIPROM", 10,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_MOCAP = sim.createGroup("DG_MOCAP", 9067,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_MOLAX = sim.createGroup("DG_MOLAX", 5421,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_MOPP = sim.createGroup("DG_MOPP", 377,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_Neurogliaform = sim.createGroup("DG_Neurogliaform", 599,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_Outer_Molecular_Layer = sim.createGroup("DG_Outer_Molecular_Layer", 10,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int DG_Total_Molecular_Layer = sim.createGroup("DG_Total_Molecular_Layer", 7989,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
sim.setNeuronParameters(DG_Granule, 38.0, 0.4471817006977834, -77.40291336465064, -44.90054428048817, 
                                                0.0032799410036917333, 24.478421990208606, 15.489726771001997, -66.46563513097735,
                                                50.0, 1);
                     
sim.setNeuronParameters(DG_Hilar_Ectopic_Granule, 483.0, 2.902833205459678, -70.36524069201764, -55.22067008610016, 
                                                0.005950413295293897, 6.169909475441681, -37.81719001726479, -62.23422151292678,
                                                186.0, 1);
                     
sim.setNeuronParameters(DG_Semilunar_Granule, 910.0, 0.9435564806967471, -78.37613397491567, -58.40275866917288, 
                                                3.8574839631243084E-4, -77.48643495680187, 2.6115053746223396, -62.904163452964994,
                                                182.0, 1);
                     
sim.setNeuronParameters(DG_Mossy, 258.0, 1.49950884990439, -63.6729549510998, -37.1129841355212, 
                                                0.00375903046296513, -20.8444164211052, 28.2913663209474, -47.9809096414196,
                                                117.0, 1);
                     
sim.setNeuronParameters(DG_Mossy_MOLDEN, 100.0, 0.7, -60.0, -40.0, 
                                                0.03, -2.0, 35.0, -50.0,
                                                100.0, 1);
                     
sim.setNeuronParameters(DG_AIPRIM, 40.0, 0.509067437259929, -63.38902420486773, -40.191110416697136, 
                                                0.0024476820890401464, 0.1959311825060297, 7.365549714495806, -53.339848228554786,
                                                6.0, 1);
                     
sim.setNeuronParameters(DG_Axo_Axonic, 77.0, 1.5239741632130754, -65.2523473359262, -54.348565806815984, 
                                                0.04888361357400558, 12.273983921749725, 5.067137131069671, -64.47249010154965,
                                                -6.0, 1);
                     
sim.setNeuronParameters(DG_Basket, 208.0, 0.8125903858627955, -61.016678308421255, -37.83530689838587, 
                                                0.09707656341532063, 1.8941922582653348, 14.079737901205611, -36.23009115234176,
                                                553.0, 1);
                     
sim.setNeuronParameters(DG_Basket_CCK, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(DG_HICAP, 61.0, 0.50323683, -61.277145, -35.355354, 
                                                0.038811374, -1.6152531, 38.78533, -60.7653,
                                                49.0, 1);
                     
sim.setNeuronParameters(DG_HIPP, 74.0, 1.2833102565689956, -59.006040705399336, -50.53342176093605, 
                                                0.006380990562354527, 57.941038132372135, 0.5706428111684687, -56.97945472527379,
                                                -58.0, 1);
                     
sim.setNeuronParameters(DG_HIPROM, 510.0, 2.1576516288311827, -65.40026424056384, -45.28032898759648, 
                                                0.0010538576800869742, -21.23867256487969, -9.919793311273096, -49.31195572952896,
                                                28.0, 1);
                     
sim.setNeuronParameters(DG_MOCAP, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(DG_MOLAX, 236.0, 0.9216547082703215, -54.905892206927916, -41.690132101974086, 
                                                7.156417132021207E-4, -3.120896548577278, -11.612896100542436, -48.73470073384611,
                                                8.0, 1);
                     
sim.setNeuronParameters(DG_MOPP, 250.0, 0.6664007028736493, -74.6739552384572, -6.829340552521245, 
                                                0.0017358955175341517, -32.4238751704751, 17.027610952295348, -42.93010415260932,
                                                163.0, 1);
                     
sim.setNeuronParameters(DG_Neurogliaform, 250.0, 0.6664007028736493, -74.6739552384572, -6.829340552521245, 
                                                0.0017358955175341517, -32.4238751704751, 17.027610952295348, -42.93010415260932,
                                                163.0, 1);
                     
sim.setNeuronParameters(DG_Outer_Molecular_Layer, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(DG_Total_Molecular_Layer, 236.0, 0.9216547082703215, -54.905892206927916, -41.690132101974086, 
                                                7.156417132021207E-4, -3.120896548577278, -11.612896100542436, -48.73470073384611,
                                                8.0, 1);
                     
sim.connect(DG_Semilunar_Granule, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000246348350912f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7689857352941178f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002373906054834f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.3942733882352942f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000209780943116f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.3822442147058815f, 0.0f);
                       
sim.connect(DG_Axo_Axonic, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 3.993398634313726f, 0.0f);
                       
sim.connect(DG_Basket, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.450937388235295f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3250927354901965f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004664758156681f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2165347343137256f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005739093342323f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1020258519607844f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001136342846197f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1669602950980393f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00175786138018f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2198654115686278f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000722557535345f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7612632005882354f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003393746436679f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6186263205882359f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005951546846227f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.002001301960783f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006383060327957f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0993173705882344f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004190449911524f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.8301100901960785f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003156927728471f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1094856980392156f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000279013266446f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6713383176470586f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002165965297451f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8623950068627455f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000253848361408f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8467085588235295f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004957027200379f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6691140738235306f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006042793556181f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.490337105980392f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001357907731978f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.603063112745098f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000918230121042f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2847210275490202f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003670789338811f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.222431298529412f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001794498140689f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9132102887254907f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006540948766549f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6416548522549015f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006684402075428f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7215435348039216f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00409676636947f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.893066253921569f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Semilunar_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00302092845206f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.742165159117647f, 0.0f);
                       
sim.connect(DG_Granule, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005576139136325f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4465030857843146f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002394976245137f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4912908459803924f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010701448380191f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7136059196078424f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005599000285792f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5491833155882353f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016290923084127f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7264777039215686f, 0.0f);
                       
sim.connect(DG_Axo_Axonic, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.3564423372549017f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010888298191607f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4305655970588236f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006393581781728f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3355258495098037f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001369477842263f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4567668728431369f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000960825478946f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1915528849019603f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003704785015266f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1285980180392152f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002136757473868f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8223428613725489f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00616863006785f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.410565737254902f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016447373908742f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4706459577450979f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012008272965859f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6849474254901957f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Hilar_Ectopic_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011281122078643f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.559297351274509f, 0.0f);
                       
sim.connect(DG_Granule, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007770702492641f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7130231039215686f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005809988588433f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8159949990196076f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012170237031978f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.067500893137255f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003757839155927f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.825968313725491f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010514716232703f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.047495414705883f, 0.0f);
                       
sim.connect(DG_Axo_Axonic, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.8008919049019596f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.0056936368605f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7800617872549014f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009443711984162f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7696379147058823f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007415039021732f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9429821529411766f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Mossy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007227442225652f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8374429460784312f, 0.0f);
                       
sim.connect(DG_Granule, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007930998740167f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6240771750000005f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008756833293909f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7083352264705893f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.017439006452004f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9321862676470596f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003891414885502f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6936449647058829f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013492333944281f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.914059799019608f, 0.0f);
                       
sim.connect(DG_Axo_Axonic, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.623758897058824f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011390374129152f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6161541605882352f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004968282279139f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5145918775490195f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000851779180359f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6440077009803915f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000577707477558f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3412367035294117f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002946010758391f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2733457750980393f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001838190201214f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9031940144117648f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003991999803743f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5784446467647057f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.022705758335649f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6304318817647059f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016624674015608f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.819235821960784f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Mossy_MOLDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016630669260621f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7101486352941173f, 0.0f);
                       
sim.connect(DG_Granule, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003907183007844f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5893052701960786f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004204142228314f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7228616957843141f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013246144131608f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0680970960784317f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001429745069609f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6159815990196083f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008090068613231f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0449045509803923f, 0.0f);
                       
sim.connect(DG_Basket, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8684773049019607f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.427888246078432f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007474261250632f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5831209869607845f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006436151888561f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4783323809803925f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001576054135433f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.607770336372549f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.0010986671695f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3568990118627453f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00391117507577f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.291456158235294f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001868396757278f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.912538039901961f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007242796733434f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6769235029411758f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.019060189697825f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6550561039215683f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012260445213416f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8612753372549016f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012362514709284f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7194551182352944f, 0.0f);
                       
sim.connect(DG_Granule, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003459957633695f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4574951808823529f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003812226921111f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6858820617647063f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011742114225956f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9955955490196073f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00121950957661f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.598688814411765f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00718011006509f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.986619964705883f, 0.0f);
                       
sim.connect(DG_Basket, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9814099656862745f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5707877784313724f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006157384825599f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5880943446078442f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005293803331218f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.529504187254902f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000875570987369f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.641433267941177f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000414895465684f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4463490236274514f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003103149800192f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3905687682352945f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001591156174114f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9582930117647058f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006092621369002f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7091733313725486f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.017758002750564f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.643691253529412f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01166299459587f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.754693210784314f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01157734941057f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7002550490196073f, 0.0f);
                       
sim.connect(DG_Granule, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005224636315358f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5961713043137251f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00207441570702f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3267326852941175f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005015190391233f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4661370065686268f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016464234533282f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5443284013725496f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009827479138146f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5292478466666668f, 0.0f);
                       
sim.connect(DG_Basket, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5503680098039219f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.141093939803922f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006841885019301f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2610278196078428f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005580537103924f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0889017131372547f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000772515909602f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2334560256862748f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000294709794532f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8849112993137256f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003001278800807f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8372355770588233f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00180834515663f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.6585318823529412f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006132558051651f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2610756022549015f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.019510840048269f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.350271981960784f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013361863207804f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5105992159803918f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013626601321297f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3507506080392162f, 0.0f);
                       
sim.connect(DG_Granule, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004219518469803f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5397202829411767f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002667521867895f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6446912627450985f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011572751585649f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8512287441176463f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001635814019712f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5585772989215683f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00833004758811f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8342488294117643f, 0.0f);
                       
sim.connect(DG_Basket, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.929368128431373f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3904002858823532f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006405825107123f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4143723250000002f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00387424067888f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3148902965686273f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000531450204479f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.65009796117647f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000252015532921f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.313700366176471f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002344697262119f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2407201547058824f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00135295596946f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9153829293137254f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003227591652069f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.665508009509804f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01111178109029f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6973214081372552f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007942339468636f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8921390651960792f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Total_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007589163703484f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7069620407843138f, 0.0f);
                       
sim.connect(DG_Granule, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00435758797082f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.532772347058823f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004599437752379f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6327054088235293f, 0.0f);
                       
sim.connect(DG_Mossy, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013446556592773f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7473082294117648f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00175505236326f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5160308705882353f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009174756831733f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7300719406862743f, 0.0f);
                       
sim.connect(DG_Basket, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.752791878921569f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2587404929411772f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010207138140847f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3309606295098042f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006066921089609f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.181435445980392f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001015861172069f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.507665300882353f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00072060963872f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2289551196078432f, 0.0f);
                       
sim.connect(DG_MOPP, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003252567623649f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1668390960784312f, 0.0f);
                       
sim.connect(DG_HICAP, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002614161388656f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8536366448039213f, 0.0f);
                       
sim.connect(DG_HIPP, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00441823581836f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5525326373529416f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.015025722976211f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6107996715686277f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011074120181215f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8171189000000005f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_MOLAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009929816778799f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6248559668627451f, 0.0f);
                       
sim.connect(DG_Granule, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003073739404079f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4764680518627444f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003789979242463f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5620510112745098f, 0.0f);
                       
sim.connect(DG_Mossy, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009369209439127f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7141636833333336f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00110850969484f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4772023284313736f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006556250999777f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6998364990196073f, 0.0f);
                       
sim.connect(DG_Basket, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6794681333333337f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.23256245f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005773381225503f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4935293260784308f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003658598702564f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3427865743137248f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000451152972594f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4715396862745096f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000152890781864f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2176647468627448f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002193822408185f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1563003396078426f, 0.0f);
                       
sim.connect(DG_HICAP, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001328277163638f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8509313368627457f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003004620717906f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5095367247058826f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01594575185283f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5502470637254901f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010800312645077f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7646657411764703f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_Outer_Molecular_Layer, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010659211167303f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.584807533921568f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001329677125024f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6172632913725487f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00188619646633f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5046798694117653f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000498692953492f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6227019611764704f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 8.44701237543432E-05f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.307786768921569f, 0.0f);
                       
sim.connect(DG_MOPP, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002492256885804f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.238008955098039f, 0.0f);
                       
sim.connect(DG_HIPP, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004257104380639f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.595442078823529f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_Neurogliaform, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001806565787613f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6431289653921577f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00160358997181f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6782519490196073f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002424530985263f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5542641854901962f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000621323396011f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6806606295098039f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000155783018191f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3582656109803923f, 0.0f);
                       
sim.connect(DG_MOPP, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002789829860406f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.284482985882353f, 0.0f);
                       
sim.connect(DG_HIPP, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005528881431523f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6519856759803928f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_MOPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002385757619015f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7054732431372555f, 0.0f);
                       
sim.connect(DG_Granule, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003335366818703f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2605582779411764f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004226804598068f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.370400147156862f, 0.0f);
                       
sim.connect(DG_Mossy, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011106612095295f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4198414599999998f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001207633410786f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.380832441862745f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007253759966575f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4096994890196082f, 0.0f);
                       
sim.connect(DG_Basket, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.399481216568627f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0439874199999999f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006768556186511f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.128587416960784f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005100086995685f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0902896375490199f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00076489208622f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1968751886274513f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000399765042528f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9343554277450978f, 0.0f);
                       
sim.connect(DG_MOPP, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002854926134417f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8936896522549023f, 0.0f);
                       
sim.connect(DG_HICAP, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001872592256246f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.4963109142156861f, 0.0f);
                       
sim.connect(DG_HIPP, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004708123152154f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1513419249019607f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01772085591299f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1077842981372548f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01197856276322f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2566959709803927f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_HICAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011789358824225f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2046014903921562f, 0.0f);
                       
sim.connect(DG_Granule, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005945741286763f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3047289830392161f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003701579194087f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.421042026764706f, 0.0f);
                       
sim.connect(DG_Mossy, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009927693604606f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3761969022549017f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002636117520914f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.39528828990196f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008453135338575f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3748444840196077f, 0.0f);
                       
sim.connect(DG_Basket, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4077755219607846f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.120406524607843f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003701293376491f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.285416879117647f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007118304599601f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.260508449313726f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005239519861014f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3992986274509804f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_HIPP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005422123480904f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4044223082352938f, 0.0f);
                       
sim.connect(DG_Granule, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005372056517916f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6904441225490212f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007157417096701f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8422575578431377f, 0.0f);
                       
sim.connect(DG_Mossy, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01524177380043f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1169540921568633f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002249239770253f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8862015431372539f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010664129073017f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1010588941176476f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006654494163725f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8354378921568628f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002557856172587f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.698789052647058f, 0.0f);
                       
sim.connect(DG_HICAP, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002828034724966f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9546799349019602f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.018933526913856f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7741351953921558f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016578244851439f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0210957039215676f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_HIPROM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.017029084952703f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.891544807843137f, 0.0f);
                       
sim.connect(DG_Granule, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005330963888029f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.67566805f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005796293930382f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8038036803921575f, 0.0f);
                       
sim.connect(DG_Mossy, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013780020954373f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0413458088235297f, 0.0f);
                       
sim.connect(DG_Hilar_Ectopic_Granule, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002251998277636f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8764011058823535f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009988326358214f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0281704813725487f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007634667866422f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.790327531666667f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004612481055885f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.673046286862746f, 0.0f);
                       
sim.connect(DG_Outer_Molecular_Layer, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000704754524239f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8210837715686274f, 0.0f);
                       
sim.connect(DG_Neurogliaform, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000366060886406f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4756629275490196f, 0.0f);
                       
sim.connect(DG_MOPP, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002733150167592f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3984655651960785f, 0.0f);
                       
sim.connect(DG_HICAP, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00156686148572f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.941482236372549f, 0.0f);
                       
sim.connect(DG_HIPP, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.0042867816518f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6983086715686269f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.019795889402508f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7332064200000001f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013804180304277f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9419848078431372f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_AIPRIM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014306007879898f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8670511162745091f, 0.0f);
                       
sim.connect(DG_Semilunar_Granule, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001664788849652f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5455183091176472f, 0.0f);
                       
sim.connect(DG_Mossy, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001490512022168f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6275890470588241f, 0.0f);
                       
sim.connect(DG_Mossy_MOLDEN, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000336160071274f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6157706994117642f, 0.0f);
                       
sim.connect(DG_Basket, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7314716029411774f, 0.0f);
                       
sim.connect(DG_Basket_CCK, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3193317972549017f, 0.0f);
                       
sim.connect(DG_Total_Molecular_Layer, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002133383685441f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5312942986274516f, 0.0f);
                       
sim.connect(DG_MOLAX, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001823228799334f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4344026106862742f, 0.0f);
                       
sim.connect(DG_HICAP, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002020075131949f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.8467227072549022f, 0.0f);
                       
sim.connect(DG_HIPROM, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006917656917644f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5589127085294114f, 0.0f);
                       
sim.connect(DG_AIPRIM, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00729186681983f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7574173245098041f, 0.0f);
                       
sim.connect(DG_MOCAP, DG_MOCAP, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006586694955391f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6117274608823533f, 0.0f);
                       
sim.setSTP(DG_Semilunar_Granule, DG_Granule, true, STPu(0.24557737421568632f, 0.0f),
                         STPtauU(20.960681857843127f, 0.0f),
                         STPtauX(359.8029852941178f, 0.0f),
                         STPtdAMPA(6.01872939019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Granule, true, STPu(0.30452071892156873f, 0.0f),
                         STPtauU(20.224144985294124f, 0.0f),
                         STPtauX(166.162493245098f, 0.0f),
                         STPtdAMPA(5.357017162745096f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Granule, true, STPu(0.3055107754901961f, 0.0f),
                         STPtauU(20.700799749999998f, 0.0f),
                         STPtauX(165.71526893137255f, 0.0f),
                         STPtdAMPA(5.346721399019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Axo_Axonic, DG_Granule, true, STPu(0.30224365803921566f, 0.0f),
                         STPtauU(7.207859273529413f, 0.0f),
                         STPtauX(532.2251779411765f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.275954375490195f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_Granule, true, STPu(0.33197135647058823f, 0.0f),
                         STPtauU(6.34742811862745f, 0.0f),
                         STPtauX(433.8757912745099f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.543457785294116f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_Granule, true, STPu(0.2903052244117648f, 0.0f),
                         STPtauU(7.799352564705881f, 0.0f),
                         STPtauX(720.4611399019608f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(9.162057500980387f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Granule, true, STPu(0.2626203666666667f, 0.0f),
                         STPtauU(7.927759420588235f, 0.0f),
                         STPtauX(503.20331970588234f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.018591199019607f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Granule, true, STPu(0.2679979101960783f, 0.0f),
                         STPtauU(7.993900930392159f, 0.0f),
                         STPtauX(514.778772352941f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.469724474509806f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Granule, true, STPu(0.2741827582352941f, 0.0f),
                         STPtauU(7.514810410784317f, 0.0f),
                         STPtauX(512.0331719607844f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.521415727450977f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Granule, true, STPu(0.1848142694117647f, 0.0f),
                         STPtauU(11.642639029411777f, 0.0f),
                         STPtauX(937.2721327450984f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(10.22396674901961f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Granule, true, STPu(0.264593233627451f, 0.0f),
                         STPtauU(8.926071110784314f, 0.0f),
                         STPtauX(549.4105462745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(9.180416165686278f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Granule, true, STPu(0.26201888401960777f, 0.0f),
                         STPtauU(9.324417377450978f, 0.0f),
                         STPtauX(547.3600308823528f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(9.534794654901962f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Granule, true, STPu(0.2781370428431373f, 0.0f),
                         STPtauU(8.39594222254902f, 0.0f),
                         STPtauX(559.1427568627453f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.934875973529408f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Granule, true, STPu(0.2731537352941176f, 0.0f),
                         STPtauU(9.10981809705883f, 0.0f),
                         STPtauX(515.7601542156865f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.968385576470588f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Granule, true, STPu(0.26567212852941163f, 0.0f),
                         STPtauU(8.01647627745098f, 0.0f),
                         STPtauX(407.9945085294118f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.817607640196079f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Granule, true, STPu(0.2715840931372549f, 0.0f),
                         STPtauU(8.647244083333334f, 0.0f),
                         STPtauX(530.0170644117647f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.568740229411764f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Semilunar_Granule, true, STPu(0.196077468235294f, 0.0f),
                         STPtauU(67.28323506862746f, 0.0f),
                         STPtauX(389.3454254901961f, 0.0f),
                         STPtdAMPA(5.172445370588236f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Semilunar_Granule, true, STPu(0.236358072254902f, 0.0f),
                         STPtauU(72.28862058823529f, 0.0f),
                         STPtauX(229.97125460784306f, 0.0f),
                         STPtdAMPA(4.522053429411765f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Semilunar_Granule, true, STPu(0.2359531102941177f, 0.0f),
                         STPtauU(71.94781877450981f, 0.0f),
                         STPtauX(229.81188243137245f, 0.0f),
                         STPtdAMPA(4.496627249019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Semilunar_Granule, true, STPu(0.1903191554901961f, 0.0f),
                         STPtauU(27.616613529411758f, 0.0f),
                         STPtauX(570.444487745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.017668466666669f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Semilunar_Granule, true, STPu(0.1896649762745097f, 0.0f),
                         STPtauU(28.06180986764706f, 0.0f),
                         STPtauX(567.7430088235294f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.562368292156862f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Semilunar_Granule, true, STPu(0.20891323676470575f, 0.0f),
                         STPtauU(23.65028330392157f, 0.0f),
                         STPtauX(567.0923083333334f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.611680397058822f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Semilunar_Granule, true, STPu(0.1895504568039216f, 0.0f),
                         STPtauU(33.65844156372548f, 0.0f),
                         STPtauX(585.4805097058822f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.643563276470585f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Semilunar_Granule, true, STPu(0.18612266525490198f, 0.0f),
                         STPtauU(36.48398045098039f, 0.0f),
                         STPtauX(576.2187231372548f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.753227152941176f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Semilunar_Granule, true, STPu(0.11175114699019616f, 0.0f),
                         STPtauU(55.73253938235295f, 0.0f),
                         STPtauX(713.2264027450981f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.526448717647061f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Semilunar_Granule, true, STPu(0.21358771205882354f, 0.0f),
                         STPtauU(26.198237382352954f, 0.0f),
                         STPtauX(585.7700422549023f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.006682708823526f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Semilunar_Granule, true, STPu(0.21185262607843142f, 0.0f),
                         STPtauU(30.925798725490193f, 0.0f),
                         STPtauX(572.04044f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.611761079411763f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Semilunar_Granule, true, STPu(0.20327641882352934f, 0.0f),
                         STPtauU(28.474365960784315f, 0.0f),
                         STPtauX(497.8346670588235f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.206619258823529f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Semilunar_Granule, true, STPu(0.20687456607843147f, 0.0f),
                         STPtauU(29.130953637254898f, 0.0f),
                         STPtauX(569.919963235294f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.186255117647056f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Hilar_Ectopic_Granule, true, STPu(0.18851219725490198f, 0.0f),
                         STPtauU(73.7796555f, 0.0f),
                         STPtauX(387.04804f, 0.0f),
                         STPtdAMPA(5.10847598235294f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Hilar_Ectopic_Granule, true, STPu(0.20162324480392158f, 0.0f),
                         STPtauU(45.69925542156864f, 0.0f),
                         STPtauX(397.87753490196087f, 0.0f),
                         STPtdAMPA(4.563566150000002f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Hilar_Ectopic_Granule, true, STPu(0.24166889000000005f, 0.0f),
                         STPtauU(76.55315462745095f, 0.0f),
                         STPtauX(257.5735059411765f, 0.0f),
                         STPtdAMPA(4.6227223627451f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Hilar_Ectopic_Granule, true, STPu(0.20158502009803925f, 0.0f),
                         STPtauU(74.72937109803924f, 0.0f),
                         STPtauX(407.3879498039217f, 0.0f),
                         STPtdAMPA(5.334519755882352f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Hilar_Ectopic_Granule, true, STPu(0.24195205539215695f, 0.0f),
                         STPtauU(76.83529728431377f, 0.0f),
                         STPtauX(257.56216362745096f, 0.0f),
                         STPtdAMPA(4.64972177254902f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Axo_Axonic, DG_Hilar_Ectopic_Granule, true, STPu(0.2351765358823529f, 0.0f),
                         STPtauU(20.113844975490196f, 0.0f),
                         STPtauX(588.2463215686275f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.870180778431374f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Hilar_Ectopic_Granule, true, STPu(0.18990430970588243f, 0.0f),
                         STPtauU(33.498174411764715f, 0.0f),
                         STPtauX(602.5806063725489f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.524444314705882f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Hilar_Ectopic_Granule, true, STPu(0.19217233460784314f, 0.0f),
                         STPtauU(33.209042568627446f, 0.0f),
                         STPtauX(607.631737254902f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.890698056862742f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Hilar_Ectopic_Granule, true, STPu(0.20935192539215683f, 0.0f),
                         STPtauU(27.29962025980392f, 0.0f),
                         STPtauX(606.2435996078431f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.872037644117645f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Hilar_Ectopic_Granule, true, STPu(0.19056734843137263f, 0.0f),
                         STPtauU(38.99297207843136f, 0.0f),
                         STPtauX(622.1107214705884f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.841638432352941f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Hilar_Ectopic_Granule, true, STPu(0.1871442800980392f, 0.0f),
                         STPtauU(42.05208978431374f, 0.0f),
                         STPtauX(610.0350535294116f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.974652856862744f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Hilar_Ectopic_Granule, true, STPu(0.11717780974509805f, 0.0f),
                         STPtauU(53.92975663725489f, 0.0f),
                         STPtauX(773.0049111764707f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.860564847058822f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Hilar_Ectopic_Granule, true, STPu(0.21520284352941174f, 0.0f),
                         STPtauU(26.41913301470588f, 0.0f),
                         STPtauX(648.0375743137255f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.485818956862745f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Hilar_Ectopic_Granule, true, STPu(0.20960401892156863f, 0.0f),
                         STPtauU(33.55712835294117f, 0.0f),
                         STPtauX(639.0452750980394f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.1715151078431365f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Hilar_Ectopic_Granule, true, STPu(0.20569745980392157f, 0.0f),
                         STPtauU(28.2306784019608f, 0.0f),
                         STPtauX(533.3756960784314f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.592501644117646f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Hilar_Ectopic_Granule, true, STPu(0.20446996460784317f, 0.0f),
                         STPtauU(32.870653117647045f, 0.0f),
                         STPtauX(593.8683632352942f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.562760847058826f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Mossy, true, STPu(0.1512684136862745f, 0.0f),
                         STPtauU(73.47908526470589f, 0.0f),
                         STPtauX(428.5825544117644f, 0.0f),
                         STPtdAMPA(5.346932748039217f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Mossy, true, STPu(0.1937136299019607f, 0.0f),
                         STPtauU(70.53734122549024f, 0.0f),
                         STPtauX(375.0773532352943f, 0.0f),
                         STPtdAMPA(4.882551656862744f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Mossy, true, STPu(0.24460314980392134f, 0.0f),
                         STPtauU(71.64176434313725f, 0.0f),
                         STPtauX(249.32941535294117f, 0.0f),
                         STPtdAMPA(4.257146465686274f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Mossy, true, STPu(0.2052323959803922f, 0.0f),
                         STPtauU(44.79453899019607f, 0.0f),
                         STPtauX(379.59722019607864f, 0.0f),
                         STPtdAMPA(4.139583630392156f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Mossy, true, STPu(0.24442789813725493f, 0.0f),
                         STPtauU(71.1297935882353f, 0.0f),
                         STPtauX(248.82627196078425f, 0.0f),
                         STPtdAMPA(4.229381054901961f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Axo_Axonic, DG_Mossy, true, STPu(0.23997055813725482f, 0.0f),
                         STPtauU(20.213299328431376f, 0.0f),
                         STPtauX(564.6371762745096f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.3121236490196075f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Mossy, true, STPu(0.20109470921568628f, 0.0f),
                         STPtauU(30.91207701960786f, 0.0f),
                         STPtauX(569.7068203921568f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.714504127450981f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Mossy, true, STPu(0.22206020637254895f, 0.0f),
                         STPtauU(30.406858843137258f, 0.0f),
                         STPtauX(569.247468529412f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.29847680490196f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Mossy, true, STPu(0.2117609849999999f, 0.0f),
                         STPtauU(28.85781661764705f, 0.0f),
                         STPtauX(506.4517962745097f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.959648570588236f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Mossy, true, STPu(0.21153270637254915f, 0.0f),
                         STPtauU(32.57512080392157f, 0.0f),
                         STPtauX(562.7241327450979f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.865102864705882f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Mossy_MOLDEN, true, STPu(0.14732188193137258f, 0.0f),
                         STPtauU(79.48053458823529f, 0.0f),
                         STPtauX(417.714749019608f, 0.0f),
                         STPtdAMPA(5.447050158823525f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Mossy_MOLDEN, true, STPu(0.18736276328431373f, 0.0f),
                         STPtauU(77.7236695490196f, 0.0f),
                         STPtauX(365.84813000000014f, 0.0f),
                         STPtdAMPA(5.033277472549021f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Mossy_MOLDEN, true, STPu(0.2387562465686274f, 0.0f),
                         STPtauU(78.6176958627451f, 0.0f),
                         STPtauX(236.66662382352936f, 0.0f),
                         STPtdAMPA(4.4051639950980395f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Mossy_MOLDEN, true, STPu(0.19705658254901967f, 0.0f),
                         STPtauU(48.35725287254902f, 0.0f),
                         STPtauX(368.3968520588234f, 0.0f),
                         STPtdAMPA(4.286189702941177f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Mossy_MOLDEN, true, STPu(0.2384717228431373f, 0.0f),
                         STPtauU(78.01187185294117f, 0.0f),
                         STPtauX(236.43585574509797f, 0.0f),
                         STPtdAMPA(4.375475808823529f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Axo_Axonic, DG_Mossy_MOLDEN, true, STPu(0.23412091774509802f, 0.0f),
                         STPtauU(22.67879507843136f, 0.0f),
                         STPtauX(566.5189575490195f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.485342840196077f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Mossy_MOLDEN, true, STPu(0.19179904245098045f, 0.0f),
                         STPtauU(34.27696132843136f, 0.0f),
                         STPtauX(566.2048935294118f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.994605547058824f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Mossy_MOLDEN, true, STPu(0.19155349318627457f, 0.0f),
                         STPtauU(34.884841147058815f, 0.0f),
                         STPtauX(561.0367720588233f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.307039402941175f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Mossy_MOLDEN, true, STPu(0.20776677764705884f, 0.0f),
                         STPtauU(29.215151568627455f, 0.0f),
                         STPtauX(561.5735725490197f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.284023975490197f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Mossy_MOLDEN, true, STPu(0.18916955029411756f, 0.0f),
                         STPtauU(41.32619976470589f, 0.0f),
                         STPtauX(575.4517877450978f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.200093335294116f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Mossy_MOLDEN, true, STPu(0.18570152568627457f, 0.0f),
                         STPtauU(44.850232539215675f, 0.0f),
                         STPtauX(565.2785295098039f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.308964833333334f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Mossy_MOLDEN, true, STPu(0.1184704586568628f, 0.0f),
                         STPtauU(58.57249012745096f, 0.0f),
                         STPtauX(710.3420262745095f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.402421887254903f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Mossy_MOLDEN, true, STPu(0.2146011361764705f, 0.0f),
                         STPtauU(27.740092205882355f, 0.0f),
                         STPtauX(591.4930421568628f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.893224064705881f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Mossy_MOLDEN, true, STPu(0.21500724068627433f, 0.0f),
                         STPtauU(34.03268216666665f, 0.0f),
                         STPtauX(565.6633354901959f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.565073390196078f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Mossy_MOLDEN, true, STPu(0.20557849725490196f, 0.0f),
                         STPtauU(31.88818012254902f, 0.0f),
                         STPtauX(504.0394372549019f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.160692264705884f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Mossy_MOLDEN, true, STPu(0.20463635221568635f, 0.0f),
                         STPtauU(35.95296376470586f, 0.0f),
                         STPtauX(559.7969285294117f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.1009341186274515f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Axo_Axonic, true, STPu(0.15962393264705882f, 0.0f),
                         STPtauU(63.202162784313714f, 0.0f),
                         STPtauX(380.2380558823529f, 0.0f),
                         STPtdAMPA(5.130446879411764f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Axo_Axonic, true, STPu(0.1718662198039217f, 0.0f),
                         STPtauU(66.97431306862747f, 0.0f),
                         STPtauX(382.8755431372547f, 0.0f),
                         STPtdAMPA(4.954686344117645f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Axo_Axonic, true, STPu(0.20568944245098042f, 0.0f),
                         STPtauU(76.01492822549018f, 0.0f),
                         STPtauX(234.80423416666673f, 0.0f),
                         STPtdAMPA(4.065015020588237f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Axo_Axonic, true, STPu(0.16995302490196074f, 0.0f),
                         STPtauU(42.46556179411764f, 0.0f),
                         STPtauX(355.4074135784314f, 0.0f),
                         STPtdAMPA(4.407413729411766f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Axo_Axonic, true, STPu(0.20527028666666655f, 0.0f),
                         STPtauU(75.68604098039215f, 0.0f),
                         STPtauX(233.31584019607854f, 0.0f),
                         STPtdAMPA(4.054033479411764f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_Axo_Axonic, true, STPu(0.2520129179411766f, 0.0f),
                         STPtauU(8.94100569411765f, 0.0f),
                         STPtauX(424.6506859803921f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.7849408901960775f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_Axo_Axonic, true, STPu(0.20784384588235294f, 0.0f),
                         STPtauU(15.815928607843132f, 0.0f),
                         STPtauX(695.3628193137254f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.243794134313724f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Axo_Axonic, true, STPu(0.16161510045098043f, 0.0f),
                         STPtauU(25.555010313725493f, 0.0f),
                         STPtauX(554.36363627451f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.042519920588236f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Axo_Axonic, true, STPu(0.16238993611764707f, 0.0f),
                         STPtauU(25.762671421568637f, 0.0f),
                         STPtauX(550.3620445098038f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.410849934313724f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Axo_Axonic, true, STPu(0.17747297529411768f, 0.0f),
                         STPtauU(21.36681078921568f, 0.0f),
                         STPtauX(544.6724866666666f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.390195442156862f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Axo_Axonic, true, STPu(0.1658534563823529f, 0.0f),
                         STPtauU(30.56161061274509f, 0.0f),
                         STPtauX(587.7803731372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.313237286274508f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Axo_Axonic, true, STPu(0.16320776818627444f, 0.0f),
                         STPtauU(33.158362965686266f, 0.0f),
                         STPtauX(576.1934898039214f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.431283525490196f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Axo_Axonic, true, STPu(0.09839946880392153f, 0.0f),
                         STPtauU(46.817181999999974f, 0.0f),
                         STPtauX(753.0230900980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.572964180392156f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Axo_Axonic, true, STPu(0.18606332356862745f, 0.0f),
                         STPtauU(23.08339488235294f, 0.0f),
                         STPtauX(623.8380178431372f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.156666340196076f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Axo_Axonic, true, STPu(0.18072886696078427f, 0.0f),
                         STPtauU(26.963135617647072f, 0.0f),
                         STPtauX(561.5884450000003f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.566174282352943f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Axo_Axonic, true, STPu(0.17309356809803916f, 0.0f),
                         STPtauU(25.02186284803921f, 0.0f),
                         STPtauX(472.80823754901985f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.167866970588234f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Axo_Axonic, true, STPu(0.18080208093137257f, 0.0f),
                         STPtauU(28.753339740196083f, 0.0f),
                         STPtauX(585.0927639215688f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.204509538235293f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Basket, true, STPu(0.19686698696078428f, 0.0f),
                         STPtauU(62.278053745098035f, 0.0f),
                         STPtauX(151.26525778431372f, 0.0f),
                         STPtdAMPA(3.5661535774509816f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Basket, true, STPu(0.20784155294117637f, 0.0f),
                         STPtauU(54.208135607843154f, 0.0f),
                         STPtauX(207.1757041666667f, 0.0f),
                         STPtdAMPA(4.187713787254901f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Basket, true, STPu(0.25450898117647064f, 0.0f),
                         STPtauU(69.31635444117647f, 0.0f),
                         STPtauX(117.36535893137255f, 0.0f),
                         STPtdAMPA(3.395481676470588f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Basket, true, STPu(0.20772369588235293f, 0.0f),
                         STPtauU(36.31030493137257f, 0.0f),
                         STPtauX(175.50873691176471f, 0.0f),
                         STPtdAMPA(3.745271141176472f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Basket, true, STPu(0.254685843627451f, 0.0f),
                         STPtauU(69.28744642156865f, 0.0f),
                         STPtauX(117.20933691176474f, 0.0f),
                         STPtdAMPA(3.3788651431372547f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_Basket, true, STPu(0.30953931803921564f, 0.0f),
                         STPtauU(7.440507790196075f, 0.0f),
                         STPtauX(195.536072009804f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.648072616666666f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_Basket, true, STPu(0.24505156196078437f, 0.0f),
                         STPtauU(11.452646214705885f, 0.0f),
                         STPtauX(488.77890450980385f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.292733699019609f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Basket, true, STPu(0.19334783421568624f, 0.0f),
                         STPtauU(16.825561200980392f, 0.0f),
                         STPtauX(326.1490796666668f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.20295721862745f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Basket, true, STPu(0.19984129382352933f, 0.0f),
                         STPtauU(16.550165848039214f, 0.0f),
                         STPtauX(327.8333155882354f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.486519162745097f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Basket, true, STPu(0.21402478137254902f, 0.0f),
                         STPtauU(14.057228897058822f, 0.0f),
                         STPtauX(316.050759117647f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.453122725490197f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Basket, true, STPu(0.20483736764705873f, 0.0f),
                         STPtauU(18.87906792156863f, 0.0f),
                         STPtauX(373.37367490196095f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.184339226470588f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Basket, true, STPu(0.20293211254901963f, 0.0f),
                         STPtauU(20.001832877450976f, 0.0f),
                         STPtauX(365.1530416666665f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.2644574833333335f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Basket, true, STPu(0.11866921780392153f, 0.0f),
                         STPtauU(32.55595991666666f, 0.0f),
                         STPtauX(513.5087063725493f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.620283231372551f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Basket, true, STPu(0.22093152313725492f, 0.0f),
                         STPtauU(15.29200362745098f, 0.0f),
                         STPtauX(367.1975535294117f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.981558444117647f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Basket, true, STPu(0.21379372323529408f, 0.0f),
                         STPtauU(17.63109662745096f, 0.0f),
                         STPtauX(318.0502735294117f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.620499360784314f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Basket, true, STPu(0.1997724051960785f, 0.0f),
                         STPtauU(16.651229387254908f, 0.0f),
                         STPtauX(267.0048870588236f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.50625017647059f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Basket, true, STPu(0.21513224284313737f, 0.0f),
                         STPtauU(18.565777338235293f, 0.0f),
                         STPtauX(355.14055872549017f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.365439387254901f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Basket_CCK, true, STPu(0.1958453793137255f, 0.0f),
                         STPtauU(45.85426412745098f, 0.0f),
                         STPtauX(500.53783843137273f, 0.0f),
                         STPtdAMPA(4.0992853156862745f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Basket_CCK, true, STPu(0.17029535862745102f, 0.0f),
                         STPtauU(38.692309558823524f, 0.0f),
                         STPtauX(419.67239539215683f, 0.0f),
                         STPtdAMPA(4.490245775490197f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Basket_CCK, true, STPu(0.17509090519607842f, 0.0f),
                         STPtauU(58.83836217647055f, 0.0f),
                         STPtauX(434.140275098039f, 0.0f),
                         STPtdAMPA(5.033899938235295f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Basket_CCK, true, STPu(0.21915636578431377f, 0.0f),
                         STPtauU(63.789343392156844f, 0.0f),
                         STPtauX(279.1407549019607f, 0.0f),
                         STPtdAMPA(4.50410382254902f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Basket_CCK, true, STPu(0.2187916444117646f, 0.0f),
                         STPtauU(63.459410784313704f, 0.0f),
                         STPtauX(279.0931664705883f, 0.0f),
                         STPtdAMPA(4.478062626470589f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_Basket_CCK, true, STPu(0.26526648803921565f, 0.0f),
                         STPtauU(8.531364444117651f, 0.0f),
                         STPtauX(514.9536093137255f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.463885991176469f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_Basket_CCK, true, STPu(0.1973084993627451f, 0.0f),
                         STPtauU(14.247487681372549f, 0.0f),
                         STPtauX(680.14242f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.579118516666668f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Basket_CCK, true, STPu(0.15996405313725487f, 0.0f),
                         STPtauU(25.755003661764707f, 0.0f),
                         STPtauX(611.4591480392158f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.382982643137256f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Basket_CCK, true, STPu(0.14721725702941177f, 0.0f),
                         STPtauU(26.68822796568627f, 0.0f),
                         STPtauX(602.6725971568627f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.888640216666667f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Basket_CCK, true, STPu(0.17329266314705882f, 0.0f),
                         STPtauU(21.962225848039214f, 0.0f),
                         STPtauX(599.6751155882353f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.875990049019605f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Basket_CCK, true, STPu(0.13803036562745097f, 0.0f),
                         STPtauU(36.9709887254902f, 0.0f),
                         STPtauX(606.951080490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.9617966245098035f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Basket_CCK, true, STPu(0.13370438561764703f, 0.0f),
                         STPtauU(40.54586064705881f, 0.0f),
                         STPtauX(597.8605770588238f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.098110096078429f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Basket_CCK, true, STPu(0.0867767196960784f, 0.0f),
                         STPtauU(50.30409530392155f, 0.0f),
                         STPtauX(733.3719280392156f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.07606155882353f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Basket_CCK, true, STPu(0.1809210200980393f, 0.0f),
                         STPtauU(24.40553705392158f, 0.0f),
                         STPtauX(616.757510490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.45674644117647f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Basket_CCK, true, STPu(0.18903006990196078f, 0.0f),
                         STPtauU(27.7827272990196f, 0.0f),
                         STPtauX(619.5336596078431f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.99220054509804f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Basket_CCK, true, STPu(0.17997625754901958f, 0.0f),
                         STPtauU(25.819886700980394f, 0.0f),
                         STPtauX(540.9424978431373f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.6020946578431365f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Basket_CCK, true, STPu(0.18008151823529409f, 0.0f),
                         STPtauU(26.995365975490195f, 0.0f),
                         STPtauX(604.0582650980391f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.592162302941177f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Total_Molecular_Layer, true, STPu(0.16625329200980393f, 0.0f),
                         STPtauU(68.41581679411763f, 0.0f),
                         STPtauX(341.8837583823529f, 0.0f),
                         STPtdAMPA(4.770183068627451f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Total_Molecular_Layer, true, STPu(0.17808786111764704f, 0.0f),
                         STPtauU(66.8934360490196f, 0.0f),
                         STPtauX(378.04783313725477f, 0.0f),
                         STPtdAMPA(5.015379672549018f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Total_Molecular_Layer, true, STPu(0.22039042901960784f, 0.0f),
                         STPtauU(71.58650536274509f, 0.0f),
                         STPtauX(220.10164730392148f, 0.0f),
                         STPtdAMPA(4.416985849019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Total_Molecular_Layer, true, STPu(0.1758805878039216f, 0.0f),
                         STPtauU(43.035272901960795f, 0.0f),
                         STPtauX(354.92438621568635f, 0.0f),
                         STPtdAMPA(4.395902172549019f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Total_Molecular_Layer, true, STPu(0.22017624235294114f, 0.0f),
                         STPtauU(71.36510600000003f, 0.0f),
                         STPtauX(219.51551205882356f, 0.0f),
                         STPtdAMPA(4.3959185529411755f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_Total_Molecular_Layer, true, STPu(0.2726646521568627f, 0.0f),
                         STPtauU(9.033860437254903f, 0.0f),
                         STPtauX(449.943663137255f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.898956606862743f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_Total_Molecular_Layer, true, STPu(0.21614531833333328f, 0.0f),
                         STPtauU(16.386713220588234f, 0.0f),
                         STPtauX(653.0347347058827f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.129756858823533f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Total_Molecular_Layer, true, STPu(0.13984692974509805f, 0.0f),
                         STPtauU(36.42327989215686f, 0.0f),
                         STPtauX(561.0174690196079f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.98875122352941f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Total_Molecular_Layer, true, STPu(0.14203751368627454f, 0.0f),
                         STPtauU(36.21413018627451f, 0.0f),
                         STPtauX(557.1596237254904f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.356241782352938f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Total_Molecular_Layer, true, STPu(0.19558936843137256f, 0.0f),
                         STPtauU(24.584409367647066f, 0.0f),
                         STPtauX(555.5035889215686f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.328278225490195f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Total_Molecular_Layer, true, STPu(0.174362982f, 0.0f),
                         STPtauU(35.14773594117645f, 0.0f),
                         STPtauX(576.1465387254905f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.282447934313724f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Total_Molecular_Layer, true, STPu(0.17119075280392157f, 0.0f),
                         STPtauU(37.90496473529412f, 0.0f),
                         STPtauX(567.9998936274509f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.413221996078431f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Total_Molecular_Layer, true, STPu(0.10415548444117646f, 0.0f),
                         STPtauU(55.19499714705885f, 0.0f),
                         STPtauX(704.3169559803922f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.40431069215686f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Total_Molecular_Layer, true, STPu(0.20073036107843145f, 0.0f),
                         STPtauU(26.32262231862746f, 0.0f),
                         STPtauX(570.8804279411763f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.8408416892156865f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Total_Molecular_Layer, true, STPu(0.19742520343137254f, 0.0f),
                         STPtauU(32.17531672549018f, 0.0f),
                         STPtauX(566.4532981372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.596478736274512f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Total_Molecular_Layer, true, STPu(0.18956581539215678f, 0.0f),
                         STPtauU(29.185250740196086f, 0.0f),
                         STPtauX(489.7007008823529f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.123398237254906f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Total_Molecular_Layer, true, STPu(0.1896204399019608f, 0.0f),
                         STPtauU(30.780466284313732f, 0.0f),
                         STPtauX(560.7105679411762f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.122784751960782f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_MOLAX, true, STPu(0.16352046355882352f, 0.0f),
                         STPtauU(62.60039206862746f, 0.0f),
                         STPtauX(364.0127801960785f, 0.0f),
                         STPtdAMPA(4.8088956107843135f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_MOLAX, true, STPu(0.1757221472058823f, 0.0f),
                         STPtauU(61.17639455882356f, 0.0f),
                         STPtauX(395.91356490196074f, 0.0f),
                         STPtdAMPA(5.014180602941178f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_MOLAX, true, STPu(0.2190034340196079f, 0.0f),
                         STPtauU(68.99376723529416f, 0.0f),
                         STPtauX(224.08968111764713f, 0.0f),
                         STPtdAMPA(4.514198312745097f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_MOLAX, true, STPu(0.17539358926470583f, 0.0f),
                         STPtauU(39.98252152941179f, 0.0f),
                         STPtauX(374.1501871078429f, 0.0f),
                         STPtdAMPA(4.403339362745095f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_MOLAX, true, STPu(0.21880850411764705f, 0.0f),
                         STPtauU(68.65112323529412f, 0.0f),
                         STPtauX(223.7045065784313f, 0.0f),
                         STPtdAMPA(4.487573343137256f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_MOLAX, true, STPu(0.2761303253921568f, 0.0f),
                         STPtauU(8.531507384313727f, 0.0f),
                         STPtauX(487.9131309803921f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.06799087254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_MOLAX, true, STPu(0.21092879254901967f, 0.0f),
                         STPtauU(14.818643431372552f, 0.0f),
                         STPtauX(692.9083576470588f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.333861335294119f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_MOLAX, true, STPu(0.14156171836274514f, 0.0f),
                         STPtauU(31.290722558823518f, 0.0f),
                         STPtauX(595.1839864705884f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.063375800980395f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_MOLAX, true, STPu(0.13512802229411763f, 0.0f),
                         STPtauU(31.15375042156861f, 0.0f),
                         STPtauX(590.9085998039217f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.532582877450978f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_MOLAX, true, STPu(0.19110664098039204f, 0.0f),
                         STPtauU(21.30161971078432f, 0.0f),
                         STPtauX(588.4270020588235f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.491864489215687f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_MOLAX, true, STPu(0.1762347565196078f, 0.0f),
                         STPtauU(29.552938857843134f, 0.0f),
                         STPtauX(612.214852254902f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.374589574509806f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_MOLAX, true, STPu(0.1728717307450981f, 0.0f),
                         STPtauU(31.81730031372551f, 0.0f),
                         STPtauX(602.0449658823529f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.499264251960786f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_MOLAX, true, STPu(0.10196287289215686f, 0.0f),
                         STPtauU(44.94959149019608f, 0.0f),
                         STPtauX(742.0542009803921f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.518085771568627f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_MOLAX, true, STPu(0.19692504980392148f, 0.0f),
                         STPtauU(23.127548676470585f, 0.0f),
                         STPtauX(602.1826939215687f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.996513717647058f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_MOLAX, true, STPu(0.2004961489215686f, 0.0f),
                         STPtauU(27.411246308823536f, 0.0f),
                         STPtauX(603.9260990196078f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.670050350980391f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_MOLAX, true, STPu(0.19270803392156866f, 0.0f),
                         STPtauU(25.067658019607844f, 0.0f),
                         STPtauX(513.0535888235296f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.19052875490196f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_MOLAX, true, STPu(0.193945431372549f, 0.0f),
                         STPtauU(26.281510264705883f, 0.0f),
                         STPtauX(592.026954117647f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.213641064705879f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_Outer_Molecular_Layer, true, STPu(0.1803573634313726f, 0.0f),
                         STPtauU(58.456046470588205f, 0.0f),
                         STPtauX(367.05747225490194f, 0.0f),
                         STPtdAMPA(4.894373701960784f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_Outer_Molecular_Layer, true, STPu(0.18965153401960785f, 0.0f),
                         STPtauU(58.54971908823529f, 0.0f),
                         STPtauX(401.7043533333334f, 0.0f),
                         STPtdAMPA(5.123229667647058f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_Outer_Molecular_Layer, true, STPu(0.23061462764705876f, 0.0f),
                         STPtauU(63.14002745098039f, 0.0f),
                         STPtauX(235.3920902352941f, 0.0f),
                         STPtdAMPA(4.5451507980392165f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_Outer_Molecular_Layer, true, STPu(0.1891996739705883f, 0.0f),
                         STPtauU(36.43861356862746f, 0.0f),
                         STPtauX(378.9826692156863f, 0.0f),
                         STPtdAMPA(4.48996086764706f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_Outer_Molecular_Layer, true, STPu(0.2303554855882352f, 0.0f),
                         STPtauU(62.93203765686276f, 0.0f),
                         STPtauX(235.44171156862748f, 0.0f),
                         STPtdAMPA(4.5135817803921565f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_Outer_Molecular_Layer, true, STPu(0.2795810154901961f, 0.0f),
                         STPtauU(8.146709975490193f, 0.0f),
                         STPtauX(486.83932215686264f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.117844576470585f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_Outer_Molecular_Layer, true, STPu(0.22071449470588234f, 0.0f),
                         STPtauU(13.73386005882353f, 0.0f),
                         STPtauX(701.2653083333335f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.442892056862748f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Outer_Molecular_Layer, true, STPu(0.18742058926470584f, 0.0f),
                         STPtauU(23.359339279411753f, 0.0f),
                         STPtauX(600.3908759803923f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.162542799999996f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Outer_Molecular_Layer, true, STPu(0.18006791686274504f, 0.0f),
                         STPtauU(23.881400200980398f, 0.0f),
                         STPtauX(596.4128319607846f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.5866991774509795f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Outer_Molecular_Layer, true, STPu(0.19904337029411773f, 0.0f),
                         STPtauU(19.88652669607843f, 0.0f),
                         STPtauX(593.7023559803921f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.574947041176467f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Outer_Molecular_Layer, true, STPu(0.18694278656862742f, 0.0f),
                         STPtauU(27.547329671568626f, 0.0f),
                         STPtauX(615.6950223529411f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.515824221568628f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Outer_Molecular_Layer, true, STPu(0.18357543623529413f, 0.0f),
                         STPtauU(29.811733593137244f, 0.0f),
                         STPtauX(604.511359411765f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.6397468794117644f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_Outer_Molecular_Layer, true, STPu(0.10958362620588234f, 0.0f),
                         STPtauU(42.94024685294117f, 0.0f),
                         STPtauX(746.675999901961f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.668130069607845f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Outer_Molecular_Layer, true, STPu(0.20451385764705882f, 0.0f),
                         STPtauU(21.7214839509804f, 0.0f),
                         STPtauX(609.8347993137254f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.1117594499999965f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Outer_Molecular_Layer, true, STPu(0.20727110960784315f, 0.0f),
                         STPtauU(25.732174313725494f, 0.0f),
                         STPtauX(608.2240148039215f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.792170545098039f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_Outer_Molecular_Layer, true, STPu(0.19999579431372552f, 0.0f),
                         STPtauU(23.650047607843156f, 0.0f),
                         STPtauX(518.3626656862746f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.3039429323529435f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_Outer_Molecular_Layer, true, STPu(0.20330480794117645f, 0.0f),
                         STPtauU(24.538089161764695f, 0.0f),
                         STPtauX(596.1978633333332f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.32628778627451f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_Neurogliaform, true, STPu(0.18994326680392154f, 0.0f),
                         STPtauU(26.273388901960796f, 0.0f),
                         STPtauX(581.5604742156862f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.999572079411765f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_Neurogliaform, true, STPu(0.19074405499999997f, 0.0f),
                         STPtauU(26.253890294117646f, 0.0f),
                         STPtauX(580.4645223529412f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.368411633333332f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_Neurogliaform, true, STPu(0.20962731284313724f, 0.0f),
                         STPtauU(22.27836921078432f, 0.0f),
                         STPtauX(579.0006880392157f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.395190908823527f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_Neurogliaform, true, STPu(0.1905637434313725f, 0.0f),
                         STPtauU(31.28874628431371f, 0.0f),
                         STPtauX(595.7327885294114f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.387290186274513f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_Neurogliaform, true, STPu(0.1870483087254901f, 0.0f),
                         STPtauU(33.92156383333334f, 0.0f),
                         STPtauX(586.1879319607846f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.51602216372549f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_Neurogliaform, true, STPu(0.2136475497058823f, 0.0f),
                         STPtauU(24.66694123039215f, 0.0f),
                         STPtauX(603.9557315686275f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.0352040519607835f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_Neurogliaform, true, STPu(0.2107426709803921f, 0.0f),
                         STPtauU(29.672672078431365f, 0.0f),
                         STPtauX(589.6705671568627f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.685915428431373f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_MOPP, true, STPu(0.19459571156862748f, 0.0f),
                         STPtauU(25.03085494607845f, 0.0f),
                         STPtauX(574.2881041176472f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.972487610784312f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_MOPP, true, STPu(0.19532784352941177f, 0.0f),
                         STPtauU(25.06537986764705f, 0.0f),
                         STPtauX(573.6130729411765f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.352752586274514f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_MOPP, true, STPu(0.21476396745098045f, 0.0f),
                         STPtauU(21.209514754901964f, 0.0f),
                         STPtauX(571.3832620588237f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.374734835294113f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_MOPP, true, STPu(0.19561178784313718f, 0.0f),
                         STPtauU(29.68780237745098f, 0.0f),
                         STPtauX(588.0879490196079f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.337927234313719f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_MOPP, true, STPu(0.19181175362745095f, 0.0f),
                         STPtauU(32.26683533333334f, 0.0f),
                         STPtauX(579.1306379411766f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.477918290196079f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_MOPP, true, STPu(0.21900942392156864f, 0.0f),
                         STPtauU(23.39908596078432f, 0.0f),
                         STPtauX(595.4603987254902f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.006733699019609f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_MOPP, true, STPu(0.21620699568627452f, 0.0f),
                         STPtauU(28.17942624509804f, 0.0f),
                         STPtauX(582.7945528431372f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.656976992156863f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_HICAP, true, STPu(0.13906843466666663f, 0.0f),
                         STPtauU(101.19338564705886f, 0.0f),
                         STPtauX(433.60063980392135f, 0.0f),
                         STPtdAMPA(4.738406476470589f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_HICAP, true, STPu(0.15437129357843135f, 0.0f),
                         STPtauU(99.71246155882349f, 0.0f),
                         STPtauX(451.2461333333334f, 0.0f),
                         STPtdAMPA(4.962523706862747f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_HICAP, true, STPu(0.18662638925490196f, 0.0f),
                         STPtauU(94.75156141176468f, 0.0f),
                         STPtauX(337.1430233333332f, 0.0f),
                         STPtdAMPA(4.338204884313727f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_HICAP, true, STPu(0.15374819487254904f, 0.0f),
                         STPtauU(60.03047480392158f, 0.0f),
                         STPtauX(456.25653598039213f, 0.0f),
                         STPtdAMPA(4.010490702941176f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_HICAP, true, STPu(0.18664869921568633f, 0.0f),
                         STPtauU(93.46669957843139f, 0.0f),
                         STPtauX(338.3525458333334f, 0.0f),
                         STPtdAMPA(4.3007312725490205f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_HICAP, true, STPu(0.24087137225490188f, 0.0f),
                         STPtauU(12.713826751960786f, 0.0f),
                         STPtauX(522.3739067647057f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.113200744117648f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_HICAP, true, STPu(0.17063432078431368f, 0.0f),
                         STPtauU(30.440490049019598f, 0.0f),
                         STPtauX(673.8002810784315f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.073552954901961f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_HICAP, true, STPu(0.1319595865f, 0.0f),
                         STPtauU(64.53294861764707f, 0.0f),
                         STPtauX(616.5069162745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.148912398039215f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_HICAP, true, STPu(0.1339349446176471f, 0.0f),
                         STPtauU(58.54178919607843f, 0.0f),
                         STPtauX(607.1521119607839f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.394677321568629f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_HICAP, true, STPu(0.14931019613725494f, 0.0f),
                         STPtauU(50.3387088529412f, 0.0f),
                         STPtauX(604.4244604901961f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.3331506529411765f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_HICAP, true, STPu(0.1295471543039216f, 0.0f),
                         STPtauU(78.27530700980392f, 0.0f),
                         STPtauX(619.7334873529412f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.216500770588238f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_HICAP, true, STPu(0.12602504214705879f, 0.0f),
                         STPtauU(84.27273294117646f, 0.0f),
                         STPtauX(612.1048231372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.321686116666667f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_HICAP, true, STPu(0.05072052937254903f, 0.0f),
                         STPtauU(171.7183479901961f, 0.0f),
                         STPtauX(691.7180511764708f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.5412377970588205f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_HICAP, true, STPu(0.14722186509803917f, 0.0f),
                         STPtauU(55.68426128431373f, 0.0f),
                         STPtauX(619.3812171568627f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.062322f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_HICAP, true, STPu(0.14451084744117643f, 0.0f),
                         STPtauU(73.3997300980392f, 0.0f),
                         STPtauX(618.0140264705882f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.897798466666665f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_HICAP, true, STPu(0.1406799847058823f, 0.0f),
                         STPtauU(63.22385234313726f, 0.0f),
                         STPtauX(564.4354784313725f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.455967225490198f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_HICAP, true, STPu(0.14465443075490197f, 0.0f),
                         STPtauU(67.00332342156864f, 0.0f),
                         STPtauX(608.5429458823529f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.263414072549018f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_HIPP, true, STPu(0.1503183379411764f, 0.0f),
                         STPtauU(48.98626599019609f, 0.0f),
                         STPtauX(462.8138102941177f, 0.0f),
                         STPtdAMPA(5.1814401774509795f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_HIPP, true, STPu(0.16792596852941177f, 0.0f),
                         STPtauU(48.716326607843115f, 0.0f),
                         STPtauX(470.2108621568628f, 0.0f),
                         STPtdAMPA(5.312855868627451f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_HIPP, true, STPu(0.18065347323529413f, 0.0f),
                         STPtauU(54.8716203137255f, 0.0f),
                         STPtauX(358.4310379411763f, 0.0f),
                         STPtdAMPA(4.8235038970588215f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_HIPP, true, STPu(0.1660399961764706f, 0.0f),
                         STPtauU(30.843934892156867f, 0.0f),
                         STPtauX(473.2137951960783f, 0.0f),
                         STPtdAMPA(4.377113869607842f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_HIPP, true, STPu(0.1793862585882353f, 0.0f),
                         STPtauU(54.27817214705884f, 0.0f),
                         STPtauX(361.9621412745098f, 0.0f),
                         STPtdAMPA(4.710931222549017f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_HIPP, true, STPu(0.2404785720588236f, 0.0f),
                         STPtauU(8.38481192843137f, 0.0f),
                         STPtauX(534.1822171568629f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.544162634313724f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_HIPP, true, STPu(0.18869968803921566f, 0.0f),
                         STPtauU(14.255479905882357f, 0.0f),
                         STPtauX(781.7977608823526f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.938408517647063f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_HIPP, true, STPu(0.1537354780980391f, 0.0f),
                         STPtauU(21.93741211274509f, 0.0f),
                         STPtauX(642.2633585294118f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.528484710784315f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_HIPP, true, STPu(0.15770618078431367f, 0.0f),
                         STPtauU(26.188806053921574f, 0.0f),
                         STPtauX(691.0811736274511f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.574151111764704f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_HIPP, true, STPu(0.15519000871568628f, 0.0f),
                         STPtauU(22.168129127450985f, 0.0f),
                         STPtauX(568.8320852941174f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.092672471568628f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_HIPP, true, STPu(0.173267486127451f, 0.0f),
                         STPtauU(24.08369757843138f, 0.0f),
                         STPtauX(669.2872923529413f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.76492430980392f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_HIPROM, true, STPu(0.19628755411764695f, 0.0f),
                         STPtauU(52.84635071568624f, 0.0f),
                         STPtauX(402.04632676470595f, 0.0f),
                         STPtdAMPA(4.910706629411764f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_HIPROM, true, STPu(0.21334053441176476f, 0.0f),
                         STPtauU(52.236179833333324f, 0.0f),
                         STPtauX(419.39642999999995f, 0.0f),
                         STPtdAMPA(5.078117302941175f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_HIPROM, true, STPu(0.2515146970588237f, 0.0f),
                         STPtauU(51.70691882352941f, 0.0f),
                         STPtauX(295.8105704901961f, 0.0f),
                         STPtdAMPA(4.237365884313727f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_HIPROM, true, STPu(0.22034561999999996f, 0.0f),
                         STPtauU(31.977109549019602f, 0.0f),
                         STPtauX(413.8730875490197f, 0.0f),
                         STPtdAMPA(4.122648368627452f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_HIPROM, true, STPu(0.2515701879411765f, 0.0f),
                         STPtauU(51.57286275490196f, 0.0f),
                         STPtauX(295.1858323039216f, 0.0f),
                         STPtdAMPA(4.205340303921568f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_HIPROM, true, STPu(0.20667647705882344f, 0.0f),
                         STPtauU(24.837474897058826f, 0.0f),
                         STPtauX(583.6023408823527f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.059862338235294f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_HIPROM, true, STPu(0.20591786598039213f, 0.0f),
                         STPtauU(24.81136061274511f, 0.0f),
                         STPtauX(583.7547076470586f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.42067250490196f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_HIPROM, true, STPu(0.11803066080392156f, 0.0f),
                         STPtauU(47.80504035294116f, 0.0f),
                         STPtauX(751.1982199019606f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.880158621568629f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_HIPROM, true, STPu(0.21159868107843127f, 0.0f),
                         STPtauU(29.66786641176471f, 0.0f),
                         STPtauX(614.081102352941f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.056691065686274f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_HIPROM, true, STPu(0.20925778196078437f, 0.0f),
                         STPtauU(24.32173569607844f, 0.0f),
                         STPtauX(515.0032572549019f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.530495620588235f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_HIPROM, true, STPu(0.21734217411764717f, 0.0f),
                         STPtauU(25.829886676470597f, 0.0f),
                         STPtauX(585.9571781372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.243548819607845f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Granule, DG_AIPRIM, true, STPu(0.19104854593137252f, 0.0f),
                         STPtauU(61.80811407843139f, 0.0f),
                         STPtauX(414.3596907843138f, 0.0f),
                         STPtdAMPA(4.726161050980392f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_AIPRIM, true, STPu(0.20801952294117634f, 0.0f),
                         STPtauU(62.3233238235294f, 0.0f),
                         STPtauX(425.4232011764705f, 0.0f),
                         STPtdAMPA(4.87617046372549f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_AIPRIM, true, STPu(0.24282088205882352f, 0.0f),
                         STPtauU(58.89936899999999f, 0.0f),
                         STPtauX(315.16232205882346f, 0.0f),
                         STPtdAMPA(3.99843940392157f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Hilar_Ectopic_Granule, DG_AIPRIM, true, STPu(0.21497210294117644f, 0.0f),
                         STPtauU(37.369139568627446f, 0.0f),
                         STPtauX(420.8941963725491f, 0.0f),
                         STPtdAMPA(3.892274730392159f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_AIPRIM, true, STPu(0.24294898676470578f, 0.0f),
                         STPtauU(58.55979110784314f, 0.0f),
                         STPtauX(314.8966884313726f, 0.0f),
                         STPtdAMPA(3.965121282352941f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_AIPRIM, true, STPu(0.19862103107843138f, 0.0f),
                         STPtauU(28.57137934313727f, 0.0f),
                         STPtauX(600.2639502941178f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.824916984313725f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_AIPRIM, true, STPu(0.19851142460784318f, 0.0f),
                         STPtauU(28.278910362745098f, 0.0f),
                         STPtauX(599.9660130392159f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.155376780392158f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Outer_Molecular_Layer, DG_AIPRIM, true, STPu(0.21446801313725491f, 0.0f),
                         STPtauU(23.671308519607837f, 0.0f),
                         STPtauX(598.264534411765f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.114386158823531f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Neurogliaform, DG_AIPRIM, true, STPu(0.1964669208823529f, 0.0f),
                         STPtauU(33.07534914705882f, 0.0f),
                         STPtauX(613.1027338235297f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.028321956862744f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOPP, DG_AIPRIM, true, STPu(0.1928770428431373f, 0.0f),
                         STPtauU(35.605702411764696f, 0.0f),
                         STPtauX(602.6101587254905f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.154127966666666f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_AIPRIM, true, STPu(0.1130739983431373f, 0.0f),
                         STPtauU(56.17972407843134f, 0.0f),
                         STPtauX(759.5391514705882f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.625737433333334f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPP, DG_AIPRIM, true, STPu(0.20931774882352946f, 0.0f),
                         STPtauU(26.237489539215666f, 0.0f),
                         STPtauX(631.3015777450981f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.974484566666666f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_AIPRIM, true, STPu(0.20379425990196076f, 0.0f),
                         STPtauU(34.075035215686285f, 0.0f),
                         STPtauX(631.1259083333334f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.81294282254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_AIPRIM, true, STPu(0.20179489911764698f, 0.0f),
                         STPtauU(29.371073029411768f, 0.0f),
                         STPtauX(541.5819451960783f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.232748712745097f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_AIPRIM, true, STPu(0.21005199205882358f, 0.0f),
                         STPtauU(30.081503803921564f, 0.0f),
                         STPtauX(599.1974085294117f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.997776282352941f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Semilunar_Granule, DG_MOCAP, true, STPu(0.19357313901960785f, 0.0f),
                         STPtauU(67.86981521568624f, 0.0f),
                         STPtauX(398.54341931372534f, 0.0f),
                         STPtdAMPA(5.220618570588235f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy, DG_MOCAP, true, STPu(0.23243358686274512f, 0.0f),
                         STPtauU(72.27685184313727f, 0.0f),
                         STPtauX(247.76244529411764f, 0.0f),
                         STPtdAMPA(4.673566866666666f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Mossy_MOLDEN, DG_MOCAP, true, STPu(0.23238891892156857f, 0.0f),
                         STPtauU(71.90257156862744f, 0.0f),
                         STPtauX(247.91477088235297f, 0.0f),
                         STPtdAMPA(4.644733104901961f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket, DG_MOCAP, true, STPu(0.2787684654901962f, 0.0f),
                         STPtauU(9.1762814f, 0.0f),
                         STPtauX(472.15423372549014f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.208839564705885f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Basket_CCK, DG_MOCAP, true, STPu(0.230455471372549f, 0.0f),
                         STPtauU(15.442302808823529f, 0.0f),
                         STPtauX(679.2539591176468f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.406266404901958f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_Total_Molecular_Layer, DG_MOCAP, true, STPu(0.19187951882352952f, 0.0f),
                         STPtauU(28.550823147058818f, 0.0f),
                         STPtauX(584.6189671568627f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.216498220588235f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOLAX, DG_MOCAP, true, STPu(0.19263995294117656f, 0.0f),
                         STPtauU(28.464188156862757f, 0.0f),
                         STPtauX(583.3409629411764f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.560450102941172f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HICAP, DG_MOCAP, true, STPu(0.11123304561764709f, 0.0f),
                         STPtauU(58.09881385294119f, 0.0f),
                         STPtauX(725.6861649019606f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.71092668137255f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_HIPROM, DG_MOCAP, true, STPu(0.2090191578431372f, 0.0f),
                         STPtauU(31.92557024509803f, 0.0f),
                         STPtauX(592.1991057843138f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.902152603921571f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_AIPRIM, DG_MOCAP, true, STPu(0.20272182941176461f, 0.0f),
                         STPtauU(28.889211000000003f, 0.0f),
                         STPtauX(516.7178576470587f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.411548511764707f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(DG_MOCAP, DG_MOCAP, true, STPu(0.20505039921568624f, 0.0f),
                         STPtauU(29.594163460784316f, 0.0f),
                         STPtauX(582.4902745098042f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.387009829411766f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setNeuronMonitor(DG_Granule, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Hilar_Ectopic_Granule, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Semilunar_Granule, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Mossy, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Mossy_MOLDEN, "DEFAULT");
                             
sim.setNeuronMonitor(DG_AIPRIM, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Axo_Axonic, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Basket, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Basket_CCK, "DEFAULT");
                             
sim.setNeuronMonitor(DG_HICAP, "DEFAULT");
                             
sim.setNeuronMonitor(DG_HIPP, "DEFAULT");
                             
sim.setNeuronMonitor(DG_HIPROM, "DEFAULT");
                             
sim.setNeuronMonitor(DG_MOCAP, "DEFAULT");
                             
sim.setNeuronMonitor(DG_MOLAX, "DEFAULT");
                             
sim.setNeuronMonitor(DG_MOPP, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Neurogliaform, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Outer_Molecular_Layer, "DEFAULT");
                             
sim.setNeuronMonitor(DG_Total_Molecular_Layer, "DEFAULT");
                             
