import SATHybrid;

#include <iostream>
#include <array>
#include <gtest/gtest.h>


TEST(HybridSolution, Simple1) {
    constexpr int size = 2;//number of triplets
    constexpr int numberVars = 3;//maximum element of clauses
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 1, 3}, {1, -1, -1}}};
    constexpr auto preSolution = array_repeat<numberVars>(-1);
    constexpr auto prev = compileOptimization<numberVars, size>(clauses, preSolution);
    auto preComputedSolution = prev;

    bool sol = findSolutionRuntime<numberVars, size>(clauses, preComputedSolution);
    if (!sol) {
        std::cout << "Solution wasn't find" << std::endl;
    } else {
        std::cout << "Solution was find" << std::endl;
        for(auto&& it : preComputedSolution) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    EXPECT_TRUE(sol);
}
