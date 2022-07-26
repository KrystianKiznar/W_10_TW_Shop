#pragma once
#include "Window.h"
#include "Cart.h"
#include "Stock.h"

class CartWindow :
    public Window {
public:
    CartWindow();
    CartWindow(Stock* stockPtr, Cart* cartPtr);
    void cartChanges(int choice);
    // Inherited via Window
    virtual state displayWindow() override;

private:
    Stock* stockPtr;
    Cart* cartPtr;
};

