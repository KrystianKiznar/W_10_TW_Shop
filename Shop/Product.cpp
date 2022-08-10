#include "Product.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

std::string paddingName(int n, std::string name) {

	std::string indent(n - name.length(), ' ');

	return name + indent;
}


std::string paddingPrice(int n, double price) {
	std::string priceString = std::to_string(price);
	std::string newPrice{};

	for (int i = 0; i < priceString.size(); i++) {
		newPrice += priceString[i];
		if (priceString[i] == '.') {
			newPrice += priceString[i+1];
			newPrice += priceString[i+2];
			break;
		}
	}
	//std::cout << newPrice;

	std::string indent(n - newPrice.length(), ' ');

	return newPrice + indent;
}

void Product::showCategory(categoryEnum cat) {
	switch (cat) {
	case categoryEnum::AGDRTV: std::cout << "AGD & RTV"; break;
	case categoryEnum::booksandstats: std::cout << "books & stationery"; break;
	case categoryEnum::food: std::cout << "food"; break;
	case categoryEnum::cosmetics: std::cout << "cosmetics & drugs"; break;
	case categoryEnum::clothes: std::cout << "clothes"; break;
		//default: std::cout << int(cat); break;
	}
}

void Product::showSupplier(supplierEnum sup) {
	switch (sup) {
	case supplierEnum::poland: std::cout << "Poland"; break;
	case supplierEnum::china: std::cout << "China"; break;
	case supplierEnum::germany: std::cout << "Germany"; break;
		//default: std::cout << int(sup); break;
	}
}
void Product::print() {
	
	std::cout << " " << paddingName(20, name) << "$" << paddingPrice(13, price);
	showCategory(category);
	std::cout << "      ID: " << id << "     ";
	showSupplier(supplier);

}

bool Product::isHidden() {
	return hidden;
}

void Product::setHidden(bool newValue) {
	hidden = newValue;
}

int Comparator::compare(const Product* left, const Product* right) {
	return 0;
}
