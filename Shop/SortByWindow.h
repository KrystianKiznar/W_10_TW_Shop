#pragma once
#include "Window.h"
#include "Stock.h"

class SortByWindow :
    public Window{
public:
    SortByWindow();

    SortByWindow(Stock* stockPtr);

    // Inherited via Window
    virtual state displayWindow() override;
private:
    Stock* stockPtr;
};

