#pragma once
#include<map>
#include "Product.h"
#include "Stock.h"

class Cart
{	
	std::map<Product*, int> myCart;
public:
	void addProduct(int idProduct, int amount, Stock* stockPtr);
	void removeProduct(int idProduct, Stock* stockPtr);
	void incrementAmount(int idProduct, Stock* stockPtr);
	void dectrementAmount(int idProduct, Stock* stockPtr);
	int sum();
};


