cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(ThirdTask)

add_library(leaver SHARED
    leaver.cpp
    leaver.h
)

add_executable(main main.cpp)
target_link_libraries(main leaver)