#pragma once

#include <string>

class Window {
public:
	Window(int __width,  int __height, std::string __title);
	~Window();

private:
	int _width, _height;
	std::string _title;
};