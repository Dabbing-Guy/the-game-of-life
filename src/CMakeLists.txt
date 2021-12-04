cmake_minimum_required(VERSION 3.0)

# Set project name
project("the-game-of-life")

# Specify the exicutable and corresponding source file
add_executable(main "main.c")

# Set some compiler flags
if(CMAKE_C_COMPILER_ID STREQUAL "MSVC")                                                                             
    target_compile_options(main PRIVATE "/O2 /Wall favor:blend")                               
elseif(CMAKE_C_COMPILER_ID STREQUAL "GNU")                                                                                                                                        
    target_compile_options(main PRIVATE "-pedantic" "-O3" "-mtune=native") 
endif() 
