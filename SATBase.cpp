/*
module;

#include <cmath>
#include <array>

export module SATBase;

export template <typename T>
consteval T ABS(T a) { return a < 0 ? -a : a; }

template<int size>
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

export template <int numberVars, int size>
constexpr bool isSolution(const std::array<std::array<int, 3>, size>& clauses,
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

export template<std::size_t N, std::semiregular T>
consteval std::array<T, N> array_repeat(const T& value) {
    std::array<T, N> ret;
    ret.fill(value);
    return ret;
}
*/