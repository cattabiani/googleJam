cmake_minimum_required(VERSION 2.6)
project(minesweepermaster)

add_executable(minesweepermaster main.cpp)

install(TARGETS minesweepermaster RUNTIME DESTINATION bin)
