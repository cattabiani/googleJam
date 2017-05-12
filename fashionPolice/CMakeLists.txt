cmake_minimum_required(VERSION 2.6)
project(fashionpolice)

add_executable(fashionpolice main.cpp)

install(TARGETS fashionpolice RUNTIME DESTINATION bin)
