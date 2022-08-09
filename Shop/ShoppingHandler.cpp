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
	state currentState= state::menu; 

	while (currentState!= state::exit) {

		switch (currentState) {
		case state::menu:
			window = &menuWindow;
			break;
		case state::listOptions:
			window = &listOptionsWindow;
			break;
		case state::list:
			window = &listWindow;
			break;
		case state::cart:
			window = &cartWindow;
			break;
		}
		
		currentState= static_cast<state>(window->displayWindow());
	}

}
