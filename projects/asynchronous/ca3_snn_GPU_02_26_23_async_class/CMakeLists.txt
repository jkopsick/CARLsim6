project(ca3_snn_GPU_02_26_23_async_class)

# Targets  
add_executable(ca3_snn_GPU_02_26_23_async_class
    src/main_ca3_snn_GPU_02_26_23_async_class.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(ca3_snn_GPU_02_26_23_async_class PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(ca3_snn_GPU_02_26_23_async_class PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(ca3_snn_GPU_02_26_23_async_class PRIVATE
    ../../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS ca3_snn_GPU_02_26_23_async_class
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT ca3_snn_GPU_02_26_23_async_class
        )

#install(FILES ca3_snn_GPU_02_26_23_async_class DESTINATION $<$<CONFIG:Debug>:debug/>samples)          