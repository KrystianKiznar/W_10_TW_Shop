#include "Order.h"
#include <fstream>


void Order::saveOrder() {

	std::ofstream file;
	file.open("orderDetails.csv");
	if (file.is_open() == true) {
		file << "USER NAME: ";
		std::string userName = user.getFirstName();
		file << userName<<"\n";
		file << "USER LASTNAME: ";
		std::string userName = user.getLastName();
		file << userName<< "\n";
		file << "USER EMAIL: ";
		std::string userEmail = user.getEmail();
		file << userEmail << "\n";
		file << "USER PHON NUMBER: ";
		std::string userNum = user.getPhoneNum();
		file << userNum << "\n";

		//user.getAdress i zapisz do pliku


		
		file.close();
	}

	//	file.open();
	//	string name;
	//
	//	name = user.getFirstName()
	//	file.write(name)
}

Order::Order(Cart cart)
{
	this->cart = cart;
}
