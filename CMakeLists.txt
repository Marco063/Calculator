cmake_minimum_required(VERSION 3.22)
project(Calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calculator main.cpp Node.h Pile.cpp Pile.h Calculator.cpp Calculator.h Syntax.cpp Syntax.h)
