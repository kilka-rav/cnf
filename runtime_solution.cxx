import SAT;

#include <iostream>
#include <tuple>
#include <bitset>
#include <vector>

int main() {
    std::vector<std::tuple<int, int, int>> clauses = {{1, 2, -3}, {2, 3, -1}};
    int numberVars = getNumberVars(clauses);
    std::vector<int> solution(numberVars);
    std::cout << numberVars << std::endl;
    std::cout << solution.size() << std::endl;
    if (!findSolution(clauses, solution, 0)) {
        std::cout << "Solution wasn't find" << std::endl;
    } else {
        std::cout << "Solution was find" << std::endl;
        for(auto&& it : solution) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }

}