#include "ShoppingHandler.h"

ShoppingHandler::ShoppingHandler() {}

void ShoppingHandler::start() {



	state state = menu; //TODO: Replace with enum

	while (state != exit) {

		switch (state) {
		case menu:
			window = &menuWindow;
			break;
		case list:
			window = &listWindow;
			break;
		case listOptions:
			window = &listOptionsWindow;
			break;
		case cart:
			window = &cartWindow;
			break;
		}

		state = static_cast<ShoppingHandler::state>(window->displayWindow());
	}

}
