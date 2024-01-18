module;

#include <cmath>
#include <iostream>
#include <array>

export module SAT;

export template<int size>
consteval int getMaximumVariable(const std::array<std::array<int, 3>, size>& clauses) {
    int max = 0;
    for(auto&& clause : clauses) {
        for(auto&& el : clause) {
            if (max < el) {
                max = el;
            }
        }
    }
    return max;
}

template <int numberVars, int size>
bool isSolutionRun(const std::array<std::array<int, 3>, size>& clauses,
        const std::array<int, numberVars>& possibleSolution) {
    for(auto&& triplet : clauses) {
        int a = std::get<0>(triplet);
        int b = std::get<1>(triplet);
        int c = std::get<2>(triplet);
        bool a1, b1, c1;
        if (a > 0) {
            a1 = possibleSolution[a - 1];
        } else {
            a1 = !possibleSolution[std::abs(a) - 1];
        }
        
        if (b > 0) {
            b1 = possibleSolution[b - 1];
        } else {
            b1 = !possibleSolution[std::abs(b) - 1];
        }
        if (c > 0) {
            c1 = possibleSolution[c - 1];
        } else {
            c1 = !possibleSolution[std::abs(c) - 1];
        }
        if (!a1 && !b1 && !c1) {
            return false;
        } 
    }
    return true;
}

export template<int size, int maximumVariable>
bool findSolution(const std::array<std::array<int, 3>, size>& clauses, std::array<int, maximumVariable>& possibleSolution, int index) {
    if (index > possibleSolution.size()) {
        return false;
    }
    
    if (isSolutionRun<maximumVariable, size>(clauses, possibleSolution)) {
        return true;
    }
    possibleSolution[index] = 0;
    if (findSolution<size, maximumVariable>(clauses, possibleSolution, index + 1)) {
        return true;
    }
    possibleSolution[index] = 1;
    if (findSolution<size, maximumVariable>(clauses, possibleSolution, index + 1)) {
        return true;
    }
    return false;
}

export template <int size, int maximumVariable>
bool getRuntimeSolution(const std::array<std::array<int, 3>, size>& input, std::array<int, maximumVariable>& solution) {
    return findSolution<size, maximumVariable>(input, solution, 0);
}