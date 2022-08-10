#pragma once
#include "Window.h"
#include "MenuWindow.h"
#include "ListWindow.h"
#include "CartWindow.h"
#include "ListOptionsWindow.h"
#include "SortByWindow.h"
#include "FilterByWindow.h"
#include "UserDataWindow.h"
#include "Cart.h"

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
	SortByWindow sortByWindow;
	FilterByWindow filterByWindow;
	UserDataWindow userDataWindow;
	Stock stock;
	Cart cart;
	
	
};

