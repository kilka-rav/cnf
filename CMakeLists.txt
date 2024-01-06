cmake_minimum_required(VERSION 3.28)
project(CNF)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_C_COMPILER "clang-17")
set(CMAKE_CXX_COMPILER "clang++-17")
add_library(SAT)
add_executable(runtime_solution runtime_solution.cxx)
target_sources(SAT 
    PUBLIC
        FILE_SET CXX_MODULES FILES SAT.cpp)

set_property(TARGET SAT PROPERTY CXX_STANDARD 20)
set_property(TARGET SAT PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET SAT PROPERTY CXX_EXTENSIONS OFF)

target_link_libraries(runtime_solution SAT)