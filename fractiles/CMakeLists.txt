cmake_minimum_required(VERSION 2.6)
project(fractiles)

add_executable(fractiles main.cpp)

install(TARGETS fractiles RUNTIME DESTINATION bin)
