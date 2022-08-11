#pragma once
#include "Cart.h"
#include "User.h"

class Order
{
	Cart cart;
	User user;
	//Payment payment;
public:
	void saveOrder();
	Order loadOrder(std::string path);
	Order(Cart cart);
};

