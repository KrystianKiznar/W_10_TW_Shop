#pragma once
#include "PaymentDetails.h"
#include <string>

class PayPalDetails :
    public PaymentDetails {

public:
    PayPalDetails();
    PayPalDetails(std::string login, std::string password);

private:
    std::string login;
    std::string password;
};

