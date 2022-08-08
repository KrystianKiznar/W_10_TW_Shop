#pragma once
#include "vector"
#include "Product.h"

class Stock
{
public:
	void filterByCategory(category cat);
	void filterBySupplier(supplier sup);
	void sortByNameAsc();
	void sortByNameDesc();
	void sortByPriceAsc();
	void initialize();
	void unhideAllProducts();
	void printStock();
	void addToStock(Product& product);

	std::vector<Product> getStock();
	void setStock(std::vector<Product> stock);
	std::vector<Product *> getStockPointers();

private:
	std::vector<Product> stock;
	void sort(std::vector<Product *>& arr, int l, int r, Comparator & comparator);
	void reverseOrder();
};

