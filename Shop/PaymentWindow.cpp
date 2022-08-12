#include "PaymentWindow.h"

PaymentWindow::PaymentWindow() {
	this->cartPtr = nullptr;
}

PaymentWindow::PaymentWindow(Cart* cartPtr, Order* order) {
	this->cartPtr = cartPtr;
	this->order = order;
}
bool PaymentWindow::paymentValidation(std::regex x, std::string y)
{
	getline(std::cin, y);

	if (std::regex_match(y, x))
		return true;
	else
		return false;
}

state PaymentWindow::displayWindow() {

	state nextState = state::payment;

	system("cls");
	std::cout << "PAYMENT" << std::endl << std::endl;
	
	// Display total cost
	std::cout << "Total cost: " <<cartPtr->sum() << std::endl << std::endl;

	// Ask for payment method
	std::cout << std::endl << std::endl << "CHOOSE PAYMENT METHOD" << std::endl << std::endl;
	std::cout << "1. Credit card" << std::endl;
	std::cout << "2. Paypal" << std::endl;
	std::cout << "3. Abort" << std::endl;

	// read user's choice
	std::cout << std::endl;
	int usersChoice = takeUserInput(1, 3);

	std::string cardNumber, cardHolderName, cardHolderLastName, expiryDate, cVVCode;
	std::string username, password;
	std::regex nameReg("[A-Z]{0,1}[a-z]{1,40}");
	std::regex cardNumberReg("\\d{4}\\s{0,1}\\d{4}\\s{0,1}\\d{4}\\s{0,1}\\d{4}");
	std::regex expiryDateReg("\\d{2}/{1}\\d{2}");
	std::regex cVVCodeReg("\\d{3}");
	bool isValid = false;
	int n = 0;

	system("cls");
	switch (usersChoice) {
	case 1: // Credit card
		//TODO: extract to seperate method
		// Ask for: card number, card holder, expiry date, CVV code


		while (isValid == PaymentWindow::paymentValidation(cardNumberReg, cardNumber)) {
			std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "Card number:\t";
			}
			else {
				std::cout << "Card number:\t";
			}
			n++;
		}
		n = 0;

		while (isValid == PaymentWindow::paymentValidation(nameReg, cardHolderName)) {
			std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "Card holder name:\t";
			}
			else {
				std::cout << "Card holder name:\t";
			}
			n++;
		}
		n = 0;
		while (isValid == PaymentWindow::paymentValidation(nameReg, cardHolderLastName)) {
			std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "Card holder last name:\t";
			}
			else {
				std::cout << "Card holder last name:\t";
			}
			n++;
		}
		n = 0;
		while (isValid == PaymentWindow::paymentValidation(expiryDateReg, expiryDate)) {
			std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "Expiry date:\t";
			}
			else {
				std::cout << "Expiry date:\t";
			}
			n++;
		}
		n = 0;
		while (isValid == PaymentWindow::paymentValidation(cVVCodeReg, cVVCode)) {
			std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "CVV:\t";
			}
			else {
				std::cout << "CVV:\t";
			}
			n++;
		}

		std::cout << std::endl;
		break;
	case 2: // Credit card
		//TODO: extract to seperate method
		// Ask for: user name, password
		n = 0;
		while (isValid == PaymentWindow::paymentValidation(cardNumberReg, cardNumber)) {
			std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "Username:\t";
			}
			else {
				std::cout << "Username:\t";
			}
			n++;
		}

		std::cout << "Password:\t";
		std::cin >> password;
		std::cout << std::endl;
		break;
	case 3:
		nextState = state::menu;
	}

	// choose next state 
	system("cls");
	if (nextState != state::menu) { // otherwise it means that user has chosen the 'abort' option
		std::cout << "OPTIONS" << std::endl << std::endl;
		std::cout << "1. Complete transaction (pay)" << std::endl;
		std::cout << "2. Abort" << std::endl;

		// read user's choice
		std::cout << std::endl;
		usersChoice = takeUserInput(1, 2);

		switch (usersChoice) {
		case 1:
			nextState = state::menu;
			// determine whether order has been succesfully placed or not
			break;
		case 2:
			nextState = state::menu;
			// set appropriate variable (succesfullyPlaced) as false 
			break;
		}
	}

	system("pause");

	return nextState;
}

void PaymentWindow::cancelTheOrder() {
	order->setSusscesful(false);
	//TODO: save order to the file
	order->clearOrder();
}
