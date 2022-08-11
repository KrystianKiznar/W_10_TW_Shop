#include "Cart.h"
#include <iostream>



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
	if (myCart.at(myProduct) == 0)
		myCart.erase(myProduct);
}

double Cart::sum() {
	double total = 0;
	for (auto it = myCart.begin(); it != myCart.end(); it++) {
		total += (it->first->price)*(it->second);
	}
	return total;
}

void Cart::displeyMyCart() {
	std::cout << "       PRODUCT NAME  " << "                     PRICE    " << "       CATEGORY" << "            ID   " << "   SUPPLIER      AMOUNT\n" << std::endl;
	for (auto it = myCart.begin(); it != myCart.end(); it++) {
		it->first->print(); std::cout <<"          " << it->second << std::endl;
	}
}

std::map<Product*, int> Cart::getCart()
{
	return myCart;
}
