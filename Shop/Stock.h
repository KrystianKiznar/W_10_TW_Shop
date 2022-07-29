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
	void sortByNameDesc();
	void sortByPriceAsc();
	void sort(std::vector<Product *>& arr, int l, int r, Comparator & comparator);
	void reverseOrder();
	std::vector<Product> getStock();
	void setStock(std::vector<Product> stock);
	std::vector<Product *> getStockPointers();
	void initialize();

	void addToStock(Product& product);
};

