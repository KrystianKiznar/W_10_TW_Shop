#pragma once
#include <string>
#include "Adress.h"
class User
{
	std::string firstName;
	std::string lastName;
	std::string email;
	std::string phoneNum;
	Adress shippingAdress;
	Adress billingAdress;

public:
	void setName(std::string name);
	void setLastname(std::string lastname);
	void setEmail(std::string email);
	void setPhoneNumber(std::string phoneNumber);
	void setShippingAdress(Adress adress);
	void setBillingAdress(Adress adress);

	std::string getFirstName();
	std::string getLastName();
	std::string getEmail();
	std::string getPhoneNum();
	Adress getShippingAdress();
	Adress getBillingAdress();
};

