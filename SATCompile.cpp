module;

#include <tuple>
#include <vector>
#include <cmath>
#include <iostream>
#include <array>
#include <algorithm>
#include <cassert>

export module SATCompile;

export template <typename T>
consteval T ABS(T a) { return a < 0 ? -a : a; }

template <int numberVars, int size>
consteval bool isSolutionBit(const std::array<std::array<int, 3>, size>& clauses,
        const std::array<int, numberVars>& possibleSolution) {
    for(auto&& triplet : clauses) {
        int a = std::get<0>(triplet);
        int b = std::get<1>(triplet);
        int c = std::get<2>(triplet);
        bool a1, b1, c1;
        if (a > 0) {
            a1 = possibleSolution[a - 1];
        } else {
            a1 = !possibleSolution[ABS(a) - 1];
        }
        
        if (b > 0) {
            b1 = possibleSolution[b - 1];
        } else {
            b1 = !possibleSolution[ABS(b) - 1];
        }
        if (c > 0) {
            c1 = possibleSolution[c - 1];
        } else {
            c1 = !possibleSolution[ABS(c) - 1];
        }
        if (!a1 && !b1 && !c1) {
            return false;
        } 
    }
    return true;
}


export template <int numberVars, int size, int idx>
consteval std::pair<bool, std::array<int, numberVars>> isSolution(const std::array<std::array<int, 3>, size>& clauses,
    std::array<int, numberVars>& possibleSolution) {
    const bool isSol = isSolutionBit<numberVars, size>(clauses, possibleSolution);
    if (isSol) {
        return std::make_pair(true, possibleSolution);
    }
    if constexpr (numberVars == idx) {
        return std::make_pair(false, possibleSolution);
    } else {
        auto possibleSolutionSwap = possibleSolution;
        possibleSolutionSwap[idx] = 1;
        const auto f = isSolution<numberVars, size, idx + 1>(clauses, possibleSolutionSwap);
        if (f.first) {
            return f;
        }
        possibleSolutionSwap[idx] = 0;
        const auto f2 = isSolution<numberVars, size, idx + 1>(clauses, possibleSolutionSwap);
        if (f2.first) {
            return f2;
        }
    }
    return std::make_pair(false, possibleSolution);
}


export template <int size, int numberVars>
consteval std::pair<bool, std::array<int, numberVars>> findSolution(const std::array<std::array<int, 3>, size>& clauses) {
    std::array<int, numberVars> possibleSolution = {};
    return isSolution<numberVars, size, 0>(clauses, possibleSolution);
}
