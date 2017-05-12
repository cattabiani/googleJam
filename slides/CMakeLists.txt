cmake_minimum_required(VERSION 2.6)
project(slides)

add_executable(slides main.cpp)

install(TARGETS slides RUNTIME DESTINATION bin)
