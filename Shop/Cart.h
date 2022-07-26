#pragma once
#include<iostream>
#include<map>
#include "Product.h"

class Cart
{
private:
	std::map<Product, int> cart;
public:
	void addProduct(int idProduct);
	void removeProduct(int idProduct);
	void increment(int idProduct);
	void decrement(int idProduct);
	void sum();
};

