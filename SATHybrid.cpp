module;

#include <iostream>
#include <array>
#include <cmath>

export module SATHybrid;

template <typename T>
consteval T ABS(T a) { return a < 0 ? -a : a; }

export template<int size>
consteval int getMaximumVariable(const std::array<std::array<int, 3>, size>& clauses) {
    int max = 0;
    for(auto&& clause : clauses) {
        for(auto&& el : clause) {
            if (ABS(max) < ABS(el)) {
                max = ABS(el);
            }
        }
    }
    return max;
}

export template <int numberVars, int size>
bool isSolution(const std::array<std::array<int, 3>, size>& clauses,
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
    //replace -1 -> 1
    return true;
}

export template<std::size_t N, std::semiregular T>
consteval std::array<T, N> array_repeat(const T& value) {
    std::array<T, N> ret;
    ret.fill(value);
    return ret;
}

export template <int maxVal, int size>
consteval int analyzeVar(const std::array<std::array<int, 3>, size>& clauses, const int var) {
    int negativeCount = 0;
    int positiveCount = 0;
    for(auto& clause : clauses) {
        for(auto&& el : clause) {
            if (el == var) {
                positiveCount++;
            } else if (el == -var) {
                negativeCount++;
            }
        }
    }
    if (negativeCount == 0 && positiveCount == 0) {
        return 0;
    } else if (positiveCount > 0 && negativeCount == 0) {
        return 1;
    } else if (positiveCount == 0 && negativeCount > 0) {
        return 0;
    }
    return -1;
    
}

export template <int maxVal, int size>
consteval std::array<int, maxVal> compileOptimization(const std::array<std::array<int, 3>, size>& clauses, const std::array<int, maxVal>& preSolution) {
    auto sol = preSolution;
    for(int i = maxVal; i > 0; i--) {
        sol[i - 1] = analyzeVar<maxVal, size>(clauses, i);
    }
    return sol;
}

template <int maxValue>
void replaceToNormalValue(std::array<int, maxValue>& solution) {
    for(auto&& t : solution) {
        t = std::abs(t);
    }
}

export template <int maxValue>
constexpr std::array<bool, maxValue> getGlobalState(const std::array<int, maxValue>& preSolution) {
    std::array<bool, maxValue> a{};
    for(int i = 0; i < preSolution.size(); ++i) {
        if (preSolution[i] != -1) {
            a[i] = true;
        }
    }
    return a;
}

export template <int maxVal, int size>
bool findSolutionRuntime(const std::array<std::array<int, 3>, size>& clauses, std::array<int, maxVal>& preSolution, const std::array<bool, maxVal>& globalState, int index = 0) {
    if (index > maxVal) {
        return false;
    }
    if (isSolution<maxVal, size>(clauses, preSolution)) {
        replaceToNormalValue<maxVal>(preSolution);
        return true;
    }
    if (globalState[index]) {
        return findSolutionRuntime<maxVal, size>(clauses, preSolution, globalState, index + 1);
        
    }
    preSolution[index] = 0;
    if (findSolutionRuntime<maxVal, size>(clauses, preSolution, globalState, index + 1)) {
        return true;
    }
    preSolution[index] = 1;
    if (findSolutionRuntime<maxVal, size>(clauses, preSolution, globalState, index + 1)) {
        return true;
    }
    return false;
}
