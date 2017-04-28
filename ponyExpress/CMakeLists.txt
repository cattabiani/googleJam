cmake_minimum_required(VERSION 2.6)
project(ponyexpress)

add_executable(ponyexpress main.cpp)

install(TARGETS ponyexpress RUNTIME DESTINATION bin)
