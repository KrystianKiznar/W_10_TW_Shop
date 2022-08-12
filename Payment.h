#pragma once
#include "PaymentDetails.h"


class Payment {
public:

	enum class paymentType {
		//TODO: Maybe we should move that somewhere else? 
		creditCard,
		payPal
	};

	Payment();
	Payment(PaymentDetails paymentDetails, paymentType paymentType);
	~Payment();


private:
	PaymentDetails* paymentDetails;
	paymentType typeOfPayment;
	bool succesful;

};

