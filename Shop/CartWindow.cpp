#include "CartWindow.h"
//#include "ShoppingHandler.h"

state CartWindow::displayWindow() {

	std::cout << "CART" << std::endl << std::endl;

	system("pause");

	return state::menu;
}