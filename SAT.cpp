module;

#include <tuple>
#include <vector>
#include <iostream>

export module SAT;

export int getNumberVars(std::vector<std::tuple<int, int, int>>& clauses) {
    int result = 0;
    for(const auto triplet : clauses) {
        int a = std::get<0>(triplet);
        int b = std::get<1>(triplet);
        int c = std::get<2>(triplet);
        result = std::max(std::abs(a), result);
        result = std::max(std::abs(b), result);
        result = std::max(std::abs(c), result);
    }
    return result;
}

export bool isSolution(std::vector<std::tuple<int, int, int>>& clauses, std::vector<int>& possibleSolution) {
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

export void increment(std::vector<int>& possibleSolution) {
    bool waitOne = false;
    for(auto it = possibleSolution.end(); it != possibleSolution.begin(); it--) {
        if (*it == 1 && waitOne) {
            *it = 0;
            return;
        }
        if (*it == 0) {
            *it = 1;
            waitOne = true;
        }
    }
    return;
}

export bool findSolution(std::vector<std::tuple<int, int, int>>& clauses, std::vector<int>& possibleSolution, int index) {
    if (index == possibleSolution.size()) {
        return false;
    }
    
    if (isSolution(clauses, possibleSolution)) {
        return true;
    }
    increment(possibleSolution);
    findSolution(clauses, possibleSolution, index + 1);
}