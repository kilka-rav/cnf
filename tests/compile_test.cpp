import SATCompile;

#include <iostream>
#include <array>
#include <gtest/gtest.h>
#include "testData.h"

TEST(TEST1, Compile) {
    constexpr auto numberVars = getMaximumVariable<size1>(input1);
    constexpr auto sol = getCompileSolution<size1, numberVars>(input1);
    EXPECT_TRUE(sol.first);
}
