cmake_minimum_required(VERSION 3.20)
project(exampleClassCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(exampleClassCpp main.cpp LinkedList.cpp LinkedList.h Node.h)
