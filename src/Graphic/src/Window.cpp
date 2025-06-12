#include <glad/glad.h>

#include <Graphic/Window.hpp>

#include <Util/Log.hpp>

#include <stdio.h>
#include <string>
	
#define _SET_WINDOW_CONSTRUCTOR_PARAMS _width(__width), _height(__height), _title(__title)

Window::Window(int __width, int __height, std::string __title) : _SET_WINDOW_CONSTRUCTOR_PARAMS {
	if (!glfwInit()) {
		logCritical("GLFW", "Can't init GLFW. Error: " + std::to_string(glfwGetError(NULL)));
		exit(-1);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // For macOS

	_window = glfwCreateWindow(_width, _height, _title.c_str(), nullptr, nullptr);
	if (!_window) {
		glfwTerminate();
		logCritical("GLFW", "Can't create window. Error: " + std::to_string(glfwGetError(NULL)));
		exit(-2);
	}

	glfwMakeContextCurrent(_window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) { 
		logCritical("GLAD", "Can't init GLAD");
	}
}

Window::~Window() {
	glfwTerminate();
}

void Window::update() {
	glClearColor(0., 0., 0., 1.);
	glClear(GL_COLOR_BUFFER_BIT);

	glfwSwapBuffers(_window);
	glfwPollEvents();
}

bool Window::shouldClose() {
	return glfwWindowShouldClose(_window);
}