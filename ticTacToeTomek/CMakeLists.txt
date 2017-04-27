cmake_minimum_required(VERSION 2.6)
project(tictactoetomek)

add_executable(tictactoetomek main.cpp)

install(TARGETS tictactoetomek RUNTIME DESTINATION bin)
