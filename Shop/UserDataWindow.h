#pragma once
#include "Window.h"
#include <regex>
#include <string>



class UserDataWindow :
    public Window {
public:
    UserDataWindow();
    bool validation(std::regex x,std::string y);


    virtual state displayWindow() override;
};