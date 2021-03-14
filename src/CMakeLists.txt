set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(l01 CXX)

##-----------------------------------------------------
# set include and lib directories for current project
include_directories(
  /usr/local/include
)

add_executable(
    l01
    main.cpp
)

# set the output directory and output file name
set_target_properties(l01 
    PROPERTIES 
    OUTPUT_NAME               "l01"
    RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/")

