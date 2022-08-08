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

void Product::print() {
	
	std::cout << " " << paddingName(40, name) << "$" << paddingPrice(13, price) << category << "      ID: " << id << "     " << supplier;
	//enums -> names of category/supplier, not enum number
	//user experience: title, spaces, names of the category 

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
