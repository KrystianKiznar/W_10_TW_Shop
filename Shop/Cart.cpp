#include "Cart.h"



void Cart::addProduct(int idProduct, int amount, Stock* stockPtr) {
	
	Product* myProduct = stockPtr->getProductById(idProduct);

	myCart[myProduct] = amount;
}

void Cart::removeProduct(int idProduct, Stock* stockPtr) {
	Product* myProduct = stockPtr->getProductById(idProduct);
	
	myCart.erase(myProduct);
}

void Cart::incrementAmount(int idProduct, Stock* stockPtr) {
	Product* myProduct = stockPtr->getProductById(idProduct);
	
	myCart.at(myProduct)++;
}

void Cart::dectrementAmount(int idProduct, Stock* stockPtr) {
	Product* myProduct = stockPtr->getProductById(idProduct);

	myCart.at(myProduct)--;
}

int Cart::sum() {
	int total = 0;
	for (auto it = myCart.begin(); it != myCart.end(); it++) {
		total += (it->first->price)*(it->second);
	}
	return total;
}
