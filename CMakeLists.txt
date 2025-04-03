cmake_minimum_required(VERSION 3.30)
project(seminar2)


set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(seminar2
    seminar2.cpp
    seminar2.h)

add_executable(seminar3 seminar3.cpp
        seminar3.h
)
