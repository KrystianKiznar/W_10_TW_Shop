#include "ShoppingHandler.h"

ShoppingHandler::ShoppingHandler() {
	window = nullptr;
	stock = Stock();
	menuWindow = MenuWindow();
	listWindow = ListWindow(&stock);
	cartWindow = CartWindow();
	listOptionsWindow = ListOptionsWindow(&stock);
}

void ShoppingHandler::start() {

	stock.initialize();
	state state = menu; 

	while (state != exit) {

		switch (state) {
		case menu:
			window = &menuWindow;
			break;
		case listOptions:
			window = &listOptionsWindow;
			break;
		case list:
			window = &listWindow;
			break;
		case cart:
			window = &cartWindow;
			break;
		}

		state = static_cast<ShoppingHandler::state>(window->displayWindow());
	}

}
