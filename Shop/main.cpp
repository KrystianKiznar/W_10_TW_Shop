#include <iostream>
#include "Product.h"
#include "Stock.h"
#include "ShoppingHandler.h"
//#include "Cart.h"

int main() {

	ShoppingHandler shoppingHandler;
	shoppingHandler.start();

	//std::vector<Product *> stockPointers = theStock.getStockPointers();

	////theStock.sort(stockPointers, 0, stockPointers.size() - 1, CompareByName());
	//std::cout << "\n                SORTED BY: Name A-Z\n\n" << std::endl;
	//std::cout << " PRODUCT NAME  " << "      PRICE    " << "  CATEGORY"  << "           SUPPLIER\n" << std::endl;
	//
	//for (int i = 0; i < stockPointers.size(); i++) {
	//	stockPointers[i]->print();
	//	std::cout << std::endl;
	//}		

	////theStock.sort(stockPointers, 0, stockPointers.size() - 1, CompareByPrice());

	//std::cout << "\n                SORTED BY: Price ASC\n\n" << std::endl;

	//std::cout << " PRODUCT NAME  " << "      PRICE    " << "  CATEGORY" << "           SUPPLIER\n" << std::endl;

	////for (int i = 0; i < stockPointers.size(); i++) {
	//	stockPointers[i]->print();
	//	std::cout << std::endl;
	//}

	//int a = getchar();

	return 0;
}

