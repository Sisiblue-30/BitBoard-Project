cmake_minimum_required(VERSION 4.0)
project(BitBoard_Project C)

set(CMAKE_C_STANDARD 11)

add_executable(BitBoard_Project main.c
        functions.c
        board.h
        board.c)
