module;



#include <iostream>
#include <array>


export module SATHybrid;

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
    for(auto&& clause : clauses) {
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

export template <int maxVal, int size>
bool isSolution(const std::array<std::array<int, 3>, size>& clauses, std::array<int, maxVal>& possibleSolution) {
    for(auto&& clause : clauses) {
        int a = clause[0];
        int b = clause[1];
        int c = clause[2];
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
    //replace -1 -> 1 in final solution
    return true;
    
}

export template <int maxVal, int size>
bool findSolutionRuntime(const std::array<std::array<int, 3>, size>& clauses, std::array<int, maxVal>& preSolution) {
    if (isSolution<maxVal, size>(clauses, preSolution)) {
        return true;
    }
    for(int i = 0; i < preSolution.size() - 1; ++i) {
        if (preSolution[i] == -1) {
            preSolution[i] = 0;
            if (findSolutionRuntime<maxVal, size>(clauses, preSolution)) {
                return true;
            }
            preSolution[i] = 1;
            if (findSolutionRuntime<maxVal, size>(clauses, preSolution)) {
                return true;
            }
        }
    }
    return false;
}
