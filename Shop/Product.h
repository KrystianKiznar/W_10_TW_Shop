#pragma once
#include<string>
enum category {
	AGDRTV,
	booksandstats,
	food,
	cosmetics,
	clothes
};

enum supplier {
	poland,
	china,
	germany
};

class Product
{
public:
	double price;
	int id;
	std::string name;
	category category;
	supplier supplier;

};

