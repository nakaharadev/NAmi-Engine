#pragma once

#include <memory>

class Application {
public:
	Application() = default;
	~Application() = default;

	virtual void onCreate() = 0;
	virtual void onUpdate() = 0;
	virtual void onDestroy() = 0;

	void start();
	void stop();

private:
	bool _closeMainLoop = false;
};