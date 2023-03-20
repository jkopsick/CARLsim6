int CA2_Pyramidal = sim.createGroup("CA2_Pyramidal", 18956,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int CA2_Basket = sim.createGroup("CA2_Basket", 105,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA2_Wide_Arbor_Basket = sim.createGroup("CA2_Wide_Arbor_Basket", 147,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA2_Bistratified = sim.createGroup("CA2_Bistratified", 79,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA2_SP_SR = sim.createGroup("CA2_SP_SR", 94,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
sim.setNeuronParameters(CA2_Pyramidal, 1630.0, 5.9432435, -72.58829, -58.78362, 
                                                0.0011350543, -15.885261, 19.99006, -62.646779,
                                                74.0, 1);
                     
sim.setNeuronParameters(CA2_Basket, 150.0, 5.121746081, -70.31272624, -49.91020428, 
                                                0.011996589, -28.47889883, -10.27227079, -57.08015877,
                                                132.0, 1);
                     
sim.setNeuronParameters(CA2_Wide_Arbor_Basket, 148.0, 0.5091971464502671, -63.20239904390986, -32.844733938667325, 
                                                0.0058976702112141875, -2.1606387585157307, 35.00602802982106, -38.3329533912991,
                                                66.0, 1);
                     
sim.setNeuronParameters(CA2_Bistratified, 118.0, 0.7981262953058378, -74.10259821671264, -40.19407963284318, 
                                                0.007629998840749039, 4.754906330672338, 11.463619329325923, -53.61371159297946,
                                                4.0, 1);
                     
sim.setNeuronParameters(CA2_SP_SR, 226.0, 3.590881992054694, -71.92485578870804, -57.051966938244945, 
                                                0.002631041334055018, 48.43475310353249, -6.496991814779392, -66.93755750926377,
                                                64.0, 1);
                     
sim.connect(CA2_Pyramidal, CA2_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.030908314328374f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.5440557539215676f, 0.0f);
                       
sim.connect(CA2_Basket, CA2_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 3.9773689382352937f, 0.0f);
                       
sim.connect(CA2_Wide_Arbor_Basket, CA2_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 3.491789652941177f, 0.0f);
                       
sim.connect(CA2_Bistratified, CA2_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.08167983777125f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 4.581329416666669f, 0.0f);
                       
sim.connect(CA2_SP_SR, CA2_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.021248215336034f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.8723030509803924f, 0.0f);
                       
sim.connect(CA2_Pyramidal, CA2_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.031593922544006f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 4.442166562745096f, 0.0f);
                       
sim.connect(CA2_Basket, CA2_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.7822856999999996f, 0.0f);
                       
sim.connect(CA2_Wide_Arbor_Basket, CA2_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.5358210843137257f, 0.0f);
                       
sim.connect(CA2_Bistratified, CA2_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.082874585381234f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 3.1645004980392155f, 0.0f);
                       
sim.connect(CA2_SP_SR, CA2_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.018541388236679f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2946439078431378f, 0.0f);
                       
sim.connect(CA2_Pyramidal, CA2_Wide_Arbor_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.028730226626313f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4332127333333327f, 0.0f);
                       
sim.connect(CA2_Basket, CA2_Wide_Arbor_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7335523725490196f, 0.0f);
                       
sim.connect(CA2_Wide_Arbor_Basket, CA2_Wide_Arbor_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.637535855294118f, 0.0f);
                       
sim.connect(CA2_Bistratified, CA2_Wide_Arbor_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.080050112189312f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8644422446078424f, 0.0f);
                       
sim.connect(CA2_SP_SR, CA2_Wide_Arbor_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014167378308657f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.580481555294118f, 0.0f);
                       
sim.connect(CA2_Pyramidal, CA2_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.046816822325913f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.322999557843137f, 0.0f);
                       
sim.connect(CA2_Basket, CA2_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0579831078431368f, 0.0f);
                       
sim.connect(CA2_Wide_Arbor_Basket, CA2_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9164761333333338f, 0.0f);
                       
sim.connect(CA2_Bistratified, CA2_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.099506587450737f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2882141450980393f, 0.0f);
                       
sim.connect(CA2_SP_SR, CA2_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.025674375219259f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.801090278921568f, 0.0f);
                       
sim.connect(CA2_Pyramidal, CA2_SP_SR, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.034122283582825f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3639958983333333f, 0.0f);
                       
sim.connect(CA2_Basket, CA2_SP_SR, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7022720539215688f, 0.0f);
                       
sim.connect(CA2_Wide_Arbor_Basket, CA2_SP_SR, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.610719369215687f, 0.0f);
                       
sim.connect(CA2_Bistratified, CA2_SP_SR, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.08407639045648f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8711449941176468f, 0.0f);
                       
sim.connect(CA2_SP_SR, CA2_SP_SR, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.0241494187625f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5405225114705883f, 0.0f);
                       
sim.setSTP(CA2_Pyramidal, CA2_Pyramidal, true, STPu(0.2887226262745099f, 0.0f),
                         STPtauU(102.01742285294115f, 0.0f),
                         STPtauX(215.28307343137257f, 0.0f),
                         STPtdAMPA(3.4231117598039202f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Basket, CA2_Pyramidal, true, STPu(0.2746729585294117f, 0.0f),
                         STPtauU(10.610652687254902f, 0.0f),
                         STPtauX(580.6886734313729f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.247247049019609f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Wide_Arbor_Basket, CA2_Pyramidal, true, STPu(0.2751254996078432f, 0.0f),
                         STPtauU(10.62084193627451f, 0.0f),
                         STPtauX(561.7888334313725f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.4788244705882345f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Bistratified, CA2_Pyramidal, true, STPu(0.27563420745098044f, 0.0f),
                         STPtauU(9.999401755882356f, 0.0f),
                         STPtauX(588.6480121568629f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.701345359803921f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_SP_SR, CA2_Pyramidal, true, STPu(0.2658972354901959f, 0.0f),
                         STPtauU(11.445285519607845f, 0.0f),
                         STPtauX(570.8726222549021f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.2250330637254905f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Pyramidal, CA2_Basket, true, STPu(0.3710014066666665f, 0.0f),
                         STPtauU(163.5517779411765f, 0.0f),
                         STPtauX(138.68263594117653f, 0.0f),
                         STPtdAMPA(2.459113655882353f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Basket, CA2_Basket, true, STPu(0.26173930931372535f, 0.0f),
                         STPtauU(28.25265529411764f, 0.0f),
                         STPtauX(508.30518313725486f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.413308049019609f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Wide_Arbor_Basket, CA2_Basket, true, STPu(0.2636302351960784f, 0.0f),
                         STPtauU(27.326863024509798f, 0.0f),
                         STPtauX(485.1804490196079f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.308257726470586f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Bistratified, CA2_Basket, true, STPu(0.2614465262745099f, 0.0f),
                         STPtauU(27.008596333333344f, 0.0f),
                         STPtauX(510.17519323529405f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.92753858235294f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_SP_SR, CA2_Basket, true, STPu(0.2521857962745099f, 0.0f),
                         STPtauU(28.012460264705883f, 0.0f),
                         STPtauX(508.6368913725489f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.671299204901961f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Pyramidal, CA2_Wide_Arbor_Basket, true, STPu(0.040344377156862746f, 0.0f),
                         STPtauU(30.878478784313735f, 0.0f),
                         STPtauX(1270.70922745098f, 0.0f),
                         STPtdAMPA(4.071242985294118f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Basket, CA2_Wide_Arbor_Basket, true, STPu(0.11482777465686271f, 0.0f),
                         STPtauU(22.395223632352952f, 0.0f),
                         STPtauX(778.5506455882357f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.796731505882351f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Wide_Arbor_Basket, CA2_Wide_Arbor_Basket, true, STPu(0.11538423486274509f, 0.0f),
                         STPtauU(21.925625651960775f, 0.0f),
                         STPtauX(751.3956239215688f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.5456561205882355f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Bistratified, CA2_Wide_Arbor_Basket, true, STPu(0.11172082724509799f, 0.0f),
                         STPtauU(21.68094837254902f, 0.0f),
                         STPtauX(766.9464840196075f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.424973125490196f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_SP_SR, CA2_Wide_Arbor_Basket, true, STPu(0.11093411740196076f, 0.0f),
                         STPtauU(22.74987932352941f, 0.0f),
                         STPtauX(776.3042073529415f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.8641031205882355f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Pyramidal, CA2_Bistratified, true, STPu(0.2879578388235294f, 0.0f),
                         STPtauU(122.67293350980394f, 0.0f),
                         STPtauX(143.15535842156868f, 0.0f),
                         STPtdAMPA(2.473306369607843f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Basket, CA2_Bistratified, true, STPu(0.23874925156862747f, 0.0f),
                         STPtauU(22.742719392156868f, 0.0f),
                         STPtauX(504.1107026470589f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.590515621568628f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Wide_Arbor_Basket, CA2_Bistratified, true, STPu(0.24019207196078432f, 0.0f),
                         STPtauU(22.540807514705893f, 0.0f),
                         STPtauX(477.8827194117646f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.452488187254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Bistratified, CA2_Bistratified, true, STPu(0.2382584749019608f, 0.0f),
                         STPtauU(21.666661009803924f, 0.0f),
                         STPtauX(508.26939764705884f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.116816012745096f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_SP_SR, CA2_Bistratified, true, STPu(0.23251342803921551f, 0.0f),
                         STPtauU(23.48564111764705f, 0.0f),
                         STPtauX(498.3434593137253f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.7037459696078425f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Pyramidal, CA2_SP_SR, true, STPu(0.2491073164705883f, 0.0f),
                         STPtauU(43.22013284313723f, 0.0f),
                         STPtauX(866.7414407843138f, 0.0f),
                         STPtdAMPA(2.7184253245098042f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Basket, CA2_SP_SR, true, STPu(0.2403911561764706f, 0.0f),
                         STPtauU(26.432457970588228f, 0.0f),
                         STPtauX(694.1541183333336f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.005682949019609f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Wide_Arbor_Basket, CA2_SP_SR, true, STPu(0.23986317558823533f, 0.0f),
                         STPtauU(25.550349950980387f, 0.0f),
                         STPtauX(661.442187843137f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.7836753519607855f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_Bistratified, CA2_SP_SR, true, STPu(0.23871450754901957f, 0.0f),
                         STPtauU(25.424306926470585f, 0.0f),
                         STPtauX(678.4808956862745f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.613881323529413f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA2_SP_SR, CA2_SP_SR, true, STPu(0.23395657470588244f, 0.0f),
                         STPtauU(26.776480745098038f, 0.0f),
                         STPtauX(687.8390543137257f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.116937400980391f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setNeuronMonitor(CA2_Pyramidal, "DEFAULT");
                             
sim.setNeuronMonitor(CA2_Basket, "DEFAULT");
                             
sim.setNeuronMonitor(CA2_Wide_Arbor_Basket, "DEFAULT");
                             
sim.setNeuronMonitor(CA2_Bistratified, "DEFAULT");
                             
sim.setNeuronMonitor(CA2_SP_SR, "DEFAULT");
                             
