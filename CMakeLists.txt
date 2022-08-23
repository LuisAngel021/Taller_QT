cmake_minimum_required(VERSION 3.5)

project(Taller_HPC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Taller_HPC main.cpp)

install(TARGETS Taller_HPC
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
