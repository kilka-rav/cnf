import SAT;

#include <iostream>
#include <array>
#include <gtest/gtest.h>
#include "testData.h"

TEST(TEST1, SATSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size1>(input1);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size1, maximumVariable>(input1, sol2);
    EXPECT_TRUE(runtimeSol);
}

TEST(TEST2, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size2>(input2);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size2, maximumVariable>(input2, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST3, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size3>(input3);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size3, maximumVariable>(input3, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST4, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size4>(input4);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size4, maximumVariable>(input4, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST5, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size5>(input5);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size5, maximumVariable>(input5, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST6, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size6>(input6);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size6, maximumVariable>(input6, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST7, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size7>(input7);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size7, maximumVariable>(input7, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST8, SatSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size8>(input8);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size8, maximumVariable>(input8, sol2);
    EXPECT_TRUE(runtimeSol);
}
TEST(TEST9, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size9>(input9);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size9, maximumVariable>(input9, sol2);
    EXPECT_FALSE(runtimeSol);
}TEST(TEST10, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size10>(input10);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size10, maximumVariable>(input10, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST11, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size11>(input11);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size11, maximumVariable>(input11, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST12, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size12>(input12);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size12, maximumVariable>(input12, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST13, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size13>(input13);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size13, maximumVariable>(input13, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST14, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size14>(input14);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size14, maximumVariable>(input14, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST15, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size15>(input15);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size15, maximumVariable>(input15, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST16, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size16>(input16);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size16, maximumVariable>(input16, sol2);
    EXPECT_TRUE(runtimeSol);
}
TEST(TEST17, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size17>(input17);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size17, maximumVariable>(input17, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST18, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size18>(input18);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size18, maximumVariable>(input18, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST19, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size19>(input19);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size19, maximumVariable>(input19, sol2);
    EXPECT_TRUE(runtimeSol);
}
TEST(TEST20, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size20>(input20);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size20, maximumVariable>(input20, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST21, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size21>(input21);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size21, maximumVariable>(input21, sol2);
    EXPECT_TRUE(runtimeSol);
}
TEST(TEST22, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size22>(input22);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size22, maximumVariable>(input22, sol2);
    EXPECT_TRUE(runtimeSol);
}
TEST(TEST23, SmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size23>(input23);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size23, maximumVariable>(input23, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST24, UNSATSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size24>(input24);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size24, maximumVariable>(input24, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST25, SATSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size25>(input25);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size25, maximumVariable>(input25, sol2);
    EXPECT_TRUE(runtimeSol);
}

TEST(TEST26, UnsatSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size26>(input26);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size26, maximumVariable>(input26, sol2);
    EXPECT_FALSE(runtimeSol);
}
TEST(TEST27, UnsatSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size27>(input27);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size27, maximumVariable>(input27, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST28, UnSatSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size28>(input28);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size28, maximumVariable>(input28, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST29, UnSatSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size29>(input29);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size29, maximumVariable>(input29, sol2);
    EXPECT_FALSE(runtimeSol);
}

TEST(TEST30, SatSmokeRuntime) {
    constexpr int maximumVariable = getMaximumVariable<size30>(input30);
    std::array<int, maximumVariable> sol2 = {{0}};
    bool runtimeSol = getRuntimeSolution<size30, maximumVariable>(input30, sol2);
    EXPECT_TRUE(runtimeSol);
}
