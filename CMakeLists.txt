cmake_minimum_required(VERSION 3.28)
project(CNF)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(SAT)
add_executable(runtime_solution runtime_solution.cxx)
target_sources(SAT 
    PUBLIC
        FILE_SET CXX_MODULES FILES SAT.cpp)

set_property(TARGET SAT PROPERTY CXX_STANDARD 20)
set_property(TARGET SAT PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET SAT PROPERTY CXX_EXTENSIONS OFF)

target_link_libraries(runtime_solution SAT)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)