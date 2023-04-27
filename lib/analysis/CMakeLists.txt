cmake_minimum_required(VERSION 3.25)
project(analysis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(analysis
        analysis.ino
        lwc.cpp
        lwc.h)
