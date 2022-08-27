#include "Order.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>


void Order::saveOrder() {

	std::ofstream file;
	std::string fileName = getFileName();

	file.open(fileName);
	//file.open("orderDetails.csv");
	if (file.is_open() == true) {
		//BASIC INFO ABOUT CLIENT
		file << "USER NAME: ";
		std::string userName = user.getFirstName();
		file << userName<<"\n";
		file << "USER LASTNAME: ";
		std::string userlName = user.getLastName();
		file << userlName<< "\n";
		file << "USER EMAIL: ";
		std::string userEmail = user.getEmail();
		file << userEmail << "\n";
		file << "USER PHON NUMBER: ";
		std::string userNum = user.getPhoneNum();
		file << userNum << "\n";
		file << "\n";

		//ADRESSES
		file << "USER BILLING ADRESS: ";
		file << "STREET: " << user.getBillingAdress().getStreet() << "\n";
		file << "HOUSE: " << user.getBillingAdress().getHouse() << "\n";
		file << "FLAT: " << user.getBillingAdress().getFlat() << "\n";
		file << "ZIPCODE: " << user.getBillingAdress().getZipCode() << "\n";
		file << "CITY: " << user.getBillingAdress().getCity() << "\n";
		file << "\n";


		file << "USER SHIPPING ADRESS: ";
		file << "STREET: " << user.getShippingAdress().getStreet() << "\n";
		file << "HOUSE: " << user.getShippingAdress().getHouse() << "\n";
		file << "FLAT: " << user.getShippingAdress().getFlat() << "\n";
		file << "ZIPCODE: " << user.getShippingAdress().getZipCode() << "\n";
		file << "CITY: " << user.getShippingAdress().getCity() << "\n";

		//CART
		file << "Your cart:\n";
		file << "NAME               PRICE          AMOUNT\n";
		for (auto it = cart.getCart().begin(); it != cart.getCart().end(); it++) {
			file << it->first->name << "  " << it->first->price << "$       " << it->second << "\n";
		}
		file << "Total sum:\n";
		file << cart.sum();
		file.close();
	}
	//std::cout << "The file could not be open!";
}

Order::Order() {}

Order::Order(User us, Cart cart) {
	this->user = us;
	this->cart = cart;
}

void Order::setSusscesful(bool succesful) {
	this->succesful = succesful;
}

void Order::setName(std::string name) {
	user.setName(name);
}

void Order::setLastname(std::string lastname) {
	user.setLastname(lastname);
}

void Order::setEmail(std::string email) {
	user.setEmail(email);
}

void Order::setPhoneNumber(std::string phoneNumber) {
	user.setPhoneNumber(phoneNumber);
}

void Order::setShippingAdress(Adress adress) {
	user.setShippingAdress(adress);
}

void Order::setBillingAdress(Adress adress) {
	user.setBillingAdress(adress);
}

void Order::clearOrder() {
	succesful = false;
	cart = Cart();
	user = User();
}

std::string Order::getDate() {

	//std::string date{};
	auto t = std::time(nullptr);
	auto tm = *std::localtime(&t);

	std::ostringstream oss;
	oss << std::put_time(&tm, "%d-%m-%Y");
	auto date = oss.str();

	return date;
}

std::string Order::getFileName()
{
	std::string fileName{};

	fileName = getDate();
	fileName += '-';
	fileName += user.getFirstName();
	fileName += ".csv";
	return fileName;
}
