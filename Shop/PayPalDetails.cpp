#include "PayPalDetails.h"

PayPalDetails::PayPalDetails() {}

PayPalDetails::PayPalDetails(std::string login, std::string password) {
    this->login = login;
    this->password = password;
}
