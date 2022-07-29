#include "ListWindow.h"

ListWindow::ListWindow() {
	this->stockPtr = nullptr;
}

ListWindow::ListWindow(Stock* stockPtr) {
	this->stockPtr = stockPtr;
}

int ListWindow::displayWindow() {

	system("cls");
	std::cout << "LIST OF PRODUCTS" << std::endl << std::endl;

	std::cout << "\n                SORTED BY: Name A-Z\n\n" << std::endl;
	std::cout << " PRODUCT NAME  " << "      PRICE    " << "  CATEGORY" << "           SUPPLIER\n" << std::endl;

	if (stockPtr->getFilterByCat() == category::catNone && stockPtr->getFilterBySupp() == supplier::none) {
		for (int i = 0; i < stockPtr->getStock().size(); i++) {
			stockPtr->getStock()[i].print();
			std::cout << std::endl;
		}
	} else if (stockPtr->getFilterByCat() != category::catNone) {
		std::vector<Product> filteredStock = stockPtr->filterByCategory(stockPtr->getStock(), stockPtr->getFilterByCat());
		for (int i = 0; i < filteredStock.size(); i++) {
			filteredStock[i].print();
			std::cout << std::endl;
		}
	} else if (stockPtr->getFilterBySupp() != supplier::none) {
		std::vector<Product> filteredStock = stockPtr->filterBySupplier(stockPtr->getStock(), stockPtr->getFilterBySupp());
		for (int i = 0; i < filteredStock.size(); i++) {
			filteredStock[i].print();
			std::cout << std::endl;
		}
	}

	system("pause");

	return 0;
}