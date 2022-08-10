#pragma once
#include "Window.h"
#include "Stock.h"

class ListWindow :
    public Window {
public:
    ListWindow();
    ListWindow(Stock* stockPtr);
    // Inherited via Window
    virtual state displayWindow() override;

private:
    Stock* stockPtr;

    void addToCart();
};

