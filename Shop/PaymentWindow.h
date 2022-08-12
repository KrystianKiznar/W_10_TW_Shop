#pragma once
#include "Window.h"
#include "Cart.h"
#include "Order.h"

class PaymentWindow :
    public Window {

public:
    PaymentWindow();
    PaymentWindow(Cart* cartPtr, Order* order);
    // Inherited via Window
    virtual state displayWindow() override;

private:
    Cart* cartPtr;
    Order* order;

};