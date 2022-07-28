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
	void sort(std::vector<Product *>& arr, int l, int r, Comparator & comparator);
	void reveseOrder();
	std::vector<Product> getStock();
	std::vector<Product *> getStockPointers();

	void addToStock(Product& product);
};

