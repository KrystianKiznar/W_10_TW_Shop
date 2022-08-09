#pragma once
#include "Window.h"
#include "MenuWindow.h"
#include "ListWindow.h"
#include "CartWindow.h"
#include "ListOptionsWindow.h"

class ShoppingHandler {
public:

	ShoppingHandler();
	void start();

private:
	Window* window;
	MenuWindow menuWindow;
	ListWindow listWindow;
	CartWindow cartWindow;
	ListOptionsWindow listOptionsWindow;
	Stock stock;
};

