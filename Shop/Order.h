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
	
};

