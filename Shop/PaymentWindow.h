#pragma once
#include "Window.h"
#include "Cart.h"

class PaymentWindow :
    public Window {

public:
    PaymentWindow();
    PaymentWindow(Cart* cartPtr);
    // Inherited via Window
    virtual state displayWindow() override;

private:
    Cart* cartPtr;

};