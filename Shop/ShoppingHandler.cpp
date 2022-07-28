#include "ShoppingHandler.h"

ShoppingHandler::ShoppingHandler() {}

void ShoppingHandler::start() {

	int state = 0; //TODO: Replace with enum

	while (state != -1) {

		switch (state) {
		case 0: // MENU
			window = &menuWindow;
			break;
		case 1: // LIST
			window = &listWindow;
			break;
		case 2: // CART
			window = &cartWindow;
			break;
		}

		state = window->displayWindow();
	}

}
