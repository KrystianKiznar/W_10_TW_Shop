#pragma once
#include "PaymentDetails.h"
#include <string>

class CreditCardDetails :
    public PaymentDetails {

public:
    CreditCardDetails(std::string cardNumber, std::string cardHolder, std::string expiryDate, std::string cVV);

private:
    std::string cardNumber;
    std::string cardHolder;
    std::string expiryDate;
    std::string cVV;

};


