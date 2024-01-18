import SAT;

#include <iostream>
#include <array>
#include <gtest/gtest.h>
#include "testData.h"

TEST(TEST1, runtime) {
    constexpr int maximumVariable = getMaximumVariable<size1>(input1);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size1, maximumVariable>(input1, sol2);
    EXPECT_TRUE(runtimeSol);
}