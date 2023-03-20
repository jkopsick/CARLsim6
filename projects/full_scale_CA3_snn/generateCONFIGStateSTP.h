int CA3_Pyramidal = sim.createGroup("CA3_Pyramidal", 183844,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int CA3c_Pyramidal = sim.createGroup("CA3c_Pyramidal", 44123,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int CA3_Giant = sim.createGroup("CA3_Giant", 37905,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int CA3_Granule = sim.createGroup("CA3_Granule", 360,
                      EXCITATORY_NEURON, 0, GPU_CORES);
                      
int CA3_Axo_Axonic = sim.createGroup("CA3_Axo_Axonic", 340,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Horizontal_Axo_Axonic = sim.createGroup("CA3_Horizontal_Axo_Axonic", 3273,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Basket = sim.createGroup("CA3_Basket", 279,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Basket_CCK = sim.createGroup("CA3_Basket_CCK", 408,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Bistratified = sim.createGroup("CA3_Bistratified", 483,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Interneuron_Specific_Oriens = sim.createGroup("CA3_Interneuron_Specific_Oriens", 2117,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Interneuron_Specific_Quad = sim.createGroup("CA3_Interneuron_Specific_Quad", 2422,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Ivy = sim.createGroup("CA3_Ivy", 176,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_LMR_Targeting = sim.createGroup("CA3_LMR_Targeting", 2614,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Lucidum_LAX = sim.createGroup("CA3_Lucidum_LAX", 133,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Lucidum_ORAX = sim.createGroup("CA3_Lucidum_ORAX", 10,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Lucidum_Radiatum = sim.createGroup("CA3_Lucidum_Radiatum", 127,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Spiny_Lucidum = sim.createGroup("CA3_Spiny_Lucidum", 581,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Mossy_Fiber_Associated = sim.createGroup("CA3_Mossy_Fiber_Associated", 443,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Mossy_Fiber_Associated_ORDEN = sim.createGroup("CA3_Mossy_Fiber_Associated_ORDEN", 68,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_O_LM = sim.createGroup("CA3_O_LM", 2117,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_QuadD_LM = sim.createGroup("CA3_QuadD_LM", 4060,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Radiatum = sim.createGroup("CA3_Radiatum", 765,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_R_LM = sim.createGroup("CA3_R_LM", 185,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_SO_SO = sim.createGroup("CA3_SO_SO", 2959,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
int CA3_Trilaminar = sim.createGroup("CA3_Trilaminar", 2117,
                      INHIBITORY_NEURON, 0, GPU_CORES);
                      
sim.setNeuronParameters(CA3_Pyramidal, 366.0, 0.7923387037895819, -63.204400817165585, -33.604173312426795, 
                                                0.008383503340982795, -42.552477688392884, 35.86146485587269, -38.868099029409194,
                                                588.0, 1);
                     
sim.setNeuronParameters(CA3c_Pyramidal, 244.0, 3.0059792094808624, -62.29424942371125, -45.27252160958905, 
                                                0.0018916502293736305, 19.362762181909922, 17.43118361878753, -47.37323032514949,
                                                104.0, 1);
                     
sim.setNeuronParameters(CA3_Giant, 96.0, 0.6092607, -57.579357, -37.121007000000006, 
                                                0.0036472806, 1.8359184, 36.421593, -49.445649,
                                                2.0, 1);
                     
sim.setNeuronParameters(CA3_Granule, 241.0, 2.2457392596461787, -78.04310161409101, -64.88107482758818, 
                                                0.05299303334168679, 1.5382678042833553, -7.726602652356235, -68.00754960176899,
                                                443.0, 1);
                     
sim.setNeuronParameters(CA3_Axo_Axonic, 165.0, 3.961462877592796, -57.099782869594016, -51.71875628202233, 
                                                0.004638608071871545, 8.683644936534172, 27.798635593278753, -73.9685042125372,
                                                15.0, 1);
                     
sim.setNeuronParameters(CA3_Horizontal_Axo_Axonic, 154.0, 0.6283394005836465, -58.523285397260686, -33.49937071744226, 
                                                0.0018555601530547705, -16.43821429322607, 36.089784079627, -38.499372222455236,
                                                21.0, 1);
                     
sim.setNeuronParameters(CA3_Basket, 45.0, 0.9951729, -57.506126, -23.378766, 
                                                0.0038461864, 9.2642765, 18.454934, -47.555661,
                                                -6.0, 1);
                     
sim.setNeuronParameters(CA3_Basket_CCK, 135.0, 0.5830051864936829, -58.99667733823241, -39.398320973495665, 
                                                0.005744829668737553, -1.2448457149694576, 18.2745885441853, -42.77118510230122,
                                                54.0, 1);
                     
sim.setNeuronParameters(CA3_Bistratified, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Interneuron_Specific_Oriens, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Interneuron_Specific_Quad, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Ivy, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_LMR_Targeting, 54.0, 1.103614344, -67.7253072, -24.08892339, 
                                                9.94E-4, -61.26447822, 10.38028985, -42.7378584,
                                                43.0, 1);
                     
sim.setNeuronParameters(CA3_Lucidum_LAX, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Lucidum_ORAX, 67.0, 1.02517187673574, -60.0241415995967, -47.9730637069381, 
                                                0.0421001283933016, -5.0726514702479, 11.0918217336367, -59.3811253801446,
                                                68.0, 1);
                     
sim.setNeuronParameters(CA3_Lucidum_Radiatum, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Spiny_Lucidum, 590.0, 3.1278805284667737, -69.58985793374488, -52.9745098372351, 
                                                0.002515063950466524, 10.11732957397694, 34.30228663739027, -58.61608318938255,
                                                18.0, 1);
                     
sim.setNeuronParameters(CA3_Mossy_Fiber_Associated, 185.0, 0.5537620687180225, -59.41328791130742, -36.59455014471939, 
                                                0.003253592309695741, 3.685755904191206, 9.988888062112437, -43.54912180240387,
                                                5.0, 1);
                     
sim.setNeuronParameters(CA3_Mossy_Fiber_Associated_ORDEN, 209.0, 1.3798071345720573, -57.07642357137907, -39.10204278417623, 
                                                0.007838059793641043, 12.933285539772207, 16.31326818877055, -40.68066488526959,
                                                0.0, 1);
                     
sim.setNeuronParameters(CA3_O_LM, 65.0, 0.5091262478834193, -60.042485181595964, -30.86630121066196, 
                                                0.009992916930786392, 2.3943826680001044, 19.7678131981134, -52.81049440689757,
                                                6.0, 1);
                     
sim.setNeuronParameters(CA3_QuadD_LM, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Radiatum, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_R_LM, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_SO_SO, 20.0, 1.0, -55.0, -40.0, 
                                                0.15, 8.0, 25.0, -55.0,
                                                200.0, 1);
                     
sim.setNeuronParameters(CA3_Trilaminar, 251.0, 0.9307159388034032, -63.132602265551874, -55.63967126844138, 
                                                4.4125867408879984E-4, -18.757654124872218, 17.00685860497037, -52.61771924201447,
                                                74.0, 1);
                     
sim.connect(CA3_Granule, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001048713458577f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2424763020588234f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2039107720588236f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010336062460613f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.6030019307843139f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00345250932952f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2039125471568624f, 0.0f);
                       
sim.connect(CA3_Axo_Axonic, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.80816184872549f, 0.0f);
                       
sim.connect(CA3_Horizontal_Axo_Axonic, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3328564310784314f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.46224545627451f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2418753776470586f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016551885443385f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0995024376470584f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.017266110630242f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2934355047058823f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.020004635767757f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.434237945f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006315025207858f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3149851703921573f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003734294269139f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.396786998921569f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.299167583235294f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002205963561617f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4428657599019608f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006597621280448f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2567624011764706f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005932501643581f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4745713310784312f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005801152191822f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2271761114705886f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014196430848629f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.518087432352941f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006022093385036f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9393450039215685f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009973283475827f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4604766294117646f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004654030951966f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.651018042843137f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.033995537130037f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2785662479411766f, 0.0f);
                       
sim.connect(CA3_Granule, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001392681069935f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7040743774509803f, 0.0f);
                       
sim.connect(CA3_Giant, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7309713627450978f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010521116592318f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.106420154705882f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003336374449271f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6379154764705892f, 0.0f);
                       
sim.connect(CA3_Axo_Axonic, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1838980686274505f, 0.0f);
                       
sim.connect(CA3_Horizontal_Axo_Axonic, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.955218879411766f, 0.0f);
                       
sim.connect(CA3_Basket, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.251043529411765f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7124030019607848f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001489649158607f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4392125978431363f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003803580019902f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.956433819607844f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007170314701149f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7913987771568627f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004447328315745f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9072304196078433f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7257225954901967f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002389612094862f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9695735264705883f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006874645475926f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7320812416666662f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00521668823313f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.000468942156863f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.0061464371791f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6240266176470595f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01928548495546f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9409164696078423f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007058219202796f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.39393763137255f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01062104309604f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9601049535294113f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3c_Pyramidal, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004960716962823f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.177073394117647f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001192613188416f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1926519626470595f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00049204142249f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8083361539215683f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012745293050342f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8838554343137257f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014384788589913f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0622003049019604f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.013437605378342f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1447101196078426f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000580922632293f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.069213761764706f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000900965211829f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1016688539215687f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000633408043235f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.189688934313726f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001103871424982f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.002568165686274f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002673430117481f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.001139247058825f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000502554138877f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.825924964705881f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000925747846318f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1631559284313733f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00069451688664f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.429439559803921f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_Granule, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.029840954376478f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.084130270588236f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.988521159607843f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6423886758823527f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5859068704901962f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6607263176470588f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4827788093137253f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.511687351666666f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.17412043627451f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6698132205882343f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.848032f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.55690820745098f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.624317728431373f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4107801572549015f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5482423767647056f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_Giant, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5511908380392152f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001721750285051f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6375211970588235f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5354004676470594f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008752842698051f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9990419184313726f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003269351775319f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6624212303921564f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8474489931372542f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4615451834313729f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01432129793982f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4297102255882344f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014942497952302f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.57562127117647f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.017935218028853f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6433303949019609f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007446546493006f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5800148479411769f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004190095433815f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.60160550490196f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.559546552352941f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002206991306149f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6817850634313725f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007457070301302f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5065299311764708f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005324705300069f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6904643816666676f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004787150963291f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5299824504901962f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.018649957874453f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7821116640196077f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006882605466891f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2109278607843135f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011028787615984f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6873918372549015f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005485246777812f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8677363666666662f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.027847397150697f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5802897402941178f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006979252555739f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6537165494117645f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7374998013725482f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003974770397557f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1146909832352938f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002191102279419f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8101318140196072f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002409566103824f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7785516205882352f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001996385488574f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7131556790196085f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002758383247004f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6427946849019601f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005793804861615f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8223296131372544f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003150084868549f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8232580807843128f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001824214600942f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.00740330882353f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002730953425135f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7892667855882343f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Horizontal_Axo_Axonic, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8816138254901955f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001486442202768f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8393355065686274f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7606181790196076f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008742149587737f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2473595595098035f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003300149406344f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9492598946078425f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 3.0346137156862745f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6828708651960778f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016127894994593f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.75397110245098f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016373783592711f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8971059617647066f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.019267478353359f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9626680980392164f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00742297616665f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9041749454901957f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004458625938828f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9193371473529413f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.870528339215686f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002485713909282f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0128009009803915f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007492386305722f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8108758049019604f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00445242977232f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9868528191176473f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005428808354703f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.85705390245098f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.018345181434577f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.106671222549021f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007281362467288f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.5071603009803916f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.011026417012394f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0050213333333327f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005499829107565f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1892969852941184f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.030933101736931f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.901637971176471f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006990307669133f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9559286347058813f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Basket, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.052925364705883f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006646110297527f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0575632770588235f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000789237812158f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.71511553009804f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5309963750980393f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00180481667187f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6557474115686273f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7864028735294115f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.118239590490196f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012800072261199f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4685948705882352f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012882994643315f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5847188916666661f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014856648455662f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6528043720588237f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004157465028718f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5802827663725483f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002878946641728f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6056623625490196f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5851502656862742f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001790457134221f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6803773848039216f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005301929271308f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5392142933333326f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001243557620414f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.691399968039215f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00530224406534f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5647735447058828f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010055212376131f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7625013837254895f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004800066956169f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1450222186274512f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008005096667888f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6837315120588232f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003386000800303f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8505472078431366f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.021803308355501f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6024129730392163f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004612831142897f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6622156235294119f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Basket_CCK, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7400718298039217f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000918715737242f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.756541869607843f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001117722327203f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0808377772549023f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000528346778109f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6989168798039218f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.023092582496377f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4892462819607846f, 0.0f);
                       
sim.connect(CA3_R_LM, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.021288661182718f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6543876113725486f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.022406353035356f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7360457411764707f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001868643632251f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6599554757843138f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002391372159178f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.689707779411765f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6439750362745098f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001064495041907f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7602480950980401f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002334307127495f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5989024183333338f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002592459753365f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6074043754901959f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005733987875973f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8457347317647066f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002789623377589f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2493706676470584f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002874839481845f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7760096774509804f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001624895927876f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9323188705882344f, 0.0f);
                       
sim.connect(CA3_QuadD_LM, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.028607244824161f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.644556444411764f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001823757080296f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7359235617647055f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_LMR_Targeting, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8151181009803925f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005398090959254f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.044290395588235f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002054808040977f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6824327999019608f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002117868322351f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4564100549019614f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002136159939715f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.680088899705882f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002216508666297f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6109459398039216f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00292335630232f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6356411466666663f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002449268949893f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7071468551960778f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002906233996959f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5398117963725488f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00671997504819f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5643246149999999f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002081340976792f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2376941245098045f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00286564639926f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7197210114705892f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002396963316894f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8939900372549023f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002407282024998f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6856221705882355f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_R_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.769271909215686f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005504235313437f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9122582176470593f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003405076930575f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5029700558823536f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00365197854028f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6597541274509808f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.0031740642003f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5822052962745101f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00405323242744f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5107862696078422f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007521181136753f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.711661604705883f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004463108258739f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6903030764705893f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003038409467321f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8885703872549024f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004018059021029f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.657191269313725f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_O_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7548008103921575f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001561989970945f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7028089098039214f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004062711354707f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9706906888235289f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001754252312182f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6094170711764701f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001877217854807f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4155907395098035f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001785916822293f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6377395659803926f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003975265766503f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5729815839215682f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004823092615958f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5953495144117644f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.562296933137255f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003207666074966f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6691543383333336f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004641311769379f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5030744948039216f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00598975532982f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5216611850000001f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008351200737118f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7771656617647071f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005106377335078f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2156937950980398f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005349633651781f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.676866716764706f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003822828969519f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8653226196078434f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00405397380598f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.646037434803921f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Lucidum_ORAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7354676106862752f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002110271688238f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7178875441176473f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003472760028897f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.974467209803922f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001452928126492f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6133688026470594f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001554769170624f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4180503206862745f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001486954528805f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6381761287254903f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004046314662897f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.571778465098039f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004884878146839f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5975018180392158f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.562290125098039f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003310281412133f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6717440068627456f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00522297321959f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5009759364705877f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005408828762463f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5267976446078433f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009370429500985f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7718187588235292f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005621217454436f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2100054470588226f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005766768689226f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6764355088235292f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004307946660453f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8617337696078426f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004613587390025f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6461374772549022f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Lucidum_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7292619308823527f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5714264397058821f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9120840990196081f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.535257740980393f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.314945780686274f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.528665598627451f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4718383169607847f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.488958100882353f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4589473116666667f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5699245994117652f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.399318739215686f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.417640878039215f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6777567592156868f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.139506754901961f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5761799166666663f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7803522598039212f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5385382859803922f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Lucidum_LAX, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6294187013725487f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001996467019804f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.021821024509804f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.045019721764706f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003846004602627f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1630829459803917f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002162793390255f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1837964238235295f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1474257374509809f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00064155107683f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.252267207745098f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001604865231908f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.1117057468627447f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.019488718447305f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3142646929411763f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005580788709573f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.701345112941176f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002515899960315f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.279632575490196f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001301690440605f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.456378172254901f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003129234265887f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.221861822156862f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Spiny_Lucidum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.2922097306862745f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007632744688928f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.011070232745098f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005635285031498f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6672703901960784f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005832142235407f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6025500676470583f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005241792670185f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5257010515686271f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007144078824026f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.466475156176471f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009997129804552f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6496114948039216f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007508979410277f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6147497299019609f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005682045875796f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8221835068627448f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006827558370356f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6025249400000006f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Trilaminar, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6883581823529412f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004106242300486f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0871476593137253f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002495854617841f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.799612279019609f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002680689713114f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9102412563725488f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002272716435456f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8247116568627453f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003284023197271f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7629631172549014f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005949959424052f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9650882731372554f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003648605007439f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.945354456862746f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002270983373965f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1310233921568624f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00317163998446f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9066855245098036f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_SO_SO, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.0153220196078427f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006583845952862f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9795770499999998f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002801601495355f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6044548258823532f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002903690694536f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4217859749019617f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002874215647401f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6328713235294117f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003011015507608f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.563122622156862f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003759125275878f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5919809373529414f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00321845233457f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6635615220588236f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003801646792837f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4922223543137252f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007776379656245f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5280332726470593f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002827160891191f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1841735813725496f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003710916255385f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6697016858823535f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003228696895678f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8486771460784321f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003254900462761f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6356679541176473f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Radiatum, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7161554090196074f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001164106869828f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8203178696078428f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009024690854196f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0120601467647057f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00295231974391f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6685499200980392f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5918993392156862f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4191162367647068f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7756822166666664f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001317751463308f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4179533446078434f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003354391454418f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6515812686274507f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007680045521973f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.588734446960784f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003758980605823f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6137370362745092f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.584445578235294f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002227642668384f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6879080843137255f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.009516287513409f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5138165595098039f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004192484625931f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6968557705882343f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005598251073587f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5292917347058819f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.016633777541732f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8052953183333336f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00810162254534f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.246683052941176f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01272222064382f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6958535258823535f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006667289928768f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8891913833333331f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008553345250605f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6630414835294116f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Mossy_Fiber_Associated_ORDEN, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7538245264705883f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001138431788654f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7422286460784306f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4796902113725492f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004177874114426f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9799235706862742f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001192287738328f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.601635100490196f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001182558765685f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3661100138235291f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001305145942129f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5864996788235297f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00412125210193f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5251267492156857f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003595196712684f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5480108098039216f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5134874079411764f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002043094925755f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6229838941176478f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004368005467085f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4521386469607842f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005481726185732f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4704843518627455f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014290863022445f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7322895330392163f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005912570325274f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8602572980392165f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007038727710649f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6320088348039221f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003247872247979f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7872858250980388f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00374025540176f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5916668650980392f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Mossy_Fiber_Associated, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6823244704901956f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008834380834715f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9976534805882353f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00194387713546f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.679485536764706f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.521656162156863f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002865706892926f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6292835399019603f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7427278748039219f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4283797240196086f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001158604929568f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4239397810784313f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003273136817616f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6326309700980393f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007156611869115f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.576662302352942f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004575462288052f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.590578102352941f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5630313826470594f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002595612978113f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.664386741960784f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007248079170706f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5085958407843136f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004366752828241f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6693259509803924f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005335669213344f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5275189208823532f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.018390958266034f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.770934408823529f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007139740189322f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1845114264705883f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010775356401716f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6694195450980387f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005276429241738f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8531675617647048f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006755570642747f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6443725512745102f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Bistratified, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7273745455882348f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000930196296524f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 3.364726605882352f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005952322822792f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5420426342156868f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.330214309803923f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001821158162179f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.6445707901960787f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000785046945554f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9471929647058814f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002109765394627f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1930557284313723f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004758908653123f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.109969837254902f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00279635880387f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1432456372549007f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.118411518627451f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001473177335272f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.204410135294117f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005213731570802f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.069172550980392f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002134787861359f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2246631735294127f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00433586440596f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.065925403921569f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.014078187748553f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.3553204960784315f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005397668488678f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.7147297107843134f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.008513999767964f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.204709432352942f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003343307001994f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.332336757843136f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004699311124113f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.176853066666668f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Ivy, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.2810987117647055f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00090583401673f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7780610725490196f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6126551372549023f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006628877016268f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.0602229404901957f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003430402838892f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6976576442156859f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.793605159803921f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4712534539215687f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.000857316849683f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4204529521568625f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003635723094916f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6509093558823527f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006591329729821f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5877236621568627f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002767750275586f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6101148878431366f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5770364180392156f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001454084519633f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6852057852941178f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007719445577135f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5181732767647058f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004100941243523f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6913218686274505f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.003522138692047f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5279431062745101f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.012771672393512f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.796640957843138f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005310559103746f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.9372184078431383f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.010729501858511f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6956201607843138f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.005606992287966f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8493873568627448f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.007051518346678f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6589966552941178f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_QuadD_LM, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.750585683333333f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.004503259637488f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.044719670882353f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002350664412392f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.698258400000001f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00261941011461f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7280733186274508f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002163793615193f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.644757155980393f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.002772416285598f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5698555488235293f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.006410241954148f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7776619110784309f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00319686242233f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7494527980392156f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.001854372840084f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.949318624509803f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.00280950672867f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7259014803921566f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Interneuron_Specific_Oriens, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8183825489215686f, 0.0f);
                       
sim.connect(CA3_Granule, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7310018791176471f, 0.0f);
                       
sim.connect(CA3_Giant, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4983798697058819f, 0.0f);
                       
sim.connect(CA3_Pyramidal, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 0.9773978123529415f, 0.0f);
                       
sim.connect(CA3c_Pyramidal, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5935146752941185f, 0.0f);
                       
sim.connect(CA3_Basket, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.74897831127451f, 0.0f);
                       
sim.connect(CA3_Basket_CCK, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.395485302647059f, 0.0f);
                       
sim.connect(CA3_LMR_Targeting, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.3952098139215692f, 0.0f);
                       
sim.connect(CA3_O_LM, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6217314407843137f, 0.0f);
                       
sim.connect(CA3_Lucidum_ORAX, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.552393982058823f, 0.0f);
                       
sim.connect(CA3_Lucidum_Radiatum, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5784981085294123f, 0.0f);
                       
sim.connect(CA3_Lucidum_LAX, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.5427160281372545f, 0.0f);
                       
sim.connect(CA3_Spiny_Lucidum, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6505909570588237f, 0.0f);
                       
sim.connect(CA3_Trilaminar, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.4791910047058818f, 0.0f);
                       
sim.connect(CA3_SO_SO, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6628385337254903f, 0.0f);
                       
sim.connect(CA3_Radiatum, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.504751087843138f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.7562792980392155f, 0.0f);
                       
sim.connect(CA3_Mossy_Fiber_Associated, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 2.1770110862745105f, 0.0f);
                       
sim.connect(CA3_Bistratified, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6624757705882354f, 0.0f);
                       
sim.connect(CA3_Ivy, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.8401546770588233f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Oriens, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.6256536067647052f, 0.0f);
                       
sim.connect(CA3_Interneuron_Specific_Quad, CA3_Interneuron_Specific_Quad, "random", RangeWeight(0.0f, 1.0f, 2.0f), 0.01f,
                          RangeDelay(1), RadiusRF(-1.0), SYN_PLASTIC, 1.71450630490196f, 0.0f);
                       
sim.setSTP(CA3_Granule, CA3_Pyramidal, true, STPu(0.14767783344117644f, 0.0f),
                         STPtauU(87.1354561372549f, 0.0f),
                         STPtauX(161.24954110784316f, 0.0f),
                         STPtdAMPA(6.311463473529408f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Pyramidal, true, STPu(0.18934617607843138f, 0.0f),
                         STPtauU(52.05372485294115f, 0.0f),
                         STPtauX(246.9404933823529f, 0.0f),
                         STPtdAMPA(6.515630594117647f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Pyramidal, true, STPu(0.17242307448039212f, 0.0f),
                         STPtauU(27.51301394117648f, 0.0f),
                         STPtauX(278.2582848039217f, 0.0f),
                         STPtdAMPA(9.515857529411766f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Pyramidal, true, STPu(0.18161071901960787f, 0.0f),
                         STPtauU(37.29370670588235f, 0.0f),
                         STPtauX(255.25818647058827f, 0.0f),
                         STPtdAMPA(7.34902629019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Axo_Axonic, CA3_Pyramidal, true, STPu(0.21353269901960795f, 0.0f),
                         STPtauU(16.574883283333335f, 0.0f),
                         STPtauX(406.9544736274508f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.702247406862747f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Horizontal_Axo_Axonic, CA3_Pyramidal, true, STPu(0.19148922735294124f, 0.0f),
                         STPtauU(22.230954274509806f, 0.0f),
                         STPtauX(502.0161589215685f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.371027138235291f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Pyramidal, true, STPu(0.20285029617647055f, 0.0f),
                         STPtauU(20.62965420098039f, 0.0f),
                         STPtauX(416.2817166666665f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.792679311764701f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Pyramidal, true, STPu(0.1603804606862745f, 0.0f),
                         STPtauU(14.22931029313726f, 0.0f),
                         STPtauX(486.8334149019608f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.653427988235293f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Pyramidal, true, STPu(0.14217709328431374f, 0.0f),
                         STPtauU(44.335740990196065f, 0.0f),
                         STPtauX(477.64661166666673f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(9.129417093137256f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_Pyramidal, true, STPu(0.17933888054901967f, 0.0f),
                         STPtauU(28.57776649019609f, 0.0f),
                         STPtauX(472.54610990196056f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.22610827745098f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Pyramidal, true, STPu(0.1950203668627451f, 0.0f),
                         STPtauU(24.988288607843124f, 0.0f),
                         STPtauX(477.7854117647059f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.461853503921569f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Pyramidal, true, STPu(0.1897581976960784f, 0.0f),
                         STPtauU(23.92911214705882f, 0.0f),
                         STPtauX(494.6617038235295f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.231258097058824f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Pyramidal, true, STPu(0.19387164009803903f, 0.0f),
                         STPtauU(25.06536782843138f, 0.0f),
                         STPtauX(495.92637803921576f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.477801793137253f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Pyramidal, true, STPu(0.18461633176470582f, 0.0f),
                         STPtauU(31.78853329411765f, 0.0f),
                         STPtauX(438.98422500000015f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.902408604901962f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Pyramidal, true, STPu(0.1876328498039215f, 0.0f),
                         STPtauU(23.699984480392164f, 0.0f),
                         STPtauX(490.0698555882353f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.607347954901963f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Pyramidal, true, STPu(0.1821483308235294f, 0.0f),
                         STPtauU(24.62192181862745f, 0.0f),
                         STPtauX(473.9854958823528f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.345551510784317f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Pyramidal, true, STPu(0.19451862088235297f, 0.0f),
                         STPtauU(25.43344641666667f, 0.0f),
                         STPtauX(484.8045160784315f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.3587126754902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Pyramidal, true, STPu(0.16506121766666673f, 0.0f),
                         STPtauU(32.38547604901962f, 0.0f),
                         STPtauX(486.1747933333337f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.652479028431372f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Pyramidal, true, STPu(0.20258581490196093f, 0.0f),
                         STPtauU(33.64834914705881f, 0.0f),
                         STPtauX(480.37887725490174f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.821121734313722f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Pyramidal, true, STPu(0.20843165598039207f, 0.0f),
                         STPtauU(62.46839154901961f, 0.0f),
                         STPtauX(502.56266254901965f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.958206878431371f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Pyramidal, true, STPu(0.19621626852941176f, 0.0f),
                         STPtauU(21.64131311764706f, 0.0f),
                         STPtauX(514.6943344117647f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.531919730392156f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Pyramidal, true, STPu(0.20783682421568625f, 0.0f),
                         STPtauU(39.78902169607844f, 0.0f),
                         STPtauX(490.2477949999999f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(9.029700833333338f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_Pyramidal, true, STPu(0.18438583866666666f, 0.0f),
                         STPtauU(35.659962372549025f, 0.0f),
                         STPtauX(437.52988676470585f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.653719859803921f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3c_Pyramidal, true, STPu(0.15884349107843135f, 0.0f),
                         STPtauU(132.7248808137255f, 0.0f),
                         STPtauX(140.4376134803922f, 0.0f),
                         STPtdAMPA(5.883198878431371f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3c_Pyramidal, true, STPu(0.19420286362745096f, 0.0f),
                         STPtauU(87.26922001960786f, 0.0f),
                         STPtauX(235.95237431372547f, 0.0f),
                         STPtdAMPA(6.194874094117647f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3c_Pyramidal, true, STPu(0.17166559852941174f, 0.0f),
                         STPtauU(47.11828969607841f, 0.0f),
                         STPtauX(302.78500186274516f, 0.0f),
                         STPtdAMPA(7.613160549019606f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3c_Pyramidal, true, STPu(0.1904419051960784f, 0.0f),
                         STPtauU(56.406115666666665f, 0.0f),
                         STPtauX(248.84273049019612f, 0.0f),
                         STPtdAMPA(6.671007602941179f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Axo_Axonic, CA3c_Pyramidal, true, STPu(0.20924557539215682f, 0.0f),
                         STPtauU(25.33285101960785f, 0.0f),
                         STPtauX(521.7836494117648f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.444704510784315f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Horizontal_Axo_Axonic, CA3c_Pyramidal, true, STPu(0.210050652254902f, 0.0f),
                         STPtauU(26.70160414215686f, 0.0f),
                         STPtauX(536.5863637254902f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.6285141166666675f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3c_Pyramidal, true, STPu(0.21787672745098038f, 0.0f),
                         STPtauU(25.886625926470582f, 0.0f),
                         STPtauX(531.7254057843136f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.286021281372549f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3c_Pyramidal, true, STPu(0.21394065274509808f, 0.0f),
                         STPtauU(19.545351558823526f, 0.0f),
                         STPtauX(339.29960803921574f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.604669281372547f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3c_Pyramidal, true, STPu(0.14942550406862742f, 0.0f),
                         STPtauU(75.82696299019607f, 0.0f),
                         STPtauX(492.7239549019605f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.708689682352942f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3c_Pyramidal, true, STPu(0.21117054401960786f, 0.0f),
                         STPtauU(35.479887313725484f, 0.0f),
                         STPtauX(500.21645205882356f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.942187198039217f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3c_Pyramidal, true, STPu(0.207297320490196f, 0.0f),
                         STPtauU(33.48793321078433f, 0.0f),
                         STPtauX(519.0588371568626f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.736691855882352f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3c_Pyramidal, true, STPu(0.2123992022549019f, 0.0f),
                         STPtauU(35.34725242156862f, 0.0f),
                         STPtauX(516.8310433333334f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.956891256862748f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3c_Pyramidal, true, STPu(0.20081165568627452f, 0.0f),
                         STPtauU(49.49183090196077f, 0.0f),
                         STPtauX(452.2000729411766f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.425853166666668f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3c_Pyramidal, true, STPu(0.20545220833333339f, 0.0f),
                         STPtauU(33.794516843137245f, 0.0f),
                         STPtauX(508.1829682352943f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.061417011764707f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3c_Pyramidal, true, STPu(0.19704786990196077f, 0.0f),
                         STPtauU(34.236519470588235f, 0.0f),
                         STPtauX(497.97023117647063f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.824414553921572f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3c_Pyramidal, true, STPu(0.21058333843137253f, 0.0f),
                         STPtauU(35.59600991666665f, 0.0f),
                         STPtauX(507.0208810784313f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.852658873529412f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3c_Pyramidal, true, STPu(0.17547604068627456f, 0.0f),
                         STPtauU(52.12924455882355f, 0.0f),
                         STPtauX(505.49748725490207f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.201268122549019f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3c_Pyramidal, true, STPu(0.21685625509803916f, 0.0f),
                         STPtauU(49.944170284313735f, 0.0f),
                         STPtauX(500.1857378431373f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.455926701960782f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3c_Pyramidal, true, STPu(0.214430523627451f, 0.0f),
                         STPtauU(81.158653127451f, 0.0f),
                         STPtauX(519.409650980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.575892804901963f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3c_Pyramidal, true, STPu(0.21087651450980383f, 0.0f),
                         STPtauU(28.671439382352954f, 0.0f),
                         STPtauX(542.3725662745097f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.1190581205882335f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3c_Pyramidal, true, STPu(0.22086077333333326f, 0.0f),
                         STPtauU(64.51339973529416f, 0.0f),
                         STPtauX(506.7574250980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.79393585784314f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Granule, true, STPu(0.1772799700490196f, 0.0f),
                         STPtauU(64.48195917647058f, 0.0f),
                         STPtauX(493.54061774509813f, 0.0f),
                         STPtdAMPA(6.174906539215685f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Granule, true, STPu(0.1987654711764706f, 0.0f),
                         STPtauU(83.38369243137255f, 0.0f),
                         STPtauX(437.5160784313726f, 0.0f),
                         STPtdAMPA(5.263929683333332f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Granule, true, STPu(0.19602998960784312f, 0.0f),
                         STPtauU(127.831553f, 0.0f),
                         STPtauX(568.5722451960784f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.182095007843137f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_Granule, true, STPu(0.2138823606862745f, 0.0f),
                         STPtauU(106.87447660784314f, 0.0f),
                         STPtauX(580.0149209803919f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.753420335294118f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Granule, true, STPu(0.21955374009803932f, 0.0f),
                         STPtauU(96.16113957843136f, 0.0f),
                         STPtauX(584.51513627451f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.903481157843136f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Granule, true, STPu(0.21724741705882353f, 0.0f),
                         STPtauU(96.57271229411766f, 0.0f),
                         STPtauX(591.7119605882352f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.766553060784313f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Granule, true, STPu(0.21814891794117647f, 0.0f),
                         STPtauU(100.82454926470592f, 0.0f),
                         STPtauX(590.2017227450979f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.9628146107843145f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Granule, true, STPu(0.21506886431372538f, 0.0f),
                         STPtauU(100.92402454901962f, 0.0f),
                         STPtauX(583.2379628431373f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.072893619607845f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Granule, true, STPu(0.20901298960784326f, 0.0f),
                         STPtauU(95.45763979411761f, 0.0f),
                         STPtauX(581.0812514705882f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.785044140196081f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Granule, true, STPu(0.2084958901960784f, 0.0f),
                         STPtauU(110.57144229411767f, 0.0f),
                         STPtauX(576.9862172549019f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.9383321705882395f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Granule, true, STPu(0.21709719294117633f, 0.0f),
                         STPtauU(239.3296721568629f, 0.0f),
                         STPtauX(560.3918608823532f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.420370515686275f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Granule, true, STPu(0.22259761068627454f, 0.0f),
                         STPtauU(86.68786765686272f, 0.0f),
                         STPtauX(594.260333921569f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.4387016784313715f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Granule, true, STPu(0.21874015627450988f, 0.0f),
                         STPtauU(216.40252333333328f, 0.0f),
                         STPtauX(561.9515639215689f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.738868554901963f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_Granule, true, STPu(0.21181500617647062f, 0.0f),
                         STPtauU(110.33377257843135f, 0.0f),
                         STPtauX(573.0237517647059f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.7857023127451f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Giant, true, STPu(0.17878617460784313f, 0.0f),
                         STPtauU(29.691712901960795f, 0.0f),
                         STPtauX(402.72603362745105f, 0.0f),
                         STPtdAMPA(6.05093584019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Giant, true, STPu(0.20600243029411763f, 0.0f),
                         STPtauU(31.545816607843143f, 0.0f),
                         STPtauX(333.3063693137256f, 0.0f),
                         STPtdAMPA(4.790134124509805f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Giant, true, STPu(0.213253045f, 0.0f),
                         STPtauU(21.85498839705882f, 0.0f),
                         STPtauX(588.6195556862745f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.0089949245098015f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Giant, true, STPu(0.20912330529411757f, 0.0f),
                         STPtauU(20.521378598039224f, 0.0f),
                         STPtauX(582.7057412745099f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.13174973235294f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Giant, true, STPu(0.19846426352941174f, 0.0f),
                         STPtauU(21.868596460784318f, 0.0f),
                         STPtauX(559.3897992156863f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.8583745166666645f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Giant, true, STPu(0.19908869696078427f, 0.0f),
                         STPtauU(24.23521544607843f, 0.0f),
                         STPtauX(570.9377149019606f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.9941786107843145f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Giant, true, STPu(0.2233259414705882f, 0.0f),
                         STPtauU(54.3089867647059f, 0.0f),
                         STPtauX(574.4124978431372f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.5756310490196075f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Giant, true, STPu(0.21937791450980396f, 0.0f),
                         STPtauU(19.75180258823529f, 0.0f),
                         STPtauX(595.0492251960785f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.393038420588237f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Giant, true, STPu(0.22634490303921567f, 0.0f),
                         STPtauU(39.44432434313725f, 0.0f),
                         STPtauX(578.7309799019608f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(8.05753770980392f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Giant, true, STPu(0.21185385499999995f, 0.0f),
                         STPtauU(21.22796959313725f, 0.0f),
                         STPtauX(588.7156006862745f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.8171900656862725f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Giant, true, STPu(0.21485334490196073f, 0.0f),
                         STPtauU(21.504645475490193f, 0.0f),
                         STPtauX(574.7202306862745f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.952608567647059f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Giant, true, STPu(0.18275912274509803f, 0.0f),
                         STPtauU(28.604534715686277f, 0.0f),
                         STPtauX(561.7485111764705f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.257589910784311f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_Giant, true, STPu(0.20585083970588242f, 0.0f),
                         STPtauU(24.41403688235295f, 0.0f),
                         STPtauX(552.9813998039214f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.928588781372548f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_Giant, true, STPu(0.20669651392156865f, 0.0f),
                         STPtauU(22.407402642156864f, 0.0f),
                         STPtauX(572.2679025490195f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.771456908823532f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Axo_Axonic, true, STPu(0.1761111517745098f, 0.0f),
                         STPtauU(44.44352177450978f, 0.0f),
                         STPtauX(289.63848715686277f, 0.0f),
                         STPtdAMPA(3.299100406862745f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Axo_Axonic, true, STPu(0.20115412377450967f, 0.0f),
                         STPtauU(40.69331022549018f, 0.0f),
                         STPtauX(395.43580617647063f, 0.0f),
                         STPtdAMPA(4.086180383333333f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Axo_Axonic, true, STPu(0.16712277686274518f, 0.0f),
                         STPtauU(29.08398523529412f, 0.0f),
                         STPtauX(464.5912673529413f, 0.0f),
                         STPtdAMPA(5.411203675490194f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Axo_Axonic, true, STPu(0.2011249022156863f, 0.0f),
                         STPtauU(29.3000908137255f, 0.0f),
                         STPtauX(373.94562039215697f, 0.0f),
                         STPtdAMPA(4.265099726470588f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Axo_Axonic, true, STPu(0.22218223137254908f, 0.0f),
                         STPtauU(24.874489019607836f, 0.0f),
                         STPtauX(619.6314584313727f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.86472666372549f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Axo_Axonic, true, STPu(0.1822284342156862f, 0.0f),
                         STPtauU(17.860131225490196f, 0.0f),
                         STPtauX(539.3344071568625f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.078168224509804f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Axo_Axonic, true, STPu(0.1765025731862745f, 0.0f),
                         STPtauU(28.83378275490197f, 0.0f),
                         STPtauX(592.5519152941175f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.209236434313725f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_Axo_Axonic, true, STPu(0.2002597406862745f, 0.0f),
                         STPtauU(23.026924024509793f, 0.0f),
                         STPtauX(604.9455766666666f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.790636885294116f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Axo_Axonic, true, STPu(0.20846358068627452f, 0.0f),
                         STPtauU(22.13334460294118f, 0.0f),
                         STPtauX(605.8697535294118f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.9925461303921566f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Axo_Axonic, true, STPu(0.20494146323529408f, 0.0f),
                         STPtauU(22.05162779411764f, 0.0f),
                         STPtauX(622.9611782352943f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.871543563725489f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Axo_Axonic, true, STPu(0.2062848813235294f, 0.0f),
                         STPtauU(22.655812357843143f, 0.0f),
                         STPtauX(621.816155980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.034172562745097f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Axo_Axonic, true, STPu(0.20065371509803923f, 0.0f),
                         STPtauU(23.744102254901957f, 0.0f),
                         STPtauX(605.470010490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.74400997745098f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Axo_Axonic, true, STPu(0.20308243431372552f, 0.0f),
                         STPtauU(21.403037593137256f, 0.0f),
                         STPtauX(612.8500380392157f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.108196679411763f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Axo_Axonic, true, STPu(0.19116560401960786f, 0.0f),
                         STPtauU(22.435620220588234f, 0.0f),
                         STPtauX(596.1324835294115f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.912622090196079f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Axo_Axonic, true, STPu(0.2075761033333332f, 0.0f),
                         STPtauU(22.47735837254901f, 0.0f),
                         STPtauX(607.8811272549017f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.931461363725492f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Axo_Axonic, true, STPu(0.19249960166666663f, 0.0f),
                         STPtauU(24.568033715686276f, 0.0f),
                         STPtauX(601.6721974509803f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.990320209803923f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Axo_Axonic, true, STPu(0.21180921735294114f, 0.0f),
                         STPtauU(25.472280970588233f, 0.0f),
                         STPtauX(631.9625586274514f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.24024282254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Axo_Axonic, true, STPu(0.22022867627450973f, 0.0f),
                         STPtauU(50.22300354901961f, 0.0f),
                         STPtauX(596.2314497058823f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.905622907843137f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Axo_Axonic, true, STPu(0.21199139460784316f, 0.0f),
                         STPtauU(20.685648745098035f, 0.0f),
                         STPtauX(624.1003523529411f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.522131307843137f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Axo_Axonic, true, STPu(0.22209548049019595f, 0.0f),
                         STPtauU(37.035912303921556f, 0.0f),
                         STPtauX(603.4701535294116f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.888327115686273f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_Axo_Axonic, true, STPu(0.19911474725490197f, 0.0f),
                         STPtauU(24.563670642156858f, 0.0f),
                         STPtauX(583.4670107843137f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.9109343441176465f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Axo_Axonic, true, STPu(0.20452039986274506f, 0.0f),
                         STPtauU(22.20067339215687f, 0.0f),
                         STPtauX(611.0301020588232f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.66783565882353f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Axo_Axonic, true, STPu(0.20508422941176474f, 0.0f),
                         STPtauU(23.133032382352944f, 0.0f),
                         STPtauX(606.7190600980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.629295544117647f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Horizontal_Axo_Axonic, true, STPu(0.18732169397058823f, 0.0f),
                         STPtauU(29.280647921568622f, 0.0f),
                         STPtauX(396.4681628431373f, 0.0f),
                         STPtdAMPA(5.9501018529411756f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Horizontal_Axo_Axonic, true, STPu(0.2134899235294118f, 0.0f),
                         STPtauU(31.332780411764716f, 0.0f),
                         STPtauX(335.03814088235293f, 0.0f),
                         STPtdAMPA(4.757428066666668f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Horizontal_Axo_Axonic, true, STPu(0.22240959480392158f, 0.0f),
                         STPtauU(20.899183740196083f, 0.0f),
                         STPtauX(577.609833921569f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.625567404901959f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Horizontal_Axo_Axonic, true, STPu(0.21935937617647058f, 0.0f),
                         STPtauU(20.657208750000002f, 0.0f),
                         STPtauX(590.845311862745f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.507857315686276f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Horizontal_Axo_Axonic, true, STPu(0.2062578323529413f, 0.0f),
                         STPtauU(21.318350230392145f, 0.0f),
                         STPtauX(563.359033137255f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.551176354901961f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Horizontal_Axo_Axonic, true, STPu(0.2214305095098039f, 0.0f),
                         STPtauU(21.235619916666657f, 0.0f),
                         STPtauX(579.8174670588236f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.536264352941175f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Horizontal_Axo_Axonic, true, STPu(0.22621429696078432f, 0.0f),
                         STPtauU(19.233334083333325f, 0.0f),
                         STPtauX(597.2600922549018f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.1099378764705845f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Horizontal_Axo_Axonic, true, STPu(0.23175047980392152f, 0.0f),
                         STPtauU(38.85532648039216f, 0.0f),
                         STPtauX(581.4135484313726f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.652672500980394f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Horizontal_Axo_Axonic, true, STPu(0.21819683490196068f, 0.0f),
                         STPtauU(20.994251921568633f, 0.0f),
                         STPtauX(580.5461240196076f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.3283555f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Horizontal_Axo_Axonic, true, STPu(0.21895615637254895f, 0.0f),
                         STPtauU(21.994165210784313f, 0.0f),
                         STPtauX(573.6118251960786f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.266659472549018f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Basket, true, STPu(0.19050812284313726f, 0.0f),
                         STPtauU(37.25825322549021f, 0.0f),
                         STPtauX(344.3250416666667f, 0.0f),
                         STPtdAMPA(2.9537005284313733f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Basket, true, STPu(0.21388440323529412f, 0.0f),
                         STPtauU(32.85891544117647f, 0.0f),
                         STPtauX(448.8345985294119f, 0.0f),
                         STPtdAMPA(3.6393005686274518f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Basket, true, STPu(0.18897550562745102f, 0.0f),
                         STPtauU(23.321036357843138f, 0.0f),
                         STPtauX(525.604510980392f, 0.0f),
                         STPtdAMPA(4.5253321117647065f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Basket, true, STPu(0.2172845551960784f, 0.0f),
                         STPtauU(21.94924457843137f, 0.0f),
                         STPtauX(421.1570413725488f, 0.0f),
                         STPtdAMPA(3.6986477313725485f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Basket, true, STPu(0.2338328018627451f, 0.0f),
                         STPtauU(12.078655940196079f, 0.0f),
                         STPtauX(621.5074556862743f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(3.8263822686274516f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Basket, true, STPu(0.19645832847058822f, 0.0f),
                         STPtauU(14.61380977843137f, 0.0f),
                         STPtauX(542.038347745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.455384839215688f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Basket, true, STPu(0.1927262469607844f, 0.0f),
                         STPtauU(21.319061446078436f, 0.0f),
                         STPtauX(604.9049218627451f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.360908037254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_Basket, true, STPu(0.21404449235294115f, 0.0f),
                         STPtauU(17.55047353431372f, 0.0f),
                         STPtauX(618.6283088235294f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.033871181372549f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Basket, true, STPu(0.22122924754901968f, 0.0f),
                         STPtauU(17.168172602941176f, 0.0f),
                         STPtauX(620.8604790196076f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.205992401960784f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Basket, true, STPu(0.21892750794117646f, 0.0f),
                         STPtauU(16.857230593137253f, 0.0f),
                         STPtauX(634.6856908823535f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.098983049999999f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Basket, true, STPu(0.22001201333333328f, 0.0f),
                         STPtauU(17.3942148627451f, 0.0f),
                         STPtauX(634.0778711764705f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.250252490196077f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Basket, true, STPu(0.21562761843137251f, 0.0f),
                         STPtauU(18.056008078431365f, 0.0f),
                         STPtauX(625.1287409803922f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.009330797058824f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Basket, true, STPu(0.21680441519607835f, 0.0f),
                         STPtauU(16.52424038235294f, 0.0f),
                         STPtauX(624.7567616666664f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.304926914705882f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Basket, true, STPu(0.20505096156862743f, 0.0f),
                         STPtauU(17.334637602941168f, 0.0f),
                         STPtauX(614.7664814705885f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.128761775490196f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Basket, true, STPu(0.22004615990196075f, 0.0f),
                         STPtauU(17.57095455882353f, 0.0f),
                         STPtauX(622.3195015686274f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.185534493137253f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Basket, true, STPu(0.20747741862745103f, 0.0f),
                         STPtauU(18.654232877450983f, 0.0f),
                         STPtauX(614.4946961764705f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.197094447058824f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Basket, true, STPu(0.22564823754901964f, 0.0f),
                         STPtauU(19.161466598039215f, 0.0f),
                         STPtauX(645.1251419607842f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.637354941176471f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Basket, true, STPu(0.22736201705882347f, 0.0f),
                         STPtauU(37.785903455882355f, 0.0f),
                         STPtauX(605.9321529411766f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.408755510784313f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Basket, true, STPu(0.22506249588235286f, 0.0f),
                         STPtauU(16.200880671568623f, 0.0f),
                         STPtauX(635.0318738235296f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.809684687254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Basket, true, STPu(0.2324040387254903f, 0.0f),
                         STPtauU(28.70785407352941f, 0.0f),
                         STPtauX(612.5018228431371f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.025144749999999f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_Basket, true, STPu(0.2116952620588235f, 0.0f),
                         STPtauU(18.339426333333336f, 0.0f),
                         STPtauX(603.4652070588234f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.115564470588235f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Basket, true, STPu(0.21753893568627444f, 0.0f),
                         STPtauU(17.30055443627452f, 0.0f),
                         STPtauX(624.2917020588233f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.9682176f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Basket, true, STPu(0.2184242110784314f, 0.0f),
                         STPtauU(17.838540313725492f, 0.0f),
                         STPtauX(620.986785f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.934996358823532f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Basket_CCK, true, STPu(0.2059723774509804f, 0.0f),
                         STPtauU(21.669270553921578f, 0.0f),
                         STPtauX(438.2824899999997f, 0.0f),
                         STPtdAMPA(4.326690337254902f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Basket_CCK, true, STPu(0.239853484117647f, 0.0f),
                         STPtauU(29.58076837254901f, 0.0f),
                         STPtauX(227.0433407450981f, 0.0f),
                         STPtdAMPA(2.1840891088235295f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Basket_CCK, true, STPu(0.232364162745098f, 0.0f),
                         STPtauU(28.28180456862745f, 0.0f),
                         STPtauX(368.1616300980392f, 0.0f),
                         STPtdAMPA(3.303953559803921f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Basket_CCK, true, STPu(0.23058903637254904f, 0.0f),
                         STPtauU(21.86243591666667f, 0.0f),
                         STPtauX(343.66243843137266f, 0.0f),
                         STPtdAMPA(3.397939666666666f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Basket_CCK, true, STPu(0.23085571656862755f, 0.0f),
                         STPtauU(16.086702696078437f, 0.0f),
                         STPtauX(623.7190157843139f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.741937622549018f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Basket_CCK, true, STPu(0.1502526783921568f, 0.0f),
                         STPtauU(19.054596431372545f, 0.0f),
                         STPtauX(425.21724490196095f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.926899388235294f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Basket_CCK, true, STPu(0.2026198946078432f, 0.0f),
                         STPtauU(19.29822367156863f, 0.0f),
                         STPtauX(604.8667802941175f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.21318175784314f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_Basket_CCK, true, STPu(0.22230528460784313f, 0.0f),
                         STPtauU(15.946503700980385f, 0.0f),
                         STPtauX(622.4199657843138f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.913731329411765f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Basket_CCK, true, STPu(0.22869406117647056f, 0.0f),
                         STPtauU(15.942862024509806f, 0.0f),
                         STPtauX(621.5424093137256f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.083297610784317f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Basket_CCK, true, STPu(0.2246863617647059f, 0.0f),
                         STPtauU(15.703238303921564f, 0.0f),
                         STPtauX(636.0058278431371f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.9719975774509795f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Basket_CCK, true, STPu(0.22609105107843147f, 0.0f),
                         STPtauU(16.021680019607842f, 0.0f),
                         STPtauX(635.6432544117648f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.099674662745096f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Basket_CCK, true, STPu(0.22532693480392166f, 0.0f),
                         STPtauU(15.514118222549016f, 0.0f),
                         STPtauX(628.8468607843137f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.8412035803921585f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Basket_CCK, true, STPu(0.2226549659803921f, 0.0f),
                         STPtauU(15.379245887254909f, 0.0f),
                         STPtauX(628.032939607843f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.233406954901962f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Basket_CCK, true, STPu(0.21204807500000006f, 0.0f),
                         STPtauU(16.538708191176465f, 0.0f),
                         STPtauX(585.6371482352941f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.00546297745098f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Basket_CCK, true, STPu(0.22784844009803926f, 0.0f),
                         STPtauU(15.958250700980399f, 0.0f),
                         STPtauX(624.7250575490195f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.042580877450981f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Basket_CCK, true, STPu(0.21680505f, 0.0f),
                         STPtauU(17.14891751960784f, 0.0f),
                         STPtauX(616.33100627451f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.0446846578431375f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Basket_CCK, true, STPu(0.23059752676470593f, 0.0f),
                         STPtauU(16.4060188627451f, 0.0f),
                         STPtauX(657.9806947058825f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.519654865686274f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Basket_CCK, true, STPu(0.23407637578431362f, 0.0f),
                         STPtauU(32.277080931372545f, 0.0f),
                         STPtauX(621.6545322549018f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.347190601960784f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Basket_CCK, true, STPu(0.22700750745098028f, 0.0f),
                         STPtauU(16.971205882352944f, 0.0f),
                         STPtauX(608.144875490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.984946456862745f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Basket_CCK, true, STPu(0.23510772872549018f, 0.0f),
                         STPtauU(24.78781155882353f, 0.0f),
                         STPtauX(625.113333921569f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.986999900980393f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_Basket_CCK, true, STPu(0.22035690509803926f, 0.0f),
                         STPtauU(16.397289990196086f, 0.0f),
                         STPtauX(607.8524279411765f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.0223508294117645f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Basket_CCK, true, STPu(0.22473101117647049f, 0.0f),
                         STPtauU(15.522915906862742f, 0.0f),
                         STPtauX(628.4547353921567f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.868371193137256f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Basket_CCK, true, STPu(0.22563834735294108f, 0.0f),
                         STPtauU(15.96935498529412f, 0.0f),
                         STPtauX(620.871051372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.8491820921568625f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_LMR_Targeting, true, STPu(0.18124864023529408f, 0.0f),
                         STPtauU(59.204611970588246f, 0.0f),
                         STPtauX(262.88446441176455f, 0.0f),
                         STPtdAMPA(3.901879987254902f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_LMR_Targeting, true, STPu(0.17404733707843129f, 0.0f),
                         STPtauU(34.77693510784313f, 0.0f),
                         STPtauX(426.28784813725497f, 0.0f),
                         STPtdAMPA(5.952979056862746f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_LMR_Targeting, true, STPu(0.19788821088235295f, 0.0f),
                         STPtauU(38.12627430392157f, 0.0f),
                         STPtauX(366.37217049019614f, 0.0f),
                         STPtdAMPA(4.876179400980393f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_LMR_Targeting, true, STPu(0.17481264460784324f, 0.0f),
                         STPtauU(36.37808430392156f, 0.0f),
                         STPtauX(566.9986000980393f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.913563981372548f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_R_LM, CA3_LMR_Targeting, true, STPu(0.19983546245098038f, 0.0f),
                         STPtauU(27.33876916666666f, 0.0f),
                         STPtauX(579.5815100980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.4152349019607895f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_LMR_Targeting, true, STPu(0.20905252039215683f, 0.0f),
                         STPtauU(25.6215271372549f, 0.0f),
                         STPtauX(583.0325741176471f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.591216234313728f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_LMR_Targeting, true, STPu(0.2057184537254901f, 0.0f),
                         STPtauU(25.467443980392154f, 0.0f),
                         STPtauX(596.2834044117646f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.4910312019607845f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_LMR_Targeting, true, STPu(0.20720283539215684f, 0.0f),
                         STPtauU(26.179142745098034f, 0.0f),
                         STPtauX(595.5259823529414f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.661366090196079f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_LMR_Targeting, true, STPu(0.20161659872549023f, 0.0f),
                         STPtauU(27.741998088235277f, 0.0f),
                         STPtauX(578.1531432352944f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.366755131372548f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_LMR_Targeting, true, STPu(0.20249569872549017f, 0.0f),
                         STPtauU(24.752071754901966f, 0.0f),
                         STPtauX(588.3794336274509f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.747133349019605f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_LMR_Targeting, true, STPu(0.19261999612745098f, 0.0f),
                         STPtauU(25.941286166666664f, 0.0f),
                         STPtauX(568.6092628431372f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.514730055882356f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_LMR_Targeting, true, STPu(0.19194740333333343f, 0.0f),
                         STPtauU(29.913974823529426f, 0.0f),
                         STPtauX(576.6722575490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.628357154901963f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_LMR_Targeting, true, STPu(0.211750729117647f, 0.0f),
                         STPtauU(30.097285460784313f, 0.0f),
                         STPtauX(604.7473832352939f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.80498519117647f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_LMR_Targeting, true, STPu(0.2167750720588235f, 0.0f),
                         STPtauU(70.00781573529412f, 0.0f),
                         STPtauX(575.2034218627451f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.340083053921571f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_LMR_Targeting, true, STPu(0.2132059955882353f, 0.0f),
                         STPtauU(23.441523563725486f, 0.0f),
                         STPtauX(601.3257464705881f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.069800180392152f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_LMR_Targeting, true, STPu(0.21885225392156862f, 0.0f),
                         STPtauU(46.43191885294115f, 0.0f),
                         STPtauX(582.5179725490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.514879221568629f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_QuadD_LM, CA3_LMR_Targeting, true, STPu(0.19831203921568627f, 0.0f),
                         STPtauU(30.089749377450985f, 0.0f),
                         STPtauX(562.3349061764704f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.56373921372549f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_LMR_Targeting, true, STPu(0.2043149717647059f, 0.0f),
                         STPtauU(25.697955475490204f, 0.0f),
                         STPtauX(586.1831605882353f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.2967967803921585f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_LMR_Targeting, true, STPu(0.2043277923529412f, 0.0f),
                         STPtauU(26.71671599019607f, 0.0f),
                         STPtauX(581.9210894117647f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.250535538235296f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_R_LM, true, STPu(0.17592238823529407f, 0.0f),
                         STPtauU(34.65054978431372f, 0.0f),
                         STPtauX(379.6496077450982f, 0.0f),
                         STPtdAMPA(5.964775903921569f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_R_LM, true, STPu(0.20217416254901965f, 0.0f),
                         STPtauU(38.65430731372549f, 0.0f),
                         STPtauX(321.42212490196073f, 0.0f),
                         STPtdAMPA(4.821707699999998f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_R_LM, true, STPu(0.18124611211764707f, 0.0f),
                         STPtauU(32.974227088235295f, 0.0f),
                         STPtauX(559.2425285294119f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.940966548039218f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_R_LM, true, STPu(0.21432195313725494f, 0.0f),
                         STPtauU(23.982208470588223f, 0.0f),
                         STPtauX(572.186306372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.652782865686272f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_R_LM, true, STPu(0.21131891941176476f, 0.0f),
                         STPtauU(23.734805514705887f, 0.0f),
                         STPtauX(585.3236870588235f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.5423381960784335f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_R_LM, true, STPu(0.2128518877450981f, 0.0f),
                         STPtauU(24.334268671568626f, 0.0f),
                         STPtauX(585.1827594117649f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.7124779137254915f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_R_LM, true, STPu(0.20815566058823526f, 0.0f),
                         STPtauU(22.964403455882348f, 0.0f),
                         STPtauX(579.7369113725491f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.810407361764707f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_R_LM, true, STPu(0.19775487769607836f, 0.0f),
                         STPtauU(24.575475720588237f, 0.0f),
                         STPtauX(556.6662833333331f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.585956955882352f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_R_LM, true, STPu(0.19806919794117647f, 0.0f),
                         STPtauU(27.42427259313725f, 0.0f),
                         STPtauX(568.3455391176471f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.675295351960783f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_R_LM, true, STPu(0.221712879607843f, 0.0f),
                         STPtauU(62.9476745980392f, 0.0f),
                         STPtauX(572.586025f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.3613149539215685f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_R_LM, true, STPu(0.21842569431372552f, 0.0f),
                         STPtauU(21.977476779411774f, 0.0f),
                         STPtauX(591.4978704901963f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.1316376274509805f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_R_LM, true, STPu(0.22476989196078428f, 0.0f),
                         STPtauU(44.010700372549f, 0.0f),
                         STPtauX(576.7551316666664f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.643450300980392f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_R_LM, true, STPu(0.20996131950980393f, 0.0f),
                         STPtauU(24.19042726470588f, 0.0f),
                         STPtauX(574.3402639215686f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.355793698039217f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_R_LM, true, STPu(0.21050316088235296f, 0.0f),
                         STPtauU(25.348307612745085f, 0.0f),
                         STPtauX(566.5085879411766f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.294795275490195f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_O_LM, true, STPu(0.18112204461764705f, 0.0f),
                         STPtauU(31.575014823529408f, 0.0f),
                         STPtauX(415.2956625490196f, 0.0f),
                         STPtdAMPA(5.591393915686274f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_O_LM, true, STPu(0.20711470980392147f, 0.0f),
                         STPtauU(34.551021264705895f, 0.0f),
                         STPtauX(344.1862638235294f, 0.0f),
                         STPtdAMPA(4.501677591176469f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_O_LM, true, STPu(0.2186778881372549f, 0.0f),
                         STPtauU(23.146187862745098f, 0.0f),
                         STPtauX(584.5909438235291f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.52357762254902f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_O_LM, true, STPu(0.21542246882352942f, 0.0f),
                         STPtauU(22.799574318627442f, 0.0f),
                         STPtauX(599.5047047058824f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.394045000000002f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_O_LM, true, STPu(0.20210163156862745f, 0.0f),
                         STPtauU(23.55115075490196f, 0.0f),
                         STPtauX(571.5073098039217f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.4276679549019615f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_O_LM, true, STPu(0.21780028784313724f, 0.0f),
                         STPtauU(23.52415901960784f, 0.0f),
                         STPtauX(586.6778873529411f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.445081880392159f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_O_LM, true, STPu(0.22276268009803915f, 0.0f),
                         STPtauU(21.2318481372549f, 0.0f),
                         STPtauX(604.8782567647061f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.006280932352941f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_O_LM, true, STPu(0.2278143466666667f, 0.0f),
                         STPtauU(42.98193117647059f, 0.0f),
                         STPtauX(586.079962745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.571116378431372f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_O_LM, true, STPu(0.2140664079411764f, 0.0f),
                         STPtauU(23.332795039215696f, 0.0f),
                         STPtauX(588.1647037254905f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.21027187843137f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_O_LM, true, STPu(0.21442579499999995f, 0.0f),
                         STPtauU(24.345693441176472f, 0.0f),
                         STPtauX(581.3388738235294f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.160194246078431f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Lucidum_ORAX, true, STPu(0.19046650103921564f, 0.0f),
                         STPtauU(55.60553950000001f, 0.0f),
                         STPtauX(223.12268603921564f, 0.0f),
                         STPtdAMPA(3.8166111637254887f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Lucidum_ORAX, true, STPu(0.17577478187254897f, 0.0f),
                         STPtauU(31.452302931372554f, 0.0f),
                         STPtauX(396.65612656862766f, 0.0f),
                         STPtdAMPA(6.256296823529413f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Lucidum_ORAX, true, STPu(0.20304625519607847f, 0.0f),
                         STPtauU(34.166144568627445f, 0.0f),
                         STPtauX(330.11731892156877f, 0.0f),
                         STPtdAMPA(4.981926797058826f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Lucidum_ORAX, true, STPu(0.18065136721568628f, 0.0f),
                         STPtauU(31.26715610294119f, 0.0f),
                         STPtauX(564.4609552941176f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.147653407843136f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Lucidum_ORAX, true, STPu(0.2145498909803922f, 0.0f),
                         STPtauU(22.78310989705883f, 0.0f),
                         STPtauX(578.6778470588234f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.842499499019609f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Lucidum_ORAX, true, STPu(0.211531982745098f, 0.0f),
                         STPtauU(22.46357177450981f, 0.0f),
                         STPtauX(594.0136348039216f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.734084137254898f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Lucidum_ORAX, true, STPu(0.2129172725490195f, 0.0f),
                         STPtauU(23.1735146862745f, 0.0f),
                         STPtauX(592.6862337254901f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.904302380392157f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Lucidum_ORAX, true, STPu(0.20762238372549016f, 0.0f),
                         STPtauU(25.102108308823517f, 0.0f),
                         STPtauX(567.5050764705879f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.559401910784318f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Lucidum_ORAX, true, STPu(0.20864926441176476f, 0.0f),
                         STPtauU(21.90943961764706f, 0.0f),
                         STPtauX(585.9406746078431f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.004789439215685f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Lucidum_ORAX, true, STPu(0.19827950666666666f, 0.0f),
                         STPtauU(23.076442416666662f, 0.0f),
                         STPtauX(564.9114550000003f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.775559961764706f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Lucidum_ORAX, true, STPu(0.19780816392156853f, 0.0f),
                         STPtauU(26.077678289215683f, 0.0f),
                         STPtauX(574.3097398039216f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.8783627274509795f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Lucidum_ORAX, true, STPu(0.2179983511764706f, 0.0f),
                         STPtauU(27.129259862745098f, 0.0f),
                         STPtauX(595.8167424509804f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.957178049019608f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Lucidum_ORAX, true, STPu(0.22281904598039215f, 0.0f),
                         STPtauU(60.35283829411764f, 0.0f),
                         STPtauX(578.405949019608f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.496802865686276f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Lucidum_ORAX, true, STPu(0.2183619369607843f, 0.0f),
                         STPtauU(20.80642117647059f, 0.0f),
                         STPtauX(599.14154372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.314845797058824f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Lucidum_ORAX, true, STPu(0.22510411509803915f, 0.0f),
                         STPtauU(42.74445351960786f, 0.0f),
                         STPtauX(581.7169243137255f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.886224818627447f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Lucidum_ORAX, true, STPu(0.21028425049019608f, 0.0f),
                         STPtauU(22.941739205882357f, 0.0f),
                         STPtauX(581.9443696078431f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.543130762745096f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Lucidum_ORAX, true, STPu(0.2112914242156863f, 0.0f),
                         STPtauU(24.034044426470583f, 0.0f),
                         STPtauX(575.4302457843137f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.467991650980388f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Lucidum_Radiatum, true, STPu(0.19093371544117638f, 0.0f),
                         STPtauU(55.617351715686276f, 0.0f),
                         STPtauX(226.68238818627455f, 0.0f),
                         STPtdAMPA(3.8205280225490195f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Lucidum_Radiatum, true, STPu(0.1762462021960785f, 0.0f),
                         STPtauU(31.557745823529412f, 0.0f),
                         STPtauX(399.1601334313725f, 0.0f),
                         STPtdAMPA(6.25839614019608f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Lucidum_Radiatum, true, STPu(0.2031272552941176f, 0.0f),
                         STPtauU(34.39322075490195f, 0.0f),
                         STPtauX(332.8731537254901f, 0.0f),
                         STPtdAMPA(4.994393724509805f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Lucidum_Radiatum, true, STPu(0.1808884661764706f, 0.0f),
                         STPtauU(31.284710098039206f, 0.0f),
                         STPtauX(567.1695901960787f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.147573494117646f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Lucidum_Radiatum, true, STPu(0.21446502627450972f, 0.0f),
                         STPtauU(22.99121757843136f, 0.0f),
                         STPtauX(581.7342010784313f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.847533955882357f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Lucidum_Radiatum, true, STPu(0.2115243097058824f, 0.0f),
                         STPtauU(22.544327838235297f, 0.0f),
                         STPtauX(596.3875093137258f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.734116706862742f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Lucidum_Radiatum, true, STPu(0.21305021892156858f, 0.0f),
                         STPtauU(23.304700019607836f, 0.0f),
                         STPtauX(595.5348037254902f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.908145576470588f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Lucidum_Radiatum, true, STPu(0.2077408615686274f, 0.0f),
                         STPtauU(25.23637864705881f, 0.0f),
                         STPtauX(570.1780364705886f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.563483789215686f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Lucidum_Radiatum, true, STPu(0.2087300475490196f, 0.0f),
                         STPtauU(22.047948117647056f, 0.0f),
                         STPtauX(588.7234451960784f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.005351179411763f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Lucidum_Radiatum, true, STPu(0.19833819519607837f, 0.0f),
                         STPtauU(23.255933990196077f, 0.0f),
                         STPtauX(567.5084053921569f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.777170601960788f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Lucidum_Radiatum, true, STPu(0.19804520166666673f, 0.0f),
                         STPtauU(26.21931399019608f, 0.0f),
                         STPtauX(576.9956653921569f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.874079688235293f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Lucidum_Radiatum, true, STPu(0.2180930514705883f, 0.0f),
                         STPtauU(26.909869397058827f, 0.0f),
                         STPtauX(598.5193097058823f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.966749994117649f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Lucidum_Radiatum, true, STPu(0.2229043114705882f, 0.0f),
                         STPtauU(60.38846603921569f, 0.0f),
                         STPtauX(580.0735612745096f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.49897473627451f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Lucidum_Radiatum, true, STPu(0.21811710000000004f, 0.0f),
                         STPtauU(21.036023019607846f, 0.0f),
                         STPtauX(601.6792911764708f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.316671859803923f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Lucidum_Radiatum, true, STPu(0.2250356300980392f, 0.0f),
                         STPtauU(42.89978814705885f, 0.0f),
                         STPtauX(583.7920784313726f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.8865801205882375f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Lucidum_Radiatum, true, STPu(0.21031754725490195f, 0.0f),
                         STPtauU(23.012952392156873f, 0.0f),
                         STPtauX(584.6125396078431f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.546549852941177f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Lucidum_Radiatum, true, STPu(0.21124157392156873f, 0.0f),
                         STPtauU(24.14653178921568f, 0.0f),
                         STPtauX(578.292446372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.4767526813725524f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Lucidum_LAX, true, STPu(0.176434381235294f, 0.0f),
                         STPtauU(62.30390693137252f, 0.0f),
                         STPtauX(235.18706709803914f, 0.0f),
                         STPtdAMPA(3.549188421568628f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Lucidum_LAX, true, STPu(0.15106941739215685f, 0.0f),
                         STPtauU(38.02947963725487f, 0.0f),
                         STPtauX(416.8667107843136f, 0.0f),
                         STPtdAMPA(5.862648932352942f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Lucidum_LAX, true, STPu(0.184262713872549f, 0.0f),
                         STPtauU(41.15391756862744f, 0.0f),
                         STPtauX(336.40662568627465f, 0.0f),
                         STPtdAMPA(4.675223272549021f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Lucidum_LAX, true, STPu(0.16140487181372548f, 0.0f),
                         STPtauU(38.670700764705884f, 0.0f),
                         STPtauX(571.5037438235294f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.803236050980395f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Lucidum_LAX, true, STPu(0.19534442588235293f, 0.0f),
                         STPtauU(27.254167308823526f, 0.0f),
                         STPtauX(589.1857535294118f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.50757235098039f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Lucidum_LAX, true, STPu(0.19218272764705888f, 0.0f),
                         STPtauU(27.27576226470588f, 0.0f),
                         STPtauX(606.1037934313725f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.413185722549017f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Lucidum_LAX, true, STPu(0.19340068672549024f, 0.0f),
                         STPtauU(27.979819676470573f, 0.0f),
                         STPtauX(605.2853379411763f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.57268456862745f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Lucidum_LAX, true, STPu(0.18774251990196075f, 0.0f),
                         STPtauU(30.645421004901973f, 0.0f),
                         STPtauX(578.4845150980395f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.243831548039212f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Lucidum_LAX, true, STPu(0.18917385882352944f, 0.0f),
                         STPtauU(26.371208166666662f, 0.0f),
                         STPtauX(597.5303883333336f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.667363265686272f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Lucidum_LAX, true, STPu(0.177291515245098f, 0.0f),
                         STPtauU(27.880577651960774f, 0.0f),
                         STPtauX(578.3164333333333f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.452332419607842f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Lucidum_LAX, true, STPu(0.17880844084313724f, 0.0f),
                         STPtauU(31.824959063725473f, 0.0f),
                         STPtauX(582.1387337254904f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.543304614705883f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Lucidum_LAX, true, STPu(0.19992553401960786f, 0.0f),
                         STPtauU(34.0958922352941f, 0.0f),
                         STPtauX(605.0201322549023f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.705405261764707f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Lucidum_LAX, true, STPu(0.21032277588235293f, 0.0f),
                         STPtauU(73.06395181372547f, 0.0f),
                         STPtauX(585.4864457843137f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.239826948039216f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Lucidum_LAX, true, STPu(0.19988597107843126f, 0.0f),
                         STPtauU(25.19721329411765f, 0.0f),
                         STPtauX(606.3178324509803f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0274000999999995f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Lucidum_LAX, true, STPu(0.21110276950980394f, 0.0f),
                         STPtauU(51.48337031372548f, 0.0f),
                         STPtauX(588.0908256862748f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.557183886274508f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Lucidum_LAX, true, STPu(0.1911602734803921f, 0.0f),
                         STPtauU(27.850213568627442f, 0.0f),
                         STPtauX(591.2605283333338f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.220763355882349f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Lucidum_LAX, true, STPu(0.19193432190196077f, 0.0f),
                         STPtauU(29.583937166666654f, 0.0f),
                         STPtauX(586.7634026470591f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.16020180392157f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Spiny_Lucidum, true, STPu(0.1073351861372549f, 0.0f),
                         STPtauU(156.0887918137255f, 0.0f),
                         STPtauX(91.2811569215686f, 0.0f),
                         STPtdAMPA(3.8967092029411763f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Spiny_Lucidum, true, STPu(0.13159761935294118f, 0.0f),
                         STPtauU(124.92084484313736f, 0.0f),
                         STPtauX(140.65003373529413f, 0.0f),
                         STPtdAMPA(4.591797486274509f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Spiny_Lucidum, true, STPu(0.14342568998039212f, 0.0f),
                         STPtauU(55.0067875882353f, 0.0f),
                         STPtauX(376.6630794117647f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.361910414705881f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Spiny_Lucidum, true, STPu(0.14466497582352933f, 0.0f),
                         STPtauU(56.67274046078432f, 0.0f),
                         STPtauX(380.0788589215687f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.498603239215689f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Spiny_Lucidum, true, STPu(0.13787890714705883f, 0.0f),
                         STPtauU(70.09421041176469f, 0.0f),
                         STPtauX(328.15075818627446f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.1978719774509825f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Spiny_Lucidum, true, STPu(0.14326045611764704f, 0.0f),
                         STPtauU(52.37302352941178f, 0.0f),
                         STPtauX(389.5686025490193f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.584593956862747f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Spiny_Lucidum, true, STPu(0.13238781085294116f, 0.0f),
                         STPtauU(54.141375147058824f, 0.0f),
                         STPtauX(356.60969205882355f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.41398108333333f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Spiny_Lucidum, true, STPu(0.14880276608823528f, 0.0f),
                         STPtauU(76.96576916666668f, 0.0f),
                         STPtauX(337.4711069607843f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.665254844117649f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Spiny_Lucidum, true, STPu(0.16769751274509795f, 0.0f),
                         STPtauU(120.97744691176473f, 0.0f),
                         STPtauX(426.9937152941177f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.256113288235295f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Spiny_Lucidum, true, STPu(0.15474540150980387f, 0.0f),
                         STPtauU(47.45752419607843f, 0.0f),
                         STPtauX(399.2390576470591f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.984808630392158f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Spiny_Lucidum, true, STPu(0.16789600725490195f, 0.0f),
                         STPtauU(88.10880305882355f, 0.0f),
                         STPtauX(424.44400274509803f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.284000746078431f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Spiny_Lucidum, true, STPu(0.14265773807843138f, 0.0f),
                         STPtauU(56.11230184313723f, 0.0f),
                         STPtauX(370.41902509803907f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.203070748039216f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Spiny_Lucidum, true, STPu(0.1436052676960784f, 0.0f),
                         STPtauU(60.18875574509804f, 0.0f),
                         STPtauX(353.7114415686275f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.123932147058824f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Trilaminar, true, STPu(0.16627424049019612f, 0.0f),
                         STPtauU(30.268115990196076f, 0.0f),
                         STPtauX(401.4957326470589f, 0.0f),
                         STPtdAMPA(5.940110517647058f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Trilaminar, true, STPu(0.19344069627450977f, 0.0f),
                         STPtauU(31.56040266666666f, 0.0f),
                         STPtauX(333.198917745098f, 0.0f),
                         STPtdAMPA(4.742739896078432f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Trilaminar, true, STPu(0.20499949568627454f, 0.0f),
                         STPtauU(22.41399495588236f, 0.0f),
                         STPtauX(577.3012605882353f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.879360938235291f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Trilaminar, true, STPu(0.20108079686274508f, 0.0f),
                         STPtauU(22.14614101470589f, 0.0f),
                         STPtauX(591.8225637254901f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.7660439676470565f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Trilaminar, true, STPu(0.17567079696078422f, 0.0f),
                         STPtauU(22.02987249509803f, 0.0f),
                         STPtauX(534.1130815686278f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.743462001960783f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Trilaminar, true, STPu(0.20380734441176473f, 0.0f),
                         STPtauU(22.72126089215686f, 0.0f),
                         STPtauX(579.2436928431371f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.780448233333336f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Trilaminar, true, STPu(0.20696631490196074f, 0.0f),
                         STPtauU(20.718111642156856f, 0.0f),
                         STPtauX(596.8540598039215f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.398006195098037f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Trilaminar, true, STPu(0.2176847723529412f, 0.0f),
                         STPtauU(40.03374200000001f, 0.0f),
                         STPtauX(582.4884640196077f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.899950474509805f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Trilaminar, true, STPu(0.1998009423137254f, 0.0f),
                         STPtauU(22.365278504901955f, 0.0f),
                         STPtauX(579.185662745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.571911940196078f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Trilaminar, true, STPu(0.19989357882352937f, 0.0f),
                         STPtauU(23.32105531862745f, 0.0f),
                         STPtauX(572.4213062745094f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.520199759803923f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_SO_SO, true, STPu(0.18568917674509816f, 0.0f),
                         STPtauU(31.305136186274513f, 0.0f),
                         STPtauX(391.6413764705881f, 0.0f),
                         STPtdAMPA(6.022595600980392f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_SO_SO, true, STPu(0.21377281215686275f, 0.0f),
                         STPtauU(35.313094647058826f, 0.0f),
                         STPtauX(326.56318529411755f, 0.0f),
                         STPtdAMPA(4.819076589215685f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_SO_SO, true, STPu(0.23072818098039224f, 0.0f),
                         STPtauU(23.422050852941176f, 0.0f),
                         STPtauX(561.1700626470588f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.561572866666665f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_SO_SO, true, STPu(0.2275485332352941f, 0.0f),
                         STPtauU(22.93158487745098f, 0.0f),
                         STPtauX(573.5983521568626f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.440756892156864f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_SO_SO, true, STPu(0.2166000266666666f, 0.0f),
                         STPtauU(23.69418956372549f, 0.0f),
                         STPtauX(546.0305469607844f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.462829416666663f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_SO_SO, true, STPu(0.22964812490196074f, 0.0f),
                         STPtauU(23.861655171568614f, 0.0f),
                         STPtauX(563.7909511764706f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.481369935294118f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_SO_SO, true, STPu(0.23460222068627445f, 0.0f),
                         STPtauU(21.29077177450981f, 0.0f),
                         STPtauX(579.8858326470588f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0356274235294105f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_SO_SO, true, STPu(0.2365553152941177f, 0.0f),
                         STPtauU(45.012442098039195f, 0.0f),
                         STPtauX(567.8158735294118f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.608558025490193f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_SO_SO, true, STPu(0.22661742490196074f, 0.0f),
                         STPtauU(23.62574532352941f, 0.0f),
                         STPtauX(563.3543134313722f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.266658473529412f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_SO_SO, true, STPu(0.22758405058823528f, 0.0f),
                         STPtauU(24.91273825490196f, 0.0f),
                         STPtauX(555.0285597058825f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.208016977450979f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Radiatum, true, STPu(0.1817970757745098f, 0.0f),
                         STPtauU(31.461957980392153f, 0.0f),
                         STPtauX(391.5013450980393f, 0.0f),
                         STPtdAMPA(6.112938034313727f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Radiatum, true, STPu(0.20703067392156851f, 0.0f),
                         STPtauU(34.87908706862746f, 0.0f),
                         STPtauX(331.4926593137256f, 0.0f),
                         STPtdAMPA(4.889465574509804f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Radiatum, true, STPu(0.18690551274509792f, 0.0f),
                         STPtauU(28.953534196078447f, 0.0f),
                         STPtauX(568.988667843137f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.99072219803922f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Radiatum, true, STPu(0.21924543578431374f, 0.0f),
                         STPtauU(21.722082235294117f, 0.0f),
                         STPtauX(582.5921870588234f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.704951823529415f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Radiatum, true, STPu(0.21624726196078448f, 0.0f),
                         STPtauU(21.30231308823529f, 0.0f),
                         STPtauX(596.1054943137254f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.586596316666667f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Radiatum, true, STPu(0.21783618637254895f, 0.0f),
                         STPtauU(21.989374387254905f, 0.0f),
                         STPtauX(595.9187959803921f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.761340771568624f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Radiatum, true, STPu(0.21300764372549028f, 0.0f),
                         STPtauU(20.64815966666666f, 0.0f),
                         STPtauX(589.1400608823532f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.861401523529412f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Radiatum, true, STPu(0.20298689450980384f, 0.0f),
                         STPtauU(22.01904539705882f, 0.0f),
                         STPtauX(566.4335140196081f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.635779868627451f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Radiatum, true, STPu(0.20363344686274507f, 0.0f),
                         STPtauU(24.477339318627454f, 0.0f),
                         STPtauX(578.4356478431373f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.718612012745099f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Radiatum, true, STPu(0.22644480813725493f, 0.0f),
                         STPtauU(55.02608049019605f, 0.0f),
                         STPtauX(580.5719625490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.4158353725490205f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Radiatum, true, STPu(0.2234226787254902f, 0.0f),
                         STPtauU(19.89551801960784f, 0.0f),
                         STPtauX(602.4496134313722f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.163580260784316f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Radiatum, true, STPu(0.22911147166666654f, 0.0f),
                         STPtauU(39.12703555882353f, 0.0f),
                         STPtauX(585.4874664705884f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.672001414705883f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Radiatum, true, STPu(0.21509853901960793f, 0.0f),
                         STPtauU(21.64043146568628f, 0.0f),
                         STPtauX(584.9085103921569f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.410892589215685f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Radiatum, true, STPu(0.21549927215686276f, 0.0f),
                         STPtauU(22.645037078431358f, 0.0f),
                         STPtauX(577.9647350980395f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.353512059803925f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.20396241225490205f, 0.0f),
                         STPtauU(74.93013034313726f, 0.0f),
                         STPtauX(186.75416650980392f, 0.0f),
                         STPtdAMPA(3.6940014274509814f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.17994568161764704f, 0.0f),
                         STPtauU(37.837860137254886f, 0.0f),
                         STPtauX(355.54031343137245f, 0.0f),
                         STPtdAMPA(6.116389732352941f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.20842872401960783f, 0.0f),
                         STPtauU(42.50517031372549f, 0.0f),
                         STPtauX(297.62429784313724f, 0.0f),
                         STPtdAMPA(4.8923600401960785f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.21635934676470592f, 0.0f),
                         STPtauU(60.39814437254903f, 0.0f),
                         STPtauX(294.05425705882357f, 0.0f),
                         STPtdAMPA(4.683522933333335f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.18616927741176476f, 0.0f),
                         STPtauU(19.60551243627452f, 0.0f),
                         STPtauX(510.8574242156862f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.799514798039217f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.21680040460784317f, 0.0f),
                         STPtauU(25.88240364215688f, 0.0f),
                         STPtauX(552.4890068627452f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.062565199019607f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.17936689999999988f, 0.0f),
                         STPtauU(36.5630123137255f, 0.0f),
                         STPtauX(546.5141838235293f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.039681773529411f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.21491095431372542f, 0.0f),
                         STPtauU(25.516117019607847f, 0.0f),
                         STPtauX(561.3177240196078f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.7274834029411785f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.2120756470588235f, 0.0f),
                         STPtauU(25.32044813725489f, 0.0f),
                         STPtauX(576.4402982352942f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.625082748039221f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.21343058715686278f, 0.0f),
                         STPtauU(26.035211901960796f, 0.0f),
                         STPtauX(575.2877980392158f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.78521014509804f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.20830602245098045f, 0.0f),
                         STPtauU(29.119918774509806f, 0.0f),
                         STPtauX(541.8014401960785f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.44997555392157f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.2080866873529411f, 0.0f),
                         STPtauU(24.493398215686295f, 0.0f),
                         STPtauX(571.2154223529415f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.879133742156866f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.19801555117647074f, 0.0f),
                         STPtauU(26.072474392156874f, 0.0f),
                         STPtauX(546.5144566666667f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.660536451960786f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.2141481262745097f, 0.0f),
                         STPtauU(26.176860504901956f, 0.0f),
                         STPtauX(562.3739540196082f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.642075209803925f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.19759801127450988f, 0.0f),
                         STPtauU(29.819766151960785f, 0.0f),
                         STPtauX(556.3578052941175f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.767196492156863f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.21880075147058825f, 0.0f),
                         STPtauU(31.86415603921569f, 0.0f),
                         STPtauX(567.283391764706f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.872501319607842f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.22267639872549025f, 0.0f),
                         STPtauU(68.6978619901961f, 0.0f),
                         STPtauX(568.9631150980393f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.407847904901963f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.2193696450980392f, 0.0f),
                         STPtauU(23.418131299019603f, 0.0f),
                         STPtauX(581.0487408823528f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.217012170588235f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.22554012558823533f, 0.0f),
                         STPtauU(48.88724983333336f, 0.0f),
                         STPtauX(568.5942533333332f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.78832623529412f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.2110004011764705f, 0.0f),
                         STPtauU(25.958439960784307f, 0.0f),
                         STPtauX(562.761875882353f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.440124394117648f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Mossy_Fiber_Associated_ORDEN, true, STPu(0.21239062362745106f, 0.0f),
                         STPtauU(27.557633941176462f, 0.0f),
                         STPtauX(554.9681443137254f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.373384111764707f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Mossy_Fiber_Associated, true, STPu(0.19412244681372542f, 0.0f),
                         STPtauU(56.4032914509804f, 0.0f),
                         STPtauX(222.53147352941173f, 0.0f),
                         STPtdAMPA(3.732361810784314f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Mossy_Fiber_Associated, true, STPu(0.21559772039215677f, 0.0f),
                         STPtauU(46.09155520588235f, 0.0f),
                         STPtauX(322.4597479411765f, 0.0f),
                         STPtdAMPA(4.621651992156863f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Mossy_Fiber_Associated, true, STPu(0.18365277259803928f, 0.0f),
                         STPtauU(31.450690647058828f, 0.0f),
                         STPtauX(372.4943751960784f, 0.0f),
                         STPtdAMPA(6.044588747058822f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Mossy_Fiber_Associated, true, STPu(0.2085811564705883f, 0.0f),
                         STPtauU(34.19739764705882f, 0.0f),
                         STPtauX(318.4402307843137f, 0.0f),
                         STPtdAMPA(4.820853794117646f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Mossy_Fiber_Associated, true, STPu(0.18554666627450978f, 0.0f),
                         STPtauU(30.069954499999998f, 0.0f),
                         STPtauX(552.0283266666667f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.995522623529413f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Mossy_Fiber_Associated, true, STPu(0.21989604882352948f, 0.0f),
                         STPtauU(21.761685000000007f, 0.0f),
                         STPtauX(564.974664901961f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.693465718627451f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Mossy_Fiber_Associated, true, STPu(0.2166636347058823f, 0.0f),
                         STPtauU(21.448010500000006f, 0.0f),
                         STPtauX(579.7949238235293f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.583050318627451f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Mossy_Fiber_Associated, true, STPu(0.21821884529411759f, 0.0f),
                         STPtauU(22.037359720588228f, 0.0f),
                         STPtauX(579.3303181372548f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.7528250627450985f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Mossy_Fiber_Associated, true, STPu(0.21263361107843132f, 0.0f),
                         STPtauU(23.980063225490202f, 0.0f),
                         STPtauX(551.1671871568627f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.420720215686275f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Mossy_Fiber_Associated, true, STPu(0.21364633225490187f, 0.0f),
                         STPtauU(20.73379715686274f, 0.0f),
                         STPtauX(574.2655368627454f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.848902216666666f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Mossy_Fiber_Associated, true, STPu(0.20370276377450983f, 0.0f),
                         STPtauU(22.117706343137243f, 0.0f),
                         STPtauX(547.9430115686274f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.634836494117649f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Mossy_Fiber_Associated, true, STPu(0.20313511941176474f, 0.0f),
                         STPtauU(24.942448931372542f, 0.0f),
                         STPtauX(561.0096979411766f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.722559404901958f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Mossy_Fiber_Associated, true, STPu(0.22210515284313728f, 0.0f),
                         STPtauU(25.435546161764705f, 0.0f),
                         STPtauX(579.9396481372548f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.831711695098038f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Mossy_Fiber_Associated, true, STPu(0.22846066999999995f, 0.0f),
                         STPtauU(54.06928579411765f, 0.0f),
                         STPtauX(529.5842770588238f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.573058123529413f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Mossy_Fiber_Associated, true, STPu(0.22383493264705878f, 0.0f),
                         STPtauU(19.911049205882357f, 0.0f),
                         STPtauX(587.2643381372551f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.162997534313727f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Mossy_Fiber_Associated, true, STPu(0.22904789676470586f, 0.0f),
                         STPtauU(38.31586865686273f, 0.0f),
                         STPtauX(571.8111447058825f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.677326963725491f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Mossy_Fiber_Associated, true, STPu(0.21559467882352942f, 0.0f),
                         STPtauU(21.785245436274508f, 0.0f),
                         STPtauX(567.5428170588234f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.394647954901961f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Mossy_Fiber_Associated, true, STPu(0.21614377598039214f, 0.0f),
                         STPtauU(22.839235142156863f, 0.0f),
                         STPtauX(559.8506285294119f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.327654560784314f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Bistratified, true, STPu(0.17854952946078426f, 0.0f),
                         STPtauU(29.923042127450977f, 0.0f),
                         STPtauX(423.9038637254902f, 0.0f),
                         STPtdAMPA(5.799432106862745f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Bistratified, true, STPu(0.19217680294117642f, 0.0f),
                         STPtauU(54.108971754901944f, 0.0f),
                         STPtauX(239.040464862745f, 0.0f),
                         STPtdAMPA(3.571934351960784f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Bistratified, true, STPu(0.21340002901960786f, 0.0f),
                         STPtauU(43.66304634313727f, 0.0f),
                         STPtauX(365.48732901960796f, 0.0f),
                         STPtdAMPA(4.350248208823531f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Bistratified, true, STPu(0.20486156049019605f, 0.0f),
                         STPtauU(32.592423411764706f, 0.0f),
                         STPtauX(349.7215568627452f, 0.0f),
                         STPtdAMPA(4.649703534313728f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Bistratified, true, STPu(0.21843610499999996f, 0.0f),
                         STPtauU(21.107802083333326f, 0.0f),
                         STPtauX(603.3796084313725f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.739934050980392f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Bistratified, true, STPu(0.1911611833333333f, 0.0f),
                         STPtauU(16.334732143137252f, 0.0f),
                         STPtauX(547.029021666667f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.476678993137253f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Bistratified, true, STPu(0.18512779715686276f, 0.0f),
                         STPtauU(28.124899058823527f, 0.0f),
                         STPtauX(590.572548137255f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.616027699019607f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Bistratified, true, STPu(0.2188599733333334f, 0.0f),
                         STPtauU(20.532606852941182f, 0.0f),
                         STPtauX(609.0826352941176f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.342562917647057f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Bistratified, true, STPu(0.2161127561764706f, 0.0f),
                         STPtauU(20.16600098529412f, 0.0f),
                         STPtauX(625.6986336274509f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.230002701960787f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Bistratified, true, STPu(0.21733711892156865f, 0.0f),
                         STPtauU(20.825693955882343f, 0.0f),
                         STPtauX(623.3129856862745f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.407062983333333f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Bistratified, true, STPu(0.21239686078431375f, 0.0f),
                         STPtauU(22.38180046078432f, 0.0f),
                         STPtauX(600.6459256862746f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.080227664705882f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Bistratified, true, STPu(0.21256609009803923f, 0.0f),
                         STPtauU(19.862163436274514f, 0.0f),
                         STPtauX(615.352010490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.49590116764706f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Bistratified, true, STPu(0.20184049078431382f, 0.0f),
                         STPtauU(21.177829524509796f, 0.0f),
                         STPtauX(589.2904294117646f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.321931358823531f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Bistratified, true, STPu(0.21790006578431373f, 0.0f),
                         STPtauU(20.713439495098033f, 0.0f),
                         STPtauX(611.7669596078429f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.251856067647059f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Bistratified, true, STPu(0.20242429499999998f, 0.0f),
                         STPtauU(23.451378122549023f, 0.0f),
                         STPtauX(602.4725940196078f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.363114537254903f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Bistratified, true, STPu(0.22290992362745085f, 0.0f),
                         STPtauU(23.455981431372546f, 0.0f),
                         STPtauX(635.4992212745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.534566514705881f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Bistratified, true, STPu(0.22593696078431375f, 0.0f),
                         STPtauU(55.00763586274508f, 0.0f),
                         STPtauX(597.7327402941175f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.177843099019608f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Bistratified, true, STPu(0.22512274039215682f, 0.0f),
                         STPtauU(16.54101087745098f, 0.0f),
                         STPtauX(670.4292149999998f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.4446851372549f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Bistratified, true, STPu(0.22860098411764695f, 0.0f),
                         STPtauU(38.37946714705881f, 0.0f),
                         STPtauX(604.393761764706f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.3516516980392135f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Bistratified, true, STPu(0.21456409372549023f, 0.0f),
                         STPtauU(20.496187906862744f, 0.0f),
                         STPtauX(614.7554404901961f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.029864055882352f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Bistratified, true, STPu(0.21509107549019604f, 0.0f),
                         STPtauU(21.520126936274504f, 0.0f),
                         STPtauX(608.7709157843136f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.994141120588233f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Ivy, true, STPu(0.20441947794117654f, 0.0f),
                         STPtauU(22.359142411764704f, 0.0f),
                         STPtauX(274.7053410784314f, 0.0f),
                         STPtdAMPA(2.324345776470589f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Ivy, true, STPu(0.17657627808823526f, 0.0f),
                         STPtauU(18.34150050490197f, 0.0f),
                         STPtauX(503.1578949019609f, 0.0f),
                         STPtdAMPA(4.5657860509803925f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Ivy, true, STPu(0.20862678558823522f, 0.0f),
                         STPtauU(21.472413122549025f, 0.0f),
                         STPtauX(435.44480852941166f, 0.0f),
                         STPtdAMPA(3.40439306764706f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Ivy, true, STPu(0.21099543578431376f, 0.0f),
                         STPtauU(18.31772363235294f, 0.0f),
                         STPtauX(380.4835074509803f, 0.0f),
                         STPtdAMPA(3.426296881372551f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Ivy, true, STPu(0.1798815450980392f, 0.0f),
                         STPtauU(15.467363406862754f, 0.0f),
                         STPtauX(644.4598289215685f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.425482653921566f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Ivy, true, STPu(0.21072435980392157f, 0.0f),
                         STPtauU(13.363034549019607f, 0.0f),
                         STPtauX(658.2534309803921f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.292942923529412f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Ivy, true, STPu(0.20614297068627455f, 0.0f),
                         STPtauU(13.001852324509809f, 0.0f),
                         STPtauX(679.7140483333333f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.20065725882353f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Ivy, true, STPu(0.20831132401960795f, 0.0f),
                         STPtauU(13.294274999999999f, 0.0f),
                         STPtauX(676.9547500980392f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.336443121568627f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Ivy, true, STPu(0.203344864117647f, 0.0f),
                         STPtauU(12.985733588235295f, 0.0f),
                         STPtauX(675.8917560784315f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.037898156862744f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Ivy, true, STPu(0.20364464137254898f, 0.0f),
                         STPtauU(12.726388102941177f, 0.0f),
                         STPtauX(666.4966675490197f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.431757762745099f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Ivy, true, STPu(0.19433214892156866f, 0.0f),
                         STPtauU(13.777715647058827f, 0.0f),
                         STPtauX(629.3645639215688f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.183438089215687f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Ivy, true, STPu(0.20936329892156857f, 0.0f),
                         STPtauU(13.37524270098039f, 0.0f),
                         STPtauX(662.4716808823532f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.249268956862746f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Ivy, true, STPu(0.19572932941176463f, 0.0f),
                         STPtauU(14.149344441176474f, 0.0f),
                         STPtauX(652.5337052941178f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.269742474509804f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Ivy, true, STPu(0.2126437673529412f, 0.0f),
                         STPtauU(13.30926939215686f, 0.0f),
                         STPtauX(715.3414562745099f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.618857052941178f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Ivy, true, STPu(0.2246745409803922f, 0.0f),
                         STPtauU(26.83913148529412f, 0.0f),
                         STPtauX(640.4179601960782f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.4449625882352946f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Ivy, true, STPu(0.21342954882352944f, 0.0f),
                         STPtauU(12.851062475490199f, 0.0f),
                         STPtauX(674.32348627451f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(4.915790043137254f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Ivy, true, STPu(0.22396200147058823f, 0.0f),
                         STPtauU(20.593546225490186f, 0.0f),
                         STPtauX(648.9949575490195f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.2514474500000015f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Ivy, true, STPu(0.20545442215686285f, 0.0f),
                         STPtauU(13.044885328431373f, 0.0f),
                         STPtauX(666.0431563725491f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.063053232352942f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Ivy, true, STPu(0.20719715166666658f, 0.0f),
                         STPtauU(13.368072950980393f, 0.0f),
                         STPtauX(662.8734048039216f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.0374690774509805f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_QuadD_LM, true, STPu(0.1905800183333333f, 0.0f),
                         STPtauU(60.184448598039225f, 0.0f),
                         STPtauX(220.74902975490198f, 0.0f),
                         STPtdAMPA(3.739016708823529f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_QuadD_LM, true, STPu(0.20929911107843144f, 0.0f),
                         STPtauU(51.58788865686274f, 0.0f),
                         STPtauX(314.0033376470589f, 0.0f),
                         STPtdAMPA(4.588253057843137f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_QuadD_LM, true, STPu(0.17886966523529418f, 0.0f),
                         STPtauU(33.85744141176472f, 0.0f),
                         STPtauX(368.6254721568627f, 0.0f),
                         STPtdAMPA(5.948481927450976f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_QuadD_LM, true, STPu(0.20445980068627445f, 0.0f),
                         STPtauU(37.04094712745098f, 0.0f),
                         STPtauX(315.0322874509803f, 0.0f),
                         STPtdAMPA(4.801551461764705f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_QuadD_LM, true, STPu(0.21628843431372552f, 0.0f),
                         STPtauU(23.900384740196067f, 0.0f),
                         STPtauX(559.4216172549018f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.987387379411766f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_QuadD_LM, true, STPu(0.1885816876470588f, 0.0f),
                         STPtauU(18.027694715686273f, 0.0f),
                         STPtauX(499.7257014705882f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.730440661764706f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_QuadD_LM, true, STPu(0.1813612157254901f, 0.0f),
                         STPtauU(33.517114284313735f, 0.0f),
                         STPtauX(546.3188898039215f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.996022238235294f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_QuadD_LM, true, STPu(0.21575008823529393f, 0.0f),
                         STPtauU(23.713138122549026f, 0.0f),
                         STPtauX(558.9068566666667f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.693326588235293f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_QuadD_LM, true, STPu(0.21254383264705873f, 0.0f),
                         STPtauU(23.391331588235307f, 0.0f),
                         STPtauX(572.7888260784313f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.584585795098039f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_QuadD_LM, true, STPu(0.21407561813725492f, 0.0f),
                         STPtauU(24.066365745098047f, 0.0f),
                         STPtauX(572.5827691176471f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.75685214901961f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_QuadD_LM, true, STPu(0.20844739921568625f, 0.0f),
                         STPtauU(26.210060725490198f, 0.0f),
                         STPtauX(545.1447605882354f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.425040460784311f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_QuadD_LM, true, STPu(0.20965824352941184f, 0.0f),
                         STPtauU(22.708980617647043f, 0.0f),
                         STPtauX(568.1989715686276f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.852899832352944f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_QuadD_LM, true, STPu(0.19949226300000003f, 0.0f),
                         STPtauU(24.173632205882353f, 0.0f),
                         STPtauX(542.5047181372549f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.624363446078435f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_QuadD_LM, true, STPu(0.21467351215686273f, 0.0f),
                         STPtauU(24.162388509803943f, 0.0f),
                         STPtauX(559.7011169607846f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.6070467196078395f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_QuadD_LM, true, STPu(0.1987648251960784f, 0.0f),
                         STPtauU(27.62083583823529f, 0.0f),
                         STPtauX(554.7235876470587f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.727726467647058f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_QuadD_LM, true, STPu(0.21823408803921573f, 0.0f),
                         STPtauU(28.01795574019609f, 0.0f),
                         STPtauX(572.3326770588236f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.836746430392158f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_QuadD_LM, true, STPu(0.22459266892156857f, 0.0f),
                         STPtauU(61.0359342745098f, 0.0f),
                         STPtauX(525.4675815686275f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.542893338235295f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_QuadD_LM, true, STPu(0.21936118656862746f, 0.0f),
                         STPtauU(21.736162460784318f, 0.0f),
                         STPtauX(580.0437383333333f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.178140149999999f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_QuadD_LM, true, STPu(0.22538179176470596f, 0.0f),
                         STPtauU(42.734460480392144f, 0.0f),
                         STPtauX(565.8631752941177f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.694542496078436f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_QuadD_LM, true, STPu(0.21129561803921568f, 0.0f),
                         STPtauU(23.90760700490196f, 0.0f),
                         STPtauX(560.8885916666665f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.388852689215686f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_QuadD_LM, true, STPu(0.2118681639215686f, 0.0f),
                         STPtauU(25.039692367647056f, 0.0f),
                         STPtauX(553.5061861764706f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.315190828431373f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Interneuron_Specific_Oriens, true, STPu(0.18054297263725494f, 0.0f),
                         STPtauU(29.600653637254897f, 0.0f),
                         STPtauX(430.87045813725496f, 0.0f),
                         STPtdAMPA(5.944675792156863f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Interneuron_Specific_Oriens, true, STPu(0.20817075245098032f, 0.0f),
                         STPtauU(31.443048852941192f, 0.0f),
                         STPtauX(360.02622343137244f, 0.0f),
                         STPtdAMPA(4.808513667647057f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Interneuron_Specific_Oriens, true, STPu(0.2218370780392157f, 0.0f),
                         STPtauU(21.472734612745104f, 0.0f),
                         STPtauX(597.9528514705884f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.762434384313724f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Interneuron_Specific_Oriens, true, STPu(0.2184283186274508f, 0.0f),
                         STPtauU(21.13410366666666f, 0.0f),
                         STPtauX(614.0314265686275f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.6467496333333305f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Interneuron_Specific_Oriens, true, STPu(0.2050673251372549f, 0.0f),
                         STPtauU(21.798453926470586f, 0.0f),
                         STPtauX(585.4295415686274f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.696865464705882f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Interneuron_Specific_Oriens, true, STPu(0.22086019147058833f, 0.0f),
                         STPtauU(21.78799457843137f, 0.0f),
                         STPtauX(600.181402745098f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.670322596078435f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Interneuron_Specific_Oriens, true, STPu(0.22568509931372543f, 0.0f),
                         STPtauU(19.710140303921566f, 0.0f),
                         STPtauX(618.4379341176469f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.242146487254903f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Interneuron_Specific_Oriens, true, STPu(0.23111841254901977f, 0.0f),
                         STPtauU(38.83706353921569f, 0.0f),
                         STPtauX(596.6112574509801f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.789446969607844f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Interneuron_Specific_Oriens, true, STPu(0.21748378098039217f, 0.0f),
                         STPtauU(21.378696063725492f, 0.0f),
                         STPtauX(601.7257234313726f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.459949180392157f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Interneuron_Specific_Oriens, true, STPu(0.2181693664705882f, 0.0f),
                         STPtauU(22.276971215686267f, 0.0f),
                         STPtauX(599.0135672549019f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.420132617647059f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Granule, CA3_Interneuron_Specific_Quad, true, STPu(0.19327254964705876f, 0.0f),
                         STPtauU(58.179905941176486f, 0.0f),
                         STPtauX(228.25080937254907f, 0.0f),
                         STPtdAMPA(3.734539894117646f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Giant, CA3_Interneuron_Specific_Quad, true, STPu(0.2135542849019607f, 0.0f),
                         STPtauU(48.00054676470589f, 0.0f),
                         STPtauX(337.89352166666674f, 0.0f),
                         STPtdAMPA(4.6189733980392145f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Pyramidal, CA3_Interneuron_Specific_Quad, true, STPu(0.182549096372549f, 0.0f),
                         STPtauU(32.105379740196085f, 0.0f),
                         STPtauX(389.4512507843137f, 0.0f),
                         STPtdAMPA(6.07619435490196f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3c_Pyramidal, CA3_Interneuron_Specific_Quad, true, STPu(0.20698400715686277f, 0.0f),
                         STPtauU(35.35211646078431f, 0.0f),
                         STPtauX(331.76850356862735f, 0.0f),
                         STPtdAMPA(4.842140247058824f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.0f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket, CA3_Interneuron_Specific_Quad, true, STPu(0.22127099931372538f, 0.0f),
                         STPtauU(22.682712980392147f, 0.0f),
                         STPtauX(577.1282760784313f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.992881397058821f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Basket_CCK, CA3_Interneuron_Specific_Quad, true, STPu(0.1885964567647059f, 0.0f),
                         STPtauU(17.986618465686274f, 0.0f),
                         STPtauX(519.7242174509804f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.812789354901962f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_LMR_Targeting, CA3_Interneuron_Specific_Quad, true, STPu(0.1849710985294118f, 0.0f),
                         STPtauU(31.098317725490205f, 0.0f),
                         STPtauX(565.979890490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.048277152941178f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_O_LM, CA3_Interneuron_Specific_Quad, true, STPu(0.21878908235294098f, 0.0f),
                         STPtauU(22.599963205882347f, 0.0f),
                         STPtauX(580.5452551960784f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.745075319607845f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_ORAX, CA3_Interneuron_Specific_Quad, true, STPu(0.2155946267647059f, 0.0f),
                         STPtauU(22.257149367647052f, 0.0f),
                         STPtauX(595.2604586274512f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.626340521568628f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_Radiatum, CA3_Interneuron_Specific_Quad, true, STPu(0.21709291656862753f, 0.0f),
                         STPtauU(22.941448455882345f, 0.0f),
                         STPtauX(594.1162161764706f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.806115003921568f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Lucidum_LAX, CA3_Interneuron_Specific_Quad, true, STPu(0.21211011372549016f, 0.0f),
                         STPtauU(24.82832226470588f, 0.0f),
                         STPtauX(568.6722363725492f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.465545658823534f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Spiny_Lucidum, CA3_Interneuron_Specific_Quad, true, STPu(0.21215529578431375f, 0.0f),
                         STPtauU(21.53718038235295f, 0.0f),
                         STPtauX(587.3328547058824f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.889394270588237f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Trilaminar, CA3_Interneuron_Specific_Quad, true, STPu(0.2022287354411765f, 0.0f),
                         STPtauU(22.963537941176465f, 0.0f),
                         STPtauX(564.8962029411763f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.679147177450979f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_SO_SO, CA3_Interneuron_Specific_Quad, true, STPu(0.21764046450980387f, 0.0f),
                         STPtauU(22.934884583333332f, 0.0f),
                         STPtauX(582.0815225490196f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.661272521568628f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Radiatum, CA3_Interneuron_Specific_Quad, true, STPu(0.20220349068627455f, 0.0f),
                         STPtauU(25.86656775980392f, 0.0f),
                         STPtauX(575.9305502941174f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.768171790196075f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated_ORDEN, CA3_Interneuron_Specific_Quad, true, STPu(0.22165152137254898f, 0.0f),
                         STPtauU(26.499112029411762f, 0.0f),
                         STPtauX(597.4387600980393f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.874665505882355f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Mossy_Fiber_Associated, CA3_Interneuron_Specific_Quad, true, STPu(0.2251398084313726f, 0.0f),
                         STPtauU(56.960286627451005f, 0.0f),
                         STPtauX(579.2269678431371f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(5.468253589215685f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Bistratified, CA3_Interneuron_Specific_Quad, true, STPu(0.22302713754901962f, 0.0f),
                         STPtauU(20.556442897058826f, 0.0f),
                         STPtauX(601.7001785294116f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.179563004901958f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Ivy, CA3_Interneuron_Specific_Quad, true, STPu(0.2279221761764705f, 0.0f),
                         STPtauU(41.83335719607843f, 0.0f),
                         STPtauX(583.3237446078432f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(7.741707461764705f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Oriens, CA3_Interneuron_Specific_Quad, true, STPu(0.21430338803921564f, 0.0f),
                         STPtauU(22.614626598039212f, 0.0f),
                         STPtauX(583.1023834313723f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.434289144117647f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setSTP(CA3_Interneuron_Specific_Quad, CA3_Interneuron_Specific_Quad, true, STPu(0.21486748490196084f, 0.0f),
                         STPtauU(23.758535308823532f, 0.0f),
                         STPtauX(575.7562378431375f, 0.0f),
                         STPtdAMPA(5.0f, 0.0f),
                         STPtdNMDA(150.0f, 0.0f),
                         STPtdGABAa(6.37696369705882f, 0.0f),
                         STPtdGABAb(150.0f, 0.0f),
                         STPtrNMDA(0.0f, 0.0f),
                         STPtrGABAb(0.0f, 0.0f));
                     
sim.setNeuronMonitor(CA3_Pyramidal, "DEFAULT");
                             
sim.setNeuronMonitor(CA3c_Pyramidal, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Giant, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Granule, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Axo_Axonic, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Horizontal_Axo_Axonic, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Basket, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Basket_CCK, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Bistratified, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Interneuron_Specific_Oriens, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Interneuron_Specific_Quad, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Ivy, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_LMR_Targeting, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Lucidum_LAX, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Lucidum_ORAX, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Lucidum_Radiatum, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Spiny_Lucidum, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Mossy_Fiber_Associated, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Mossy_Fiber_Associated_ORDEN, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_O_LM, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_QuadD_LM, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Radiatum, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_R_LM, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_SO_SO, "DEFAULT");
                             
sim.setNeuronMonitor(CA3_Trilaminar, "DEFAULT");
                             
