cmake_minimum_required(VERSION 3.13)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(hello learnc/hello.c)
add_executable(ctype learnc/ctype.c)