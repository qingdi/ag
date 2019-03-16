cmake_minimum_required(VERSION 3.13)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(hello learnc/hello.c)
add_executable(ctype learnc/ctype.c)
add_executable(main learnc/main.c learnc/support.c)
add_executable(operatorcase learnc/operatorcase.c)
add_executable(switchcase learnc/switchcase.c)
add_executable(forcase learnc/forcase.c)