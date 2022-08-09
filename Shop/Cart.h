#pragma once
#include<map>
#include "Product.h"
#include "Stock.h"

class Cart
{	
	std::map<Product*, int> myCart;
public:
	void addProduct(int idProduct, int amount, Stock* stockPtr);
};

