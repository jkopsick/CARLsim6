project(ca3_snn_GPU_02_26_23_afferent)

# Targets  
add_executable(ca3_snn_GPU_02_26_23_afferent
    src/main_ca3_snn_GPU_02_26_23_afferent.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(ca3_snn_GPU_02_26_23_afferent PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(ca3_snn_GPU_02_26_23_afferent PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(ca3_snn_GPU_02_26_23_afferent PRIVATE
    ../../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS ca3_snn_GPU_02_26_23_afferent
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT ca3_snn_GPU_02_26_23_afferent
        )

#install(FILES ca3_snn_GPU_02_26_23_afferent DESTINATION $<$<CONFIG:Debug>:debug/>samples)                 
