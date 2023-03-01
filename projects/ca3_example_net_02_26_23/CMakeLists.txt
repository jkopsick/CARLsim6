project(ca3_example_net_02_26_23)

# Targets  
add_executable(ca3_example_net_02_26_23
    src/main_ca3_example_net_02_26_23.cpp
)

# definitions     
if(CARLSIM_NO_CUDA)
    target_compile_definitions(ca3_example_net_02_26_23 PUBLIC
        -D__NO_CUDA__ )
endif()

# Linking    
target_link_libraries(ca3_example_net_02_26_23 PRIVATE
    carlsim
    carlsim-stopwatch
)
target_include_directories(ca3_example_net_02_26_23 PRIVATE
    ../../tools/stopwatch
)
   
        
# Installation   
install(TARGETS ca3_example_net_02_26_23
    EXPORT carlsim
    RUNTIME 
        DESTINATION $<$<CONFIG:Debug>:debug/>samples 
        COMPONENT ca3_example_net_02_26_23
        )

#install(FILES ca3_example_net_02_26_23 DESTINATION $<$<CONFIG:Debug>:debug/>samples)          