#pragma once
#include "Window.h"
#include "MenuWindow.h"
#include "ListWindow.h"

class ShoppingHandler {
public:
	ShoppingHandler();
	void start();

private:
	Window* window;
	MenuWindow menuWindow;
	ListWindow listWindow;
};

