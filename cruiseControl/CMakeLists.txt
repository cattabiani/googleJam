cmake_minimum_required(VERSION 2.6)
project(cruisecontrol)

add_executable(cruisecontrol main.cpp)

install(TARGETS cruisecontrol RUNTIME DESTINATION bin)
