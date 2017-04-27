cmake_minimum_required(VERSION 2.6)
project(magictrick)

add_executable(magictrick main.cpp)

install(TARGETS magictrick RUNTIME DESTINATION bin)
