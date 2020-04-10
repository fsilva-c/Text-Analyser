cmake_minimum_required(VERSION 3.10.2)

project(TEXTANALYSER)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 ")

include_directories(include)

set(SOURCES binary_tree.c strManipulation.c)

file(GLOB SOURCES "*.c")

add_executable(tree ${SOURCES})

target_link_libraries(tree m)