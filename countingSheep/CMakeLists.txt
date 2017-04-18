cmake_minimum_required(VERSION 2.6)
project(countingsheep)

add_executable(countingsheep main.cpp)

install(TARGETS countingsheep RUNTIME DESTINATION bin)
