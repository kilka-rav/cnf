# cnf
3-SAT in partially compile time

* Requirements
* clang-17
* cmake 3.28.1
** Build
* mkdir build && cd build
* cmake -DCMAKE_CXX_COMPILER="/usr/bin/clang++-17" -DCMAKE_C_COMPILER="/usr/bin/clang-17" .. -GNinja
* ninja
