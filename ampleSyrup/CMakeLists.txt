cmake_minimum_required(VERSION 2.6)
project(amplesyrup)

add_executable(amplesyrup main.cpp)

install(TARGETS amplesyrup RUNTIME DESTINATION bin)
