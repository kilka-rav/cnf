import SATHybrid;

#include <iostream>
#include <array>

int main() {
    constexpr int size = 58;
    constexpr std::array<std::array<int, 3>, 58> clauses = {{{6, 6, 8}, {4, 1, -2}, {-3, -4, 4}, {6, 1, 6}, {-6, 2, -3}, {-1, 2, 1}, {4, -2, 5}, {-3, 5, -6}, {-6, 2, -3}, {3, 1, -5}, {-4, 2, 1}, {-1, 2, 5}, {5, -7, 7}, {7, 7, 7}, {6, -4, -2}, {2, 3, 4}, {3, -2, -3}, {2, -7, 8}, {4, -5, -8}, {-2, 7, -5}, {1, -7, -3}, {4, 1, 3}, {-1, -2, -6}, {1, -1, -6}, {-2, -4, 2}, {1, -7, -5}, {-5, 6, -4}, {-2, -5, -4}, {-6, 6, 4}, {-4, -7, -7}, {-2, 5, 3}, {-8, -2, 2}, {6, 7, -7}, {-3, 7, 4}, {2, -3, 2}, {-1, -4, 7}, {-4, -2, 6}, {3, -5, 8}, {-4, -2, -3}, {-6, -3, -7}, {-3, 1, 5}, {-1, -7, -5}, {8, 1, -3}, {6, 8, -2}, {-7, -5, 2}, {2, -4, -1}, {4, 7, 1}, {1, -7, 8}, {-4, 5, -1}, {3, 6, -2}, {6, 6, -5}, {-8, 7, 5}, {1, 4, 4}, {-1, 4, 7}, {-5, -5, 5}, {-3, 8, 3}, {5, -6, 8}, {-3, -1, -3}}};

    constexpr auto numberVars = getMaximumVariable<size>(clauses);

    constexpr auto preSolution = array_repeat<numberVars>(-1);
    constexpr auto prev = compileOptimization<numberVars, size>(clauses, preSolution);
    auto preComputedSolution = prev;
    std::cout << std::endl;
    constexpr auto states = getGlobalState<numberVars>(prev);
    bool sol = findSolutionRuntime<numberVars, size>(clauses, preComputedSolution, states);
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
