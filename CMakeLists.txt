cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(PROJECT_NAME NAmi_Engine)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/glfw)
add_subdirectory(libs/glad)
add_subdirectory(libs/glm)

add_subdirectory(src/Util)
add_subdirectory(src/Graphic)
add_subdirectory(src/Core)