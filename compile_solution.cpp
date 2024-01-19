import SATCompile;

#include <iostream>
#include <array>

int main() {
    constexpr int size = 2;//number of tripletsconstexpr
    constexpr std::array<std::array<int, 3>, size> clauses = {{{12, 12, 12}, {-12, -12, -12}}};
    constexpr auto numberVars = getMaximumVariable<size>(clauses);
    constexpr auto sol = getCompileSolution<size, numberVars>(clauses);
    if (sol.first) {
        for(auto&& p : sol.second) {
            std::cout << p << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Solution wasn't find" << std::endl;
    }
}