#include "ListWindow.h"
//#include "ShoppingHandler.h"

ListWindow::ListWindow() {
	this->stockPtr = nullptr;
}

ListWindow::ListWindow(Stock* stockPtr) {
	this->stockPtr = stockPtr;
}

state ListWindow::displayWindow() {

	system("cls");
	std::cout << "LIST OF PRODUCTS" << std::endl << std::endl;

	//std::cout << "\n                SORTED BY: Name A-Z\n\n" << std::endl;
	std::cout << " PRODUCT NAME  " << "      PRICE    " << "  CATEGORY" << "           SUPPLIER\n" << std::endl;

	stockPtr->printStock();

	system("pause");

	return state::menu;
}