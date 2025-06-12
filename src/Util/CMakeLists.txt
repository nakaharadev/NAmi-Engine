cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(MODULE_NAME Util)

set(INCLUDE_DIR include)
set(INCLUDE_FILES_DIR ${INCLUDE_DIR}/${MODULE_NAME})
set(INCLUDE_FILES
	${INCLUDE_FILES_DIR}/Log.hpp
)

set(SRC_FILES
	src/Log.cpp
)

set(GRAPHIC_FILES
	${INCLUDE_FILES}
	${SRC_FILES}
)

add_library(${MODULE_NAME} STATIC ${GRAPHIC_FILES})
target_include_directories(${MODULE_NAME} PUBLIC
    ${INCLUDE_DIR}
)