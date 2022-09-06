cmake_minimum_required(VERSION 3.21)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -static-libstdc++")

INCLUDE_DIRECTORIES(SYSTEM src/)
add_executable(LeetCode main.cpp src/Problem.h src/Problems/RomanToInteger.cpp src/Problems/RomanToInteger.h src/Problems/Palindrome/Palindrome.cpp src/Problems/Palindrome/Palindrome.h src/Utils/LinkedList.h src/Problems/PivotIndex/PivotIndex.cpp src/Problems/PivotIndex/PivotIndex.h)
