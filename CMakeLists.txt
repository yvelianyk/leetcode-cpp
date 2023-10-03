cmake_minimum_required(VERSION 3.26)
project(leetcode-cpp)

set(CMAKE_CXX_STANDARD 17)
add_library(lib)

set(SOURCES
        main.cpp
        src/problems/merge_nodes_btw_zeros.cpp
)
add_executable(Build ${SOURCES})
