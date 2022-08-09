#include "Cart.h"

void Cart::addProduct(int idProduct, int amount, Stock* stockPtr) {
	
	Product* myPtr = stockPtr->getProductById(idProduct);

	myCart[myPtr] = amount;
}
