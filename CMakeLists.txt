cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

set(ENV{MENDEL_ROOT_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
set(ENV{MENDEL_BUILD_DIR} ${CMAKE_CURRENT_BINARY_DIR})

#message($ENV{MENDEL_ROOT_DIR})
#message($ENV{MENDEL_BUILD_DIR})

# open the the below comment out if test performance
#add_definitions(-D_MENDEL_PERF_TUNE)
add_definitions(-D_DUMP_TOPIC_HEAD_FOR_MEASURE)

link_directories(
  /usr/local/lib
  ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/
)


option(SIMULATION "compile for simulation" OFF)

##-----------------------------------------------------
add_subdirectory(src/L01)
##-----------------------------------------------------

