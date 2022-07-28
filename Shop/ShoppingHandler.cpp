#include "ShoppingHandler.h"

ShoppingHandler::ShoppingHandler() {
	window = nullptr;
	menuWindow = MenuWindow();
	listWindow = ListWindow();
	cartWindow = CartWindow();
	listOptionsWindow = ListOptionsWindow(&stock);
	stock = Stock();
}

void ShoppingHandler::start() {

	state state = menu; 

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
