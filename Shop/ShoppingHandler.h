#pragma once
#include "Window.h"
#include "MenuWindow.h"
#include "ListWindow.h"
#include "CartWindow.h"
#include "ListOptionsWindow.h"
#include "SortByWindow.h"
#include "FilterByWindow.h"
#include "Cart.h"
#include "PaymentWindow.h"

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
	PaymentWindow paymentWindow;
	Stock stock;
	Cart cart;
	
};

