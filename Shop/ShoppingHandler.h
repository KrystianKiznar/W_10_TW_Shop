#pragma once
#include "Window.h"
#include "MenuWindow.h"
#include "ListWindow.h"
#include "CartWindow.h"
#include "ListOptionsWindow.h"

class Window;

class ShoppingHandler {
public:
	enum state {
		exit,
		menu,
		listOptions,
		list,
		cart,
		other
	};

	ShoppingHandler();
	void start();

private:
	Window* window;
	MenuWindow menuWindow;
	ListWindow listWindow;
	CartWindow cartWindow;
	ListOptionsWindow listOptionsWindow;
};

