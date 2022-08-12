#include "PaymentWindow.h"

PaymentWindow::PaymentWindow() {
	this->cartPtr = nullptr;
}

PaymentWindow::PaymentWindow(Cart* cartPtr, Order* order) {
	this->cartPtr = cartPtr;
	this->order = order;
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

	std::string cardNumber, cardHolder, expiryDate, cVVCode;
	std::string username, password;

	system("cls");
	switch (usersChoice) {
	case 1: // Credit card
		//TODO: extract to seperate method
		// Ask for: card number, card holder, expiry date, CVV code
		std::cout << "Card number:\t";
		std::cin >> cardNumber;
		std::cout << std::endl;
		std::cout << "Card holder:\t";
		std::cin >> cardHolder;
		std::cout << std::endl;
		std::cout << "Expiry date:\t";
		std::cin >> expiryDate;
		std::cout << std::endl;
		std::cout << "CVV:\t";
		std::cin >> cVVCode;
		std::cout << std::endl;
		break;
	case 2: // Credit card
		//TODO: extract to seperate method
		// Ask for: user name, password
		std::cout << "Username:\t";
		std::cin >> cardNumber;
		std::cout << std::endl;
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
