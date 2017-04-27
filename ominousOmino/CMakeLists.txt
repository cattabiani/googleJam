cmake_minimum_required(VERSION 2.6)
project(ominousomino)

add_executable(ominousomino main.cpp)

install(TARGETS ominousomino RUNTIME DESTINATION bin)
