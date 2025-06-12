cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(INCLUDE_DIR include)
set(INCLUDE_FILES_DIR ${INCLUDE_DIR}/Core)
set(INCLUDE_FILES
	${INCLUDE_FILES_DIR}/Application.hpp
)

set(SRC_FILES
	src/Application.cpp
	src/main.cpp
)

set(CORE_FILES
	${INCLUDE_FILES}
	${SRC_FILES}
)

add_executable(${PROJECT_NAME} ${CORE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC
    ${INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME} Util)
target_link_libraries(${PROJECT_NAME} Graphic)