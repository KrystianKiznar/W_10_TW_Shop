#include "Payment.h"

Payment::Payment() {}

Payment::Payment(PaymentDetails paymentDetails, paymentType paymentType) {
	this->paymentDetails = &paymentDetails;
	this->typeOfPayment = paymentType;
}

Payment::~Payment() {
	delete paymentDetails;
}
