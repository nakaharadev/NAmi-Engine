#include <Core/Application.hpp>

#include <Util/Log.hpp>
#include <memory>

class App : public Application {
	void onCreate() override {
		logInfo("App", "onCreate");
	}

	void onUpdate() override {
	}

	void onDestroy() override {
		logInfo("App", "onDestroy");
	}
};

int main() {
	std::unique_ptr<App> app = std::make_unique<App>();
	app->start();

	return 0;
}