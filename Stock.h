#pragma once
#include "vector"
#include "Product.h"

class Stock
{
private:
	std::vector<Product> stock;
public:
	std::vector<Product> filterByCategory(enum category);
	std::vector<Product> filterBySupplier(enum supplier);
	void sortByNameAsc();
	void sort(std::vector<int>& arr, int l, int r);
	void reveseOrder();
	std::vector<Product> getStock();
};

