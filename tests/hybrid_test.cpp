import SATHybrid;

#include <iostream>
#include <array>
#include <gtest/gtest.h>
#include "testData.h"

TEST(TEST1, Hybrid) {
    constexpr auto numberVars = getMaximumVariable<size1>(input1);
    std::cout << "numberVars: " << numberVars << std::endl;
    constexpr auto preSolution = array_repeat<numberVars>(-1);
    constexpr auto prev = compileOptimization<numberVars, size1>(input1, preSolution);
    auto preComputedSolution = prev;
    bool sol = findSolutionRuntime<numberVars, size1>(input1, preComputedSolution);
    
    if (!sol) {
        std::cout << "Solution wasn't find" << std::endl;
    } else {
        std::cout << "Solution was find" << std::endl;
        for(auto&& it : preComputedSolution) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}
