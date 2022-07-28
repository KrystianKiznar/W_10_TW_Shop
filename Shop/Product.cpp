#include "Product.h"
#include <iostream>

void Product::print() {
	std::cout << name << ", " << category << ", " << price << ", " << id << ", " << supplier;
	//enums -> names of category/supplier, not enum number
	//user experience: title, spaces, names of the category 

}
