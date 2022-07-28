#pragma once
#include "Window.h"
#include "Stock.h"

class ListOptionsWindow :
    public Window {
public:
    ListOptionsWindow();
    ListOptionsWindow(Stock* stockPtr);
    // Inherited via Window
    virtual int displayWindow() override;

private:
    Stock* stockPtr;
};

