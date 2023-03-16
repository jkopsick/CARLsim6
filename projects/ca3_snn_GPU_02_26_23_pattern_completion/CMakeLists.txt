project(ca3_snn_GPU_02_26_23_pattern_completion)

# Targets  
add_executable(ca3_snn_GPU_02_26_23_pattern_completion
    src/main_ca3_snn_GPU_02_26_23_pattern_completion.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(ca3_snn_GPU_02_26_23_pattern_completion PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(ca3_snn_GPU_02_26_23_pattern_completion PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(ca3_snn_GPU_02_26_23_pattern_completion PRIVATE
    ../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS ca3_snn_GPU_02_26_23_pattern_completion
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT ca3_snn_GPU_02_26_23_pattern_completion
        )

#install(FILES ca3_snn_GPU_02_26_23_pattern_completion DESTINATION $<$<CONFIG:Debug>:debug/>samples)          