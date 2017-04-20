cmake_minimum_required(VERSION 2.6)
project(standingovation)

add_executable(standingovation main.cpp)

install(TARGETS standingovation RUNTIME DESTINATION bin)
