#pragma once
#include "Window.h"
#include "Stock.h"
#include "Cart.h"

class ListWindow :
    public Window {
public:
    ListWindow();
    ListWindow(Stock* stockPtr, Cart* cartPtr);
    // Inherited via Window
    virtual state displayWindow() override;

private:
    Stock* stockPtr;
    Cart* cartPtr;

    void addToCart();
};

