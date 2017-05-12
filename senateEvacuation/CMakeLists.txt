cmake_minimum_required(VERSION 2.6)
project(senateevacuation)

add_executable(senateevacuation main.cpp)

install(TARGETS senateevacuation RUNTIME DESTINATION bin)
