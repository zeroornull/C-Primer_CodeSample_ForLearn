cmake_minimum_required(VERSION 3.20)
project(FirstProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(FirstProject src/main.cpp)

add_executable(myfirst src/chapter2/myfirst.cpp)
add_executable(carrot src/chapter2/carrot.cpp)
add_executable(getinfo src/chapter2/getinfo.cpp)
add_executable(sqrt src/chapter2/sqrt.cpp)
add_executable(ourfunc src/chapter2/ourfunc.cpp)
add_executable(convert src/chapter2/convert.cpp)
add_executable(test2_1 src/chapter2/exercise/test2_1.cpp)
add_executable(test2_2 src/chapter2/exercise/test2_2.cpp)
add_executable(test2_3 src/chapter2/exercise/test2_3.cpp)
add_executable(test2_5 src/chapter2/exercise/test2_5.cpp)
add_executable(test2_6 src/chapter2/exercise/test2_6.cpp)
add_executable(test2_7 src/chapter2/exercise/test2_7.cpp)