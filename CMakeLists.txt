cmake_minimum_required(VERSION 3.13)

project(a)

set (CMAKE_CXX_STANDARD 17)

add_executable(a  ./src/Scene/Scene.cpp ./src/Game.cpp  ./src/main.cpp)