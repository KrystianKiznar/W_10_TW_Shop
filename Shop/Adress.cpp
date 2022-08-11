#include "Adress.h"

void Adress::setCity(std::string city) {
	this->city = city;
}

void Adress::setZipCode(std::string zipCode) {
	this->zipCode = zipCode;
}

void Adress::setStreet(std::string street) {
	this->street = street;
}

void Adress::setHouse(std::string house) {
	this->house = house;
}

void Adress::setFlat(std::string flat) {
	this->flat = flat;
}

std::string Adress::getCity()
{
	return city;
}

std::string Adress::getZipCode()
{
	return zipCode;
}

std::string Adress::getStreet()
{
	return street;
}

std::string Adress::getHouse()
{
	return house;
}

std::string Adress::getFlat()
{
	return flat;
}

Adress::Adress()
{
}
