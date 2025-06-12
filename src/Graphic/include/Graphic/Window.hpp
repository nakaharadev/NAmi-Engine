#pragma once

#include <string>

#include <GLFW/glfw3.h>

class Window {
public:
	Window(int __width,  int __height, std::string __title);
	~Window();

	void update();
	bool shouldClose();
private:
	int _width, _height;
	std::string _title;
	GLFWwindow* _window;
};