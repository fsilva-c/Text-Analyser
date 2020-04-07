cmake_minimum_required(VERSION 3.10.2)

project(TEXTANALYSER)

include_directories(include)

set(SOURCES binary_tree.c strManipulation.c)

file(GLOB SOURCES "*.c")

add_executable(tree ${SOURCES})