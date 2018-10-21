cmake_minimum_required(VERSION 3.12)
project(CMakeTest)

set(CMAKE_CXX_STANDARD 14)

#add_executable(CMakeTest main.cpp)
add_subdirectory(libjsonutils)
add_subdirectory(kb)
add_subdirectory(third_party/abseil-cpp)
add_subdirectory(third_party/googletest)


