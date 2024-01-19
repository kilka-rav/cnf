import SAT;
import SATHybrid;

#include <iostream>
#include <array>
#include <chrono>
#include "testDataPerf.h"


void compare(bool b1, bool b2) {
    if (b1 == b2) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}


int main() {
    typedef std::chrono::high_resolution_clock Time;
    typedef std::chrono::duration<float> fsec;
    constexpr int maximumVariable = getMaximumVariable<size_clauses2>(input_clauses2);
    std::array<int, maximumVariable> sol2 = {{0}};
    auto t0 = Time::now();
    bool runtimeSol = getRuntimeSolution<size_clauses2, maximumVariable>(input_clauses2, sol2);
    auto t1 = Time::now();
    fsec fs = t1 - t0;
    std::cout << "runtime solution: " << fs.count() << " sec" << std::endl;
    constexpr auto preSolution = array_repeat<maximumVariable>(-1);
    constexpr auto prev = compileOptimization<maximumVariable, size_clauses2>(input_clauses2, preSolution);
    auto preComputedSolution = prev;
    constexpr auto states = getGlobalState<maximumVariable>(prev);
    auto t0_0 = Time::now();
    bool hybridSol = findSolutionRuntime<maximumVariable, size_clauses2>(input_clauses2, preComputedSolution, states);
    auto t1_0 = Time::now();
    fsec fs2 = t1_0 - t0_0;
    std::cout << "Hybrid solution: " << fs2.count() << " sec" << std::endl;
    compare(hybridSol, runtimeSol);
    
}