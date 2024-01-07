import SATCompile;

#include <iostream>
#include <tuple>
#include <bitset>
#include <vector>
#include <array>
#include <concepts>
#include <gtest/gtest.h>


TEST(Compile, first) {
    constexpr int size = 2;//number of triplets
    constexpr int numberVars = 1;//maximum element of clauses
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 1, 1}, {1, -1, -1}}};
    constexpr auto sol = findSolution<size, numberVars>(clauses);   
    EXPECT_EQ(sol.first, true);
}

TEST(Compile, second) {
    constexpr int size = 2;//number of triplets
    constexpr int numberVars = 1;//maximum element of clauses
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 1, 1}, {-1, -1, -1}}};
    constexpr auto sol = findSolution<size, numberVars>(clauses);   
    EXPECT_EQ(sol.first, false);
}

TEST(Compile, third) {
    constexpr int size = 2;//number of triplets
    constexpr int numberVars = 3;//maximum element of clauses
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 1, 1}, {1, 3, 2}}};
    constexpr auto sol = findSolution<size, numberVars>(clauses);   
    EXPECT_EQ(sol.first, true);
}

TEST(Compile, fourth) {
    constexpr int size = 2;//number of triplets
    constexpr int numberVars = 5;//maximum element of clauses
    constexpr std::array<std::array<int, 3>, size> clauses = {{{5, 5, 5}, {-5, -5, -5}}};
    constexpr auto sol = findSolution<size, numberVars>(clauses);   
    EXPECT_EQ(sol.first, false);
}
