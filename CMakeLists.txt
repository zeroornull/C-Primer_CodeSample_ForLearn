cmake_minimum_required(VERSION 3.20)
project(FirstProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(FirstProject src/main.cpp)

add_executable(myfirst src/chapter2/myfirst.cpp)
add_executable(carrot src/chapter2/carrot.cpp)
add_executable(getinfo src/chapter2/getinfo.cpp)
add_executable(sqrt src/chapter2/sqrt.cpp)