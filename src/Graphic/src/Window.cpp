#include <Graphic/Window.hpp>

#include <Util/Log.hpp>

#include <stdio.h>
#include <string>

#define _SET_WINDOW_CONSTRUCTOR_PARAMS _width(__width), _height(__height), _title(__title)

Window::Window(int __width, int __height, std::string __title) : _SET_WINDOW_CONSTRUCTOR_PARAMS{
	logInfo("Window", "Created");
}

Window::~Window() {

}