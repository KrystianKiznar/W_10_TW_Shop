#include "Stock.h"
#include <algorithm>
#include <utility>
#include <iostream>
#include <vector>
#include "Product.h"
#include <fstream>
#include <string>
#include <stdlib.h>


std::vector<Product> Stock::getStock()
{
    return stock;
}

void Stock::setStock(std::vector<Product> stock) {
    this->stock = stock;
}

std::vector<Product *> Stock::getStockPointers()
{
    std::vector<Product*> pointersVector = std::vector<Product*>(stock.size());
    for (int i = 0; i < stock.size(); i++) {
        pointersVector[i] = &stock[i];
	}
    return pointersVector;
}
 

void Stock::addToStock(Product& product) {
    stock.push_back(product);//czy ta funkcja jest potrzebna przy odczytywaniu danych z pliku?
}							 //dlaczego przekazujemy tu adres?

void Stock::uploadProduct(std::string line) {
	Product newProduct;
	newProduct.name = readName(line);
	newProduct.id = readId(line);
	newProduct.price = readPrice(line);
	newProduct.category = setCat(line);	
	newProduct.supplier = setSup(line);
	
	stock.push_back(newProduct);
}

std::string Stock::readName(std::string &line)
{
	std::string name;
	
	do {
		name += line[0];
		line.erase(0, 1);
	} while (line[0] != ',');

	line.erase(0, 1);
	return name;
}

int Stock::readId(std::string& line)
{
	std::string id;
	do {
		id += line[0];
		line.erase(0, 1);
	} while (line[0] != ','&& line.size() != 0);

	line.erase(0, 1);
	return stoi(id);
}

double Stock::readPrice(std::string& line)
{
	std::string price;
	do {
		price += line[0];
		line.erase(0, 1);
	} while (line[0] != ',');

	line.erase(0, 1);
	return  strtod(price.c_str(), NULL);
}

category Stock::setCat(std::string& line)
{
	int cat = readId(line);
	switch (cat) {
	case 0:
		return AGDRTV;
	case 1:
		return booksandstats;
	case 2:
		return food;
	case 3:
		return cosmetics;
	case 4:
		return clothes;
	}
}

supplier Stock::setSup(std::string& line)
{
	int cat = readId(line);
	switch (cat) {
	case 0:
		return poland;
	case 1:
		return china;
	case 2:
		return germany;
	}
}

void Stock::sortByNameAsc() {

	std::vector<Product> newStock = stock;

	// wektor produktow -> wektor wskaznikow
	std::vector<Product*> stockPointers = getStockPointers();

	//sortowanie
	sort(stockPointers, 0, stockPointers.size() - 1, CompareByName());

	// wektor wskaznikow -> wektor produktow
	for (int i = 0; i < stockPointers.size(); i++) {
		newStock[i] = *stockPointers[i];
	}

	stock = newStock;
}

void Stock::sortByNameDesc() {

	std::vector<Product> newStock = stock;

	// wektor produktow -> wektor wskaznikow
	std::vector<Product*> stockPointers = getStockPointers();

	//sortowanie
	sort(stockPointers, 0, stockPointers.size() - 1, CompareByName());

	//odwrócenie kolejności
	std::reverse(stockPointers.begin(), stockPointers.end());

	// wektor wskaznikow -> wektor produktow
	for (int i = 0; i < stockPointers.size(); i++) {
		newStock[i] = *stockPointers[i];
	}

	stock = newStock; 
}


void Stock::sortByPriceAsc() {
	std::vector<Product> newStock = stock;

	// wektor produktow -> wektor wskaznikow
	std::vector<Product*> stockPointers = getStockPointers();

	//sortowanie
	sort(stockPointers, 0, stockPointers.size() - 1, CompareByPrice());

	// wektor wskaznikow -> wektor produktow
	for (int i = 0; i < stockPointers.size(); i++) {
		newStock[i] = *stockPointers[i];
    }

	stock = newStock;
}

void Stock::sortByPriceDesc() {
	std::vector<Product> newStock = stock;

	// wektor produktow -> wektor wskaznikow
	std::vector<Product*> stockPointers = getStockPointers();

	//sortowanie
	sort(stockPointers, 0, stockPointers.size() - 1, CompareByPrice());

	//odwrócenie kolejności
	std::reverse(stockPointers.begin(), stockPointers.end());

	// wektor wskaznikow -> wektor produktow
	for (int i = 0; i < stockPointers.size(); i++) {
		newStock[i] = *stockPointers[i];
	}

	stock = newStock;
}

void Stock::sort(std::vector<Product*>& arr, int l, int r, Comparator& comparator) {
	if (l < r) {
		int pivot = l;
		int i = l;
		int j = r;
		while (i < j) {
			while (comparator.compare(arr[i], arr[pivot]) <= 0 && i < r)
				i++;
			while (comparator.compare(arr[j], arr[pivot]) > 0)
				j--;
			if (i < j) {
				std::swap(arr[i], arr[j]);
			}
		}
		std::swap(arr[pivot], arr[j]);
		sort(arr, l, j - 1, comparator);
		sort(arr, j + 1, r, comparator);
	}
}

void Stock::filterByCategory(categoryEnum cat) {

	for (int i = 0; i < stock.size(); i++) {
		if (stock[i].category != cat) 
			stock[i].setHidden(true);
	}

}

void Stock::filterBySupplier(supplierEnum sup) {

	for (int i = 0; i < stock.size(); i++) {
		if (stock[i].supplier != sup)
			stock[i].setHidden(true);
	}
}

void Stock::initialize() {
	Product p1;
	p1.name = "Bread";
	p1.id = 100;
	p1.price = 1.14;
	p1.category = categoryEnum::food;
	p1.supplier = supplierEnum::poland;
	stock.push_back(p1);

	Product p2;
	p2.name = "Apple";
	p2.id = 101;
	p2.price = 0.50;
	p2.category = categoryEnum::food;
	p2.supplier = supplierEnum::china;
	stock.push_back(p2);

	Product p3;
	p3.name = "Milk";
	p3.id = 102;
	p3.price = 2.20;
	p3.category = categoryEnum::food;
	p3.supplier = supplierEnum::germany;
	stock.push_back(p3);

	Product p4;
	p4.name = "Cheese";
	p4.id = 103;
	p4.price = 3.50;
	p4.category = categoryEnum::food;
	p4.supplier = supplierEnum::poland;
	stock.push_back(p4);

	Product p5;
	p5.name = "Chips";
	p5.id = 104;
	p5.price = 3.50;
	p5.category = categoryEnum::food;
	p5.supplier = supplierEnum::poland;
	stock.push_back(p5);

	Product p6;
	p6.name = "TV";
	p6.id = 105;
	p6.price = 999.99;
	p6.category = categoryEnum::AGDRTV;
	p6.supplier = supplierEnum::china;
	stock.push_back(p6);

	Product p7;
	p7.name = "MP3";
	p7.id = 106;
	p7.price = 9.99;
	p7.category = categoryEnum::AGDRTV;
	p7.supplier = supplierEnum::china;
	stock.push_back(p7);

	Product p8;
	p8.name = "PlayStation";
	p8.id = 107;
	p8.price = 2999.99;
	p8.category = categoryEnum::AGDRTV;
	p8.supplier = supplierEnum::china;
	stock.push_back(p8);

	Product p9;
	p9.name = "Headphones";
	p9.id = 108;
	p9.price = 89.99;
	p9.category = categoryEnum::AGDRTV;
	p9.supplier = supplierEnum::poland;
	stock.push_back(p9);

	Product p10;
	p10.name = "Mouse";
	p10.id = 109;
	p10.price = 49.99;
	p10.category = categoryEnum::AGDRTV;
	p10.supplier = supplierEnum::germany;
	stock.push_back(p10);

	Product p11;
	p11.name = "Harry Potter";
	p11.id = 110;
	p11.price = 15.15;
	p11.category = categoryEnum::booksandstats;
	p11.supplier = supplierEnum::germany;
	stock.push_back(p11);

	Product p12;
	p12.name = "Star Wars";
	p12.id = 111;
	p12.price = 15.15;
	p12.category = categoryEnum::booksandstats;
	p12.supplier = supplierEnum::poland;
	stock.push_back(p12);

	Product p13;
	p13.name = "Pencil";
	p13.id = 112;
	p13.price = 0.85;
	p13.category = categoryEnum::booksandstats;
	p13.supplier = supplierEnum::germany;
	stock.push_back(p13);

	Product p14;
	p14.name = "Pen";
	p14.id = 113;
	p14.price = 1.15;
	p14.category = categoryEnum::booksandstats;
	p14.supplier = supplierEnum::china;
	stock.push_back(p14);

	Product p15;
	p15.name = "White Tshirt";
	p15.id = 114;
	p15.price = 15.15;
	p15.category = categoryEnum::clothes;
	p15.supplier = supplierEnum::poland;
	stock.push_back(p15);

	Product p16;
	p16.name = "Dress";
	p16.id = 115;
	p16.price = 30.99;
	p16.category = categoryEnum::clothes;
	p16.supplier = supplierEnum::germany;
	stock.push_back(p16);

	Product p17;
	p17.name = "Kubotas";
	p17.id = 116;
	p17.price = 3.01;
	p17.category = categoryEnum::clothes;
	p17.supplier = supplierEnum::china;
	stock.push_back(p17);

	Product p18;
	p18.name = "Shampoo";
	p18.id = 117;
	p18.price = 3.99;
	p18.category = categoryEnum::cosmetics;
	p18.supplier = supplierEnum::poland;
	stock.push_back(p18);

	Product p19;
	p19.name = "Soap";
	p19.id = 118;
	p19.price = 1.01;
	p19.category = categoryEnum::cosmetics;
	p19.supplier = supplierEnum::germany;
	stock.push_back(p19);

	Product p20;
	p20.name = "Shower gel";
	p20.id = 119;
	p20.price = 2.30;
	p20.category = categoryEnum::cosmetics;
	p20.supplier = supplierEnum::china;
	stock.push_back(p20);

	std::fstream path;
	path.open("database.csv");
	std::string line = "";
	
	while (true) {
		std::getline(path, line);
		if (line != "")
			uploadProduct(line);
		else
			break;
	}
	path.close();
}

void Stock::unhideAllProducts() {
	for (int i = 0; i < stock.size(); i++) {
		stock[i].setHidden(false);
	}
}

void Stock::printStock() {
	for (int i = 0; i < stock.size(); i++) {
		if (!stock[i].isHidden()) {
			stock[i].print();
			std::cout << std::endl;
		}
	}
}
