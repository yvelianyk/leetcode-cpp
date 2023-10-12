cmake_minimum_required(VERSION 3.26)
project(leetcode-cpp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        src/problems/prime_number_set_bits.cpp
)
add_executable(Build ${SOURCES})
target_include_directories(Build PRIVATE ${CMAKE_SOURCE_DIR}/lib)
