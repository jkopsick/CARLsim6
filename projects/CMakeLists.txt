
# Subdirectories

if(CARLSIM_SAMPLES)
    add_subdirectory(hello_world)
    if(CARLSIM_JK_CA3_SNN)
      add_subdirectory(ca3_example_net_02_26_21)
      add_subdirectory(synchronous/ca3_snn_GPU_02_26_23_archetype)      
      add_subdirectory(synchronous/ca3_snn_GPU_02_26_23_baseline)
      add_subdirectory(synchronous/ca3_snn_GPU_02_26_23_class)    
      add_subdirectory(asynchronous/ca3_snn_GPU_02_26_23_async_archetype)      
      add_subdirectory(asynchronous/ca3_snn_GPU_02_26_23_async_baseline)
      add_subdirectory(asynchronous/ca3_snn_GPU_02_26_23_async_class)      
      add_subdirectory(ca3_snn_GPU_02_26_23_pattern_completion)
    endif()
#    add_subdirectory(test_kernel)
#    add_subdirectory(test_kernel2)
#    add_subdirectory(test_kernel3)
#    add_subdirectory(lif_izhi_random_spnet)
endif()

 
#if(CARLSIM_BENCHMARKS)    
#    add_subdirectory(benchmark1)
#    add_subdirectory(benchmark2)
#    add_subdirectory(benchmark3)
#    add_subdirectory(benchmark4)
#    add_subdirectory(benchmark5)
#    add_subdirectory(benchmark6)
#    add_subdirectory(benchmarkA)
#    add_subdirectory(benchmarkB)
#endif()
 
