import SATHybrid;

#include <iostream>
#include <array>

int main() {
    constexpr int size = 10;//number of tripletsconstexpr
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 1, 3000}, {1, -1, -1}, {1, 1, 3}, {1, -1, -1}, {1, 1, 3}, {1, -1, -1}, {1, 1, 3}, {1, -1, -1}, {1, 1, 3}, {1, -1, -1}}};
    constexpr auto numberVars = getMaximumVariable<size>(clauses);
    std::cout << numberVars << std::endl;

    constexpr auto preSolution = array_repeat<numberVars>(-1);
    constexpr auto prev = compileOptimization<numberVars, size>(clauses, preSolution);
    auto preComputedSolution = prev;
    bool sol = findSolutionRuntime<numberVars, size>(clauses, preComputedSolution);
    //Find value of variables, which isn't reduce set of solutions
    //Fill possibleSolution these values. if variable is -1, then this variable requires runtime computation.
    
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
