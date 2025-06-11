cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(PROJECT_NAME NAmi_Engine)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src/Graphic)
add_subdirectory(src/Core)