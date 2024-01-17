enable_testing()

add_executable(
  runtime_test
  runtime_test.cpp
)

add_executable(
  compile_test
  compile_test.cpp
)

add_executable(
  hybrid_test
  hybrid_test.cpp
)

target_link_libraries(runtime_test
    SAT
    GTest::gtest_main
)

target_link_libraries(compile_test
    SATCompile
    GTest::gtest_main
)

target_link_libraries(hybrid_test
    SATHybrid
    GTest::gtest_main
)

include(GoogleTest)