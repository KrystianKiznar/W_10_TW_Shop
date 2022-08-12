#include "CreditCardDetails.h"

CreditCardDetails::CreditCardDetails(std::string cardNumber, std::string cardHolder, std::string expiryDate, std::string cVV) {
    this->cardNumber = cardNumber;
    this->cardHolder = cardHolder;
    this->expiryDate = expiryDate;
    this->cVV = cVV;
}
