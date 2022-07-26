#pragma once
#include"PaymentDetails.h"
#include <string>

class PaypalDetails :
    public PaymentDetails
{
    std::string login;
    std::string passwor;
};

