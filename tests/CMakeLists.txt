enable_testing()

add_executable(
  dummy_test
  dummy_test.cpp
)

target_link_libraries(dummy_test
    SAT
    GTest::gtest_main
)

include(GoogleTest)