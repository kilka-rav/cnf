import SATCompile;

#include <iostream>
#include <array>
#include <gtest/gtest.h>
#include "testData.h"
#include "testDataBigClauses.h"

TEST(TEST1, Compile) {
    constexpr auto numberVars = getMaximumVariable<size1>(input1);
    constexpr auto sol = getCompileSolution<size1, numberVars>(input1);
    EXPECT_TRUE(sol.first);
}

TEST(TEST1, SATSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size1>(input1);
    
    constexpr auto sol = getCompileSolution<size1, maximumVariable>(input1);
    EXPECT_TRUE(sol.first);
}

TEST(TEST2, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size2>(input2);
    
    constexpr auto sol = getCompileSolution<size2, maximumVariable>(input2);
    EXPECT_FALSE(sol.first);;
}

TEST(TEST3, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size3>(input3);
    
    constexpr auto sol = getCompileSolution<size3, maximumVariable>(input3);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST4, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size4>(input4);
    
    constexpr auto sol = getCompileSolution<size4, maximumVariable>(input4);
    EXPECT_FALSE(sol.first);;
}
/*
TEST(TEST5, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size5>(input5);
    
    constexpr auto sol = getCompileSolution<size5, maximumVariable>(input5);
    EXPECT_FALSE(sol.first);;
}
*/

TEST(TEST6, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size6>(input6);
    
    constexpr auto sol = getCompileSolution<size6, maximumVariable>(input6);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST7, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size7>(input7);
    
    constexpr auto sol = getCompileSolution<size7, maximumVariable>(input7);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST8, SatSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size8>(input8);
    
    constexpr auto sol = getCompileSolution<size8, maximumVariable>(input8);
    EXPECT_TRUE(sol.first);;
}
TEST(TEST9, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size9>(input9);
    
    constexpr auto sol = getCompileSolution<size9, maximumVariable>(input9);
    EXPECT_FALSE(sol.first);;
}TEST(TEST10, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size10>(input10);
    
    constexpr auto sol = getCompileSolution<size10, maximumVariable>(input10);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST11, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size11>(input11);
    
    constexpr auto sol = getCompileSolution<size11, maximumVariable>(input11);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST12, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size12>(input12);
    
    constexpr auto sol = getCompileSolution<size12, maximumVariable>(input12);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST13, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size13>(input13);
    
    constexpr auto sol = getCompileSolution<size13, maximumVariable>(input13);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST14, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size14>(input14);
    
    constexpr auto sol = getCompileSolution<size14, maximumVariable>(input14);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST15, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size15>(input15);
    
    constexpr auto sol = getCompileSolution<size15, maximumVariable>(input15);
    EXPECT_FALSE(sol.first);;
}

TEST(TEST16, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size16>(input16);
    
    constexpr auto sol = getCompileSolution<size16, maximumVariable>(input16);
    EXPECT_TRUE(sol.first);;
}
TEST(TEST17, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size17>(input17);
    
    constexpr auto sol = getCompileSolution<size17, maximumVariable>(input17);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST18, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size18>(input18);
    
    constexpr auto sol = getCompileSolution<size18, maximumVariable>(input18);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST19, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size19>(input19);
    
    constexpr auto sol = getCompileSolution<size19, maximumVariable>(input19);
    EXPECT_TRUE(sol.first);;
}
TEST(TEST20, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size20>(input20);
    
    constexpr auto sol = getCompileSolution<size20, maximumVariable>(input20);
    EXPECT_FALSE(sol.first);;
}

TEST(TEST21, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size21>(input21);
    
    constexpr auto sol = getCompileSolution<size21, maximumVariable>(input21);
    EXPECT_TRUE(sol.first);;
}
TEST(TEST22, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size22>(input22);
    
    constexpr auto sol = getCompileSolution<size22, maximumVariable>(input22);
    EXPECT_TRUE(sol.first);;
}
TEST(TEST23, SmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size23>(input23);
    
    constexpr auto sol = getCompileSolution<size23, maximumVariable>(input23);
    EXPECT_FALSE(sol.first);;
}
/*
TEST(TEST24, UNSATSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size24>(input24);
    
    constexpr auto sol = getCompileSolution<size24, maximumVariable>(input24);
    EXPECT_FALSE(sol.first);;
}
*/

TEST(TEST25, SATSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size25>(input25);
    
    constexpr auto sol = getCompileSolution<size25, maximumVariable>(input25);
    EXPECT_TRUE(sol.first);;
}

TEST(TEST26, UnsatSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size26>(input26);
    
    constexpr auto sol = getCompileSolution<size26, maximumVariable>(input26);
    EXPECT_FALSE(sol.first);;
}
TEST(TEST27, UnsatSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size27>(input27);
    
    constexpr auto sol = getCompileSolution<size27, maximumVariable>(input27);
    EXPECT_FALSE(sol.first);;
}
/*
TEST(TEST28, UnSatSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size28>(input28);
    
    constexpr auto sol = getCompileSolution<size28, maximumVariable>(input28);
    EXPECT_FALSE(sol.first);;
}
*/
TEST(TEST29, UnSatSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size29>(input29);
    
    constexpr auto sol = getCompileSolution<size29, maximumVariable>(input29);
    EXPECT_FALSE(sol.first);;
}

TEST(TEST30, SatSmokeCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size30>(input30);
    
    constexpr auto sol = getCompileSolution<size30, maximumVariable>(input30);
    EXPECT_TRUE(sol.first);;
}

TEST(TEST2, BigClausesCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size_clauses2>(input_clauses2);
    
    constexpr auto sol = getCompileSolution<size_clauses2, maximumVariable>(input_clauses2);
    EXPECT_FALSE(sol.first);;
}

TEST(TEST3, BigClausesCompileTime) {
    constexpr int maximumVariable = getMaximumVariable<size_clauses3>(input_clauses3);
    
    constexpr auto sol = getCompileSolution<size_clauses3, maximumVariable>(input_clauses3);
    EXPECT_FALSE(sol.first);;
}
