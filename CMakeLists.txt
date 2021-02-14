project(Summation)
cmake_minimum_required(VERSION 2.8)
include_directories(src)

set(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_HOME_DIRECTORY}
    )

add_executable(
    Adder.h
    Adder.cpp
	Summation.cpp
	stdafx.h
	stdafx.cpp
	targetver.h
    )
