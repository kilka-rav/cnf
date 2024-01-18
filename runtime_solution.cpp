import SAT;

#include <iostream>
#include <array>


int main() {
    constexpr int size = 2;//number of tripletsconstexpr
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 2, 3}, {2, 3, -1}}};
    constexpr auto maximumVariable = getMaximumVariable<size>(clauses);
    std::array<int, maximumVariable> sol2{0};
    bool runtimeSol = getRuntimeSolution<size, maximumVariable>(clauses, sol2);
    if (runtimeSol) {
        for(auto&& p : sol2) {
            std::cout << p << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "solution wasn't find" << std::endl;
    }
}
