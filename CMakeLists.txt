cmake_minimum_required(VERSION 3.21)
project(Animal)

set(CMAKE_CXX_STANDARD 20)

add_executable(animal main.cpp animal.cpp dog.cpp horse.cpp)

