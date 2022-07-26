#pragma once
#include "User.h"
#include "Cart.h"
#include "Payment.h"

class Order
{
private:
	Cart cart;
	User user;
	Payment payment;
};

