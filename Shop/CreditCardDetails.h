#pragma once
#include "PaymentDetails.h"
#include<string>

class CreditCardDetails :
    public PaymentDetails
{
private:
    std::string CardNumber;
    std::string cardHolder;
    std::string expiryDate;
    std::string CVV;
};

