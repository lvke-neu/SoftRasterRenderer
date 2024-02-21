cmake_minimum_required(VERSION 3.14)

project(SoftRasterRenderer)

file(GLOB SRC_MAIN src/main.cpp)
file(GLOB ASSETS assets/*)

add_executable(SoftRasterRenderer ${SRC_MAIN})
