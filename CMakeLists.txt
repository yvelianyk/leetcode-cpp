cmake_minimum_required(VERSION 3.26)
project(leetcode-cpp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        src/problems/is_acronym.cpp
)
add_executable(Build ${SOURCES})
target_include_directories(Build PRIVATE ${CMAKE_SOURCE_DIR}/lib)
