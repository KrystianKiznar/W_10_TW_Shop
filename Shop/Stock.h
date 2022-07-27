#pragma once
#include "vector"
#include "Product.h"

class Stock
{
private:
	std::vector<Product> stock;
public:
	//std::vector<Product> filterByCategory(category);
	//std::vector<Product> filterBySupplier(supplier);
	void sortByNameAsc();
	void sortByNameDesc();
	void sortByPriceAsc();
	void sortByPriceDesc();
	std::vector<Product> getStock();
};

