#pragma once
#include "Window.h"
#include <regex>
#include <string>
#include "Order.h"

class UserDataWindow :
    public Window {

public:
    UserDataWindow();
    UserDataWindow(Order* order);
    bool validation(std::regex x,std::string& y);

    virtual state displayWindow() override;

    void cancelTheOrder();

private:
    Order* order;

};