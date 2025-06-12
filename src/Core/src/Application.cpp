#include <Core/Application.hpp>

#include <Graphic/Window.hpp>

void Application::start() {
	Window window = Window(1920, 1080, "NAmi Engine");
	onCreate();

	while (!_closeMainLoop) {
		window.update();
		onUpdate();

		_closeMainLoop = window.shouldClose();
	}

	onDestroy();
}

void Application::stop() {
	_closeMainLoop = true;
}