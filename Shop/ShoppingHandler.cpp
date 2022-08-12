#include "ShoppingHandler.h"

ShoppingHandler::ShoppingHandler() {
	window = nullptr;
	stock = Stock();
	menuWindow = MenuWindow();
	listWindow = ListWindow(&stock, &cart);
	cartWindow = CartWindow(&stock, &cart);
	listOptionsWindow = ListOptionsWindow(&stock);
	sortByWindow = SortByWindow(&stock);
	filterByWindow = FilterByWindow(&stock);
	userDataWindow =UserDataWindow(&order);
	paymentWindow = PaymentWindow(&cart, &order);
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
		case state::filter:
			window = &filterByWindow;
			break;
		case state::sort:
			window = &sortByWindow;
			break;
		case state::userDataWindow:
			window = &userDataWindow;
			break;

		case state::payment:
			window = &paymentWindow;
			break;
		}
		
		currentState= static_cast<state>(window->displayWindow());
	}

}