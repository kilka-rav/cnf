import SAT;
import SATCompile;
import SATHybrid;

#include <iostream>
#include <array>

consteval int getNumberOfClauses() {
    int a = 
#include "TestSize"
;
    return a;
}


template <int size>
consteval std::array<std::array<int, 3>, size> getData() {
    std::array<std::array<int, 3>, size> a = {
#include "Test"
};
    return a;
}


void compare(bool b1, bool b2, bool b3) {
    if (b1 == b2 && b2 == b3) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}


int main() {
    constexpr auto size = getNumberOfClauses();
    constexpr auto input = getData<size>();
    constexpr int maximumVariable = getMaximumVariable<size>(input);
    std::array<int, maximumVariable> sol2;
    std::array<int, maximumVariable> sol3;
    constexpr auto compileSol = getCompileSolution<size, maximumVariable>(input);
    auto compileSolb = compileSol.first;
    bool runtimeSol = getRuntimeSolution<size, maximumVariable>(input, sol2);
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size>(input, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    bool hybridSol = findSolutionRuntime<maximumVariable, size>(input, preComputedSolution, states);
    compare(compileSolb, runtimeSol, hybridSol);
}