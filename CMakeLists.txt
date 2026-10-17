
cmake_minimum_required(VERSION 3.10)

project(Proyecto_Actuador)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(Proyecto_Actuador
    src/main.cpp
    src/Actuador.cpp
)
