#pragma once
#include "Window.h"
#include "Stock.h"

class FilterByWindow :
    public Window{
public:
    FilterByWindow();

    FilterByWindow(Stock* stockPtr);

    // Inherited via Window
    virtual state displayWindow() override;
private:
    Stock* stockPtr;

};

