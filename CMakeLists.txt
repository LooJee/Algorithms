cmake_minimum_required(VERSION 3.3)
project(Algorithms)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --std=c99")

#添加子目录
add_subdirectory(Sample)
add_subdirectory(src)