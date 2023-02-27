project(ca3_snn_GPU_02_26_23_async_archetype)

# Targets  
add_executable(ca3_snn_GPU_02_26_23_async_archetype
    src/main_ca3_snn_GPU_02_26_23_async_archetype.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(ca3_snn_GPU_02_26_23_async_archetype PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(ca3_snn_GPU_02_26_23_async_archetype PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(ca3_snn_GPU_02_26_23_async_archetype PRIVATE
    ../../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS ca3_snn_GPU_02_26_23_async_archetype
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT ca3_snn_GPU_02_26_23_async_archetype
        )

#install(FILES ca3_snn_GPU_02_26_23_async_archetype DESTINATION $<$<CONFIG:Debug>:debug/>samples)