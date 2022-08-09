#pragma once
#include "vector"
#include "Product.h"

class Stock
{
public:
	void filterByCategory(categoryEnum cat);
	void filterBySupplier(supplierEnum sup);
	void sortByNameAsc();
	void sortByNameDesc();
	void sortByPriceAsc();
	void sortByPriceDesc();
	void initialize();
	void unhideAllProducts();
	void printStock();
	void addToStock(Product& product);
	void uploadProduct(std::string line);
	std::string readName(std::string &line);
	int readId(std::string& line);
	double readPrice(std::string& line);
	categoryEnum setCat(std::string& line);
	supplierEnum setSup(std::string& line);

	std::vector<Product> getStock();
	void setStock(std::vector<Product> stock);
	std::vector<Product *> getStockPointers();
	Product* getProductById(int id);

private:
	std::vector<Product> stock;
	void sort(std::vector<Product *>& arr, int l, int r, Comparator & comparator);
	
};

