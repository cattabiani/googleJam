cmake_minimum_required(VERSION 2.6)
project(revengeofthepancakes)

add_executable(revengeofthepancakes main.cpp)

install(TARGETS revengeofthepancakes RUNTIME DESTINATION bin)
