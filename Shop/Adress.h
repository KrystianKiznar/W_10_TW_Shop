#pragma once
#include <string>
class Adress
{
private:
	std::string city;
	std::string zipCode;
	std::string street;
	std::string house;
	std::string flat;
public:
	void setCity(std::string city);
	void setZipCode(std::string zipCode);
	void setStreet(std::string street);
	void setHouse(std::string house);
	void setFlat(std::string flat);
};

