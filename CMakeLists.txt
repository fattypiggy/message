cmake_minimum_required(VERSION 3.22)
project(message)

set(CMAKE_CXX_STANDARD 17)

add_executable(message main.cpp message.cpp message.h folder.cpp folder.h)
