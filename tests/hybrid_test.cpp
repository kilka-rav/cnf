import SATHybrid;

#include <iostream>
#include <array>
#include <gtest/gtest.h>
#include "testData.h"

TEST(TEST1, SmokeHybrid) {
    constexpr auto maximumVariable = getMaximumVariable<size1>(input1);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size1>(input1, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size1>(input1, preComputedSolution, states);

}
TEST(TEST2, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size2>(input2);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size2>(input2, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size2>(input2, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST3, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size3>(input3);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size3>(input3, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size3>(input3, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST4, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size4>(input4);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size4>(input4, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size4>(input4, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST5, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size5>(input5);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size5>(input5, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size5>(input5, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST6, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size6>(input6);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size6>(input6, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size6>(input6, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST7, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size7>(input7);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size7>(input7, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size7>(input7, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST8, SatSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size8>(input8);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size8>(input8, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size8>(input8, preComputedSolution, states);
    EXPECT_TRUE(sol);
}
TEST(TEST9, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size9>(input9);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size9>(input9, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size9>(input9, preComputedSolution, states);
    EXPECT_FALSE(sol);
}TEST(TEST10, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size10>(input10);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size10>(input10, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size10>(input10, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST11, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size11>(input11);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size11>(input11, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size11>(input11, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST12, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size12>(input12);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size12>(input12, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size12>(input12, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST13, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size13>(input13);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size13>(input13, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size13>(input13, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST14, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size14>(input14);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size14>(input14, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size14>(input14, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST15, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size15>(input15);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size15>(input15, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size15>(input15, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST16, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size16>(input16);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size16>(input16, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size16>(input16, preComputedSolution, states);
    EXPECT_TRUE(sol);
}
TEST(TEST17, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size17>(input17);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size17>(input17, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size17>(input17, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST18, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size18>(input18);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size18>(input18, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size18>(input18, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST19, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size19>(input19);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size19>(input19, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size19>(input19, preComputedSolution, states);
    EXPECT_TRUE(sol);
}
TEST(TEST20, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size20>(input20);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size20>(input20, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size20>(input20, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST21, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size21>(input21);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size21>(input21, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size21>(input21, preComputedSolution, states);
    EXPECT_TRUE(sol);
}
TEST(TEST22, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size22>(input22);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size22>(input22, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size22>(input22, preComputedSolution, states);
    EXPECT_TRUE(sol);
}
TEST(TEST23, SmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size23>(input23);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size23>(input23, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size23>(input23, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST24, UNSATSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size24>(input24);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size24>(input24, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size24>(input24, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST25, SATSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size25>(input25);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size25>(input25, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size25>(input25, preComputedSolution, states);
    EXPECT_TRUE(sol);
}

TEST(TEST26, UnsatSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size26>(input26);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size26>(input26, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size26>(input26, preComputedSolution, states);
    EXPECT_FALSE(sol);
}
TEST(TEST27, UnsatSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size27>(input27);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size27>(input27, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size27>(input27, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST28, UnSatSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size28>(input28);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size28>(input28, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size28>(input28, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST29, UnSatSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size29>(input29);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size29>(input29, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size29>(input29, preComputedSolution, states);
    EXPECT_FALSE(sol);
}

TEST(TEST30, SatSmokeHybrid) {
    constexpr int maximumVariable = getMaximumVariable<size30>(input30);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size30>(input30, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool sol = findSolutionRuntime<maximumVariable, size30>(input30, preComputedSolution, states);
    EXPECT_TRUE(sol);
}
