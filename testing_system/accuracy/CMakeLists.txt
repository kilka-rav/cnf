add_executable(accuracy accuracy.cpp)

target_link_libraries(accuracy SAT
                                SATCompile
                                SATHybrid
)