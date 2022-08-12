#pragma once
#include "Cart.h"
#include "User.h"

class Order
{
	Cart cart;
	User user;
	//Payment payment;
	bool succesful;

public:
	void saveOrder();
	Order loadOrder(std::string path);
	Order();
	Order(User us, Cart cart);

	void setSusscesful(bool succesful);
	void setName(std::string name);
	void setLastname(std::string lastname);
	void setEmail(std::string email);
	void setPhoneNumber(std::string phoneNumber);
	void setShippingAdress(Adress adress);
	void setBillingAdress(Adress adress);

	void clearOrder();
	
};

