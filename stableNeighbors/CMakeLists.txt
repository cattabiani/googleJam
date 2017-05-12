cmake_minimum_required(VERSION 2.6)
project(stableneighbors)

add_executable(stableneighbors main.cpp)

install(TARGETS stableneighbors RUNTIME DESTINATION bin)
