#pragma once
#include "Window.h"
#include "Cart.h"
#include <regex>
#include<string>

class PaymentWindow :
    public Window {

public:
    PaymentWindow();
    PaymentWindow(Cart* cartPtr);
    bool paymentValidation(std::regex x, std::string y);
    // Inherited via Window
    virtual state displayWindow() override;

private:
    Cart* cartPtr;

};