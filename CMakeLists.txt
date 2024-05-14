cmake_minimum_required(VERSION 3.15)
project(M2OEP)

set(CMAKE_CXX_STANDARD 17)

add_executable(M2OEP
        main.cpp
        Zoo.h
        Zoo.cpp
        Animal.h
        Animal.cpp
        Giraffe.h
        Giraffe.cpp
        Otter.h
        Otter.cpp
        Monkey.h
        Monkey.cpp
        Lion.h
        Lion.cpp
        Penguin.h
        Penguin.cpp)
add_executable(ZooTesting
        ZooTesting.cpp
        Zoo.h
        Zoo.cpp
        Animal.h
        Animal.cpp
        Giraffe.h
        Giraffe.cpp
        Otter.h
        Otter.cpp
        Monkey.h
        Monkey.cpp
        Lion.h
        Lion.cpp
        Penguin.h
        Penguin.cpp)