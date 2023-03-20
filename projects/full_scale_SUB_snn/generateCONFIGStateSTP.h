int SUB_EC_Projecting_Pyramidal = sim.createGroup("SUB_EC_Projecting_Pyramidal", 116326,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int SUB_CA1_Projecting_Pyramidal = sim.createGroup("SUB_CA1_Projecting_Pyramidal", 11633,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int SUB_Axo_Axonic = sim.createGroup("SUB_Axo_Axonic", 12796,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
sim.setNeuronParameters(SUB_EC_Projecting_Pyramidal, 100.0, 0.7, -60.0, -40.0, 
                                                0.03, -2.0, 35.0, -50.0,
                                                100.0, 1);
                     
sim.setNeuronParameters(SUB_CA1_Projecting_Pyramidal, 724.0, 4.635267638789458, -59.39554556014011, -45.35074774575038, 
                                                3.507719098194695E-5, 25.16463647857205, -18.91905430698211, -53.447472701703205,
                                                3.0, 1);
                     
sim.setNeuronParameters(SUB_Axo_Axonic, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.connect(SUB_EC_Projecting_Pyramidal, SUB_EC_Projecting_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004046626578378f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3704102512745095f, 0.0f);
                       
sim.connect(SUB_CA1_Projecting_Pyramidal, SUB_EC_Projecting_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.018503406359294f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0526015176470582f, 0.0f);
                       
sim.connect(SUB_Axo_Axonic, SUB_EC_Projecting_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7718218303921567f, 0.0f);
                       
sim.connect(SUB_EC_Projecting_Pyramidal, SUB_CA1_Projecting_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007375837257459f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3652421701960782f, 0.0f);
                       
sim.connect(SUB_CA1_Projecting_Pyramidal, SUB_CA1_Projecting_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.025299377388641f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0451655205882355f, 0.0f);
                       
sim.connect(SUB_Axo_Axonic, SUB_CA1_Projecting_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7597718803921565f, 0.0f);
                       
sim.connect(SUB_EC_Projecting_Pyramidal, SUB_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00034683364524f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.872497427058823f, 0.0f);
                       
sim.connect(SUB_CA1_Projecting_Pyramidal, SUB_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00518306803678f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.917246283333332f, 0.0f);
                       
sim.setSTP(SUB_EC_Projecting_Pyramidal, SUB_EC_Projecting_Pyramidal, true, STPu(0.20699911754901962f, 0.0f),
                         STPtauU(44.19460197058826f, 0.0f),
                         STPtauX(303.9923894509803f, 0.0f),
                         STPtdAMPA(4.729749501960783f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_CA1_Projecting_Pyramidal, SUB_EC_Projecting_Pyramidal, true, STPu(0.22738758519607835f, 0.0f),
                         STPtauU(39.12641121568629f, 0.0f),
                         STPtauX(329.9983840196079f, 0.0f),
                         STPtdAMPA(4.018644543137255f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_Axo_Axonic, SUB_EC_Projecting_Pyramidal, true, STPu(0.23150433696078426f, 0.0f),
                         STPtauU(18.237100916666662f, 0.0f),
                         STPtauX(513.0482025490194f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.859947949999999f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_EC_Projecting_Pyramidal, SUB_CA1_Projecting_Pyramidal, true, STPu(0.20634661568627435f, 0.0f),
                         STPtauU(44.39409136274507f, 0.0f),
                         STPtauX(306.4446025490195f, 0.0f),
                         STPtdAMPA(4.727393519607842f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_CA1_Projecting_Pyramidal, SUB_CA1_Projecting_Pyramidal, true, STPu(0.22667835735294117f, 0.0f),
                         STPtauU(39.25892185294119f, 0.0f),
                         STPtauX(332.15156323529413f, 0.0f),
                         STPtdAMPA(4.022700462745098f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_Axo_Axonic, SUB_CA1_Projecting_Pyramidal, true, STPu(0.2309835642156862f, 0.0f),
                         STPtauU(18.438095700980387f, 0.0f),
                         STPtauX(515.1342990196081f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.855778113725487f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_EC_Projecting_Pyramidal, SUB_Axo_Axonic, true, STPu(0.208476068627451f, 0.0f),
                         STPtauU(39.51808437254902f, 0.0f),
                         STPtauX(381.33066235294103f, 0.0f),
                         STPtdAMPA(4.02853052254902f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(SUB_CA1_Projecting_Pyramidal, SUB_Axo_Axonic, true, STPu(0.22744002509803923f, 0.0f),
                         STPtauU(35.65555105882351f, 0.0f),
                         STPtauX(440.57240303921577f, 0.0f),
                         STPtdAMPA(3.316080194117649f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setNeuronMonitor(SUB_EC_Projecting_Pyramidal, "DEFAULT");
                             
sim.setNeuronMonitor(SUB_CA1_Projecting_Pyramidal, "DEFAULT");
                             
sim.setNeuronMonitor(SUB_Axo_Axonic, "DEFAULT");
                             
