cmake_minimum_required(VERSION 2.6)
project(deceitfulwar)

add_executable(deceitfulwar main.cpp)

install(TARGETS deceitfulwar RUNTIME DESTINATION bin)
