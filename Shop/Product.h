#pragma once
#include<string>

enum category {
	AGDRTV,
	booksandstats,
	food,
	cosmetics,
	clothes,
	catNone
};

enum supplier {
	poland,
	china,
	germany,
	none
};

class Product
{
public:
	double price = 0;
	int id = 0;
	std::string name;
	category category;
	supplier supplier;

	bool isHidden();
	void setHidden(bool newValue);

	void print();

private:
	bool hidden = false;
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
		return (left->price - right->price) * 100.0;
	}
};
