import SATCompile;

#include <iostream>
#include <tuple>
#include <bitset>
#include <vector>
#include <array>

int main() {
    constexpr int size = 2;//number of triplets
    constexpr int numberVars = 1;//maximum element of clauses
    constexpr std::array<std::array<int, 3>, size> clauses = {{{1, 1, 1}, {1, -1, -1}}};
    constexpr auto sol = findSolution<size, numberVars>(clauses);   
    if constexpr(!sol.first) {
        std::cout << "solution wasn't find" << std::endl;
    } else {
        std::cout << "Solution was find" << std::endl;
        std::cout << sol.first << std::endl;
        for(auto p : sol.second) {
            std::cout << p << " ";
        }
        std::cout << std::endl;
    }
}