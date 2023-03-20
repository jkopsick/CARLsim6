project(full_scale_CA3_snn)

# Targets  
add_executable(full_scale_CA3_snn
    src/main_full_scale_CA3_snn.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(full_scale_CA3_snn PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(full_scale_CA3_snn PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(full_scale_CA3_snn PRIVATE
    ../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS full_scale_CA3_snn
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT full_scale_CA3_snn
        )

#install(FILES full_scale_CA3_snn DESTINATION $<$<CONFIG:Debug>:debug/>samples)          