cmake_minimum_required(VERSION 3.28)
project(CNF)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_DEBUG "-fconstexpr-backtrace-limit=1000000 -fconstexpr-steps=4294967295 -fconstexpr-depth=4294967295")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -fconstexpr-backtrace-limit=100000 -fconstexpr-steps=4294967295 -fconstexpr-depth=4294967295")


add_library(SAT)
add_library(SATCompile)
add_library(SATHybrid)

add_executable(runtime_solution runtime_solution.cpp)
add_executable(compile_solution compile_solution.cpp)
add_executable(hybrid_solution hybrid_solution.cpp)
target_sources(SAT 
    PUBLIC
        FILE_SET CXX_MODULES FILES SAT.cpp)
target_sources(SATCompile 
        PUBLIC
            FILE_SET CXX_MODULES FILES SATCompile.cpp)
target_sources(SATHybrid 
            PUBLIC
                FILE_SET CXX_MODULES FILES SATHybrid.cpp)
  
set_property(TARGET SAT PROPERTY CXX_STANDARD 20)
set_property(TARGET SAT PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET SAT PROPERTY CXX_EXTENSIONS OFF)

set_property(TARGET SATCompile PROPERTY CXX_STANDARD 20)
set_property(TARGET SATCompile PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET SATCompile PROPERTY CXX_EXTENSIONS OFF)

set_property(TARGET SATHybrid PROPERTY CXX_STANDARD 20)
set_property(TARGET SATHybrid PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET SATHybrid PROPERTY CXX_EXTENSIONS OFF)

target_link_libraries(runtime_solution SAT)
target_link_libraries(compile_solution SATCompile)
target_link_libraries(hybrid_solution SATHybrid)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)