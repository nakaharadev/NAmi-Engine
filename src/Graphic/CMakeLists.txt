cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(INCLUDE_DIR include)
set(INCLUDE_FILES_DIR ${INCLUDE_DIR}/Graphic)
set(INCLUDE_FILES
	${INCLUDE_FILES_DIR}/Window.hpp
)

set(SRC_FILES
	src/Window.cpp
)

set(GRAPHIC_FILES
	${INCLUDE_FILES}
	${SRC_FILES}
)

add_library(Graphic STATIC ${GRAPHIC_FILES})
target_include_directories(Graphic PUBLIC
    ${INCLUDE_DIR}
)