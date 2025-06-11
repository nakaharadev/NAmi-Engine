#include <Core/Application.hpp>

#include <stdio.h>
#include <memory>

class App : public Application {
	void onCreate() override {
		printf("onCreate\n");
	}

	void onUpdate() override {
		printf("onUpdate\n");
		stop();
	}

	void onDestroy() override {
		printf("onDestroy\n");
	}
};

int main() {
	std::unique_ptr<App> app = std::make_unique<App>();
	app->start();

	return 0;
}