#pragma once
#include "vector"
#include "Product.h"

class Stock
{
private:
	std::vector<Product> stock;
public:
	std::vector<Product> filterByCategory(std::vector<Product> stock, category cat);
	std::vector<Product> filterBySupplier(std::vector<Product> stock, supplier sup);
	void sortByNameAsc();
	void sortByNameDesc();
	void sortByPriceAsc();
	void sortByPriceDesc();
	std::vector<Product> getStock();
};

