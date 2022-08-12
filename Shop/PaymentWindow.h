#pragma once
#include "Window.h"
#include "Cart.h"
#include "Order.h"
#include <regex>
#include<string>

class PaymentWindow :
    public Window {

public:
    PaymentWindow();
    PaymentWindow(Cart* cartPtr);
    bool paymentValidation(std::regex x, std::string y);
    PaymentWindow(Cart* cartPtr, Order* order);
    // Inherited via Window
    virtual state displayWindow() override;

    void cancelTheOrder();

private:
    Cart* cartPtr;
    Order* order;

};