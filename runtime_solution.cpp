import SAT;

#include <iostream>
#include <tuple>
#include <bitset>
#include <vector>


int main() {
    std::vector<std::tuple<int, int, int>> clauses = {{5, 17, 5}, {-5, -5, -5}};
    int numberVars = getNumberVars(clauses);
    std::vector<int> solution(numberVars);
    bool sol = findSolution(clauses, solution, 0);
    if (!sol) {
        std::cout << "Solution wasn't find" << std::endl;
    } else {
        std::cout << "Solution was find" << std::endl;
        for(auto&& it : solution) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }

}
