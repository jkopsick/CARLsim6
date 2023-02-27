project(ca3_snn_GPU_02_26_23_baseline)

# Targets  
add_executable(ca3_snn_GPU_02_26_23_baseline
    src/main_ca3_snn_GPU_02_26_23_baseline.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(ca3_snn_GPU_02_26_23_baseline PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(ca3_snn_GPU_02_26_23_baseline PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(ca3_snn_GPU_02_26_23_baseline PRIVATE
    ../../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS ca3_snn_GPU_02_26_23_baseline
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT ca3_snn_GPU_02_26_23_baseline
        )

#install(FILES ca3_snn_GPU_02_26_23_baseline DESTINATION $<$<CONFIG:Debug>:debug/>samples)          