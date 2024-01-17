import SAT;

#include <iostream>
#include <tuple>
#include <vector>
#include <gtest/gtest.h>

TEST(Simple, first) {
    std::vector<std::tuple<int, int, int>> clauses = {{1, 2, -3}, {2, 3, -1}};
    int numberVars = getNumberVars(clauses);
    std::vector<int> solution(numberVars);
    bool sol = findSolution(clauses, solution, 0);
    EXPECT_TRUE(sol);
}

TEST(Simple, second) {
    std::vector<std::tuple<int, int, int>> clauses = {{1, 1, 1}, {2, 3, -1}};
    int numberVars = getNumberVars(clauses);
    std::vector<int> solution(numberVars);
    bool sol = findSolution(clauses, solution, 0);
    EXPECT_TRUE(sol);
}

TEST(Simple, third) {
    std::vector<std::tuple<int, int, int>> clauses = {{1, 1, 1}, {1, 3, 2}};
    
    int numberVars = getNumberVars(clauses);
    
    std::vector<int> solution(numberVars);
    bool sol = findSolution(clauses, solution, 0);
    EXPECT_TRUE(sol);
}

TEST(Simple, fourth) {
    std::vector<std::tuple<int, int, int>> clauses = {{5, 5, 5}, {-5, -5, -5}};
    int numberVars = getNumberVars(clauses);
    std::vector<int> solution(numberVars);
    bool sol = findSolution(clauses, solution, 0);
    EXPECT_FALSE(sol);
}