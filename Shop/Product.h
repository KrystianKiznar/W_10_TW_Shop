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
	double price = 0;
	int id = 0;
	std::string name;
	category category;
	supplier supplier;

	void print();
};

class Comparator {
public:
	virtual int compare(const Product * left, const Product * right) = 0;
};

class CompareByName : public Comparator {
	virtual int compare(const Product* left, const Product* right) {
		return left->name.compare(right->name);
	}
};

class CompareByPrice : public Comparator {
	virtual int compare(const Product* left, const Product* right) {
		return left->price - right->price;
	}
};
