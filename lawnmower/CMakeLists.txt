cmake_minimum_required(VERSION 2.6)
project(lawnmower)

add_executable(lawnmower main.cpp)

install(TARGETS lawnmower RUNTIME DESTINATION bin)
