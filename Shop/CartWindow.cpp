#include "CartWindow.h"
//#include "ShoppingHandler.h"

CartWindow::CartWindow() {
	this->stockPtr = nullptr;
}

CartWindow::CartWindow(Stock* stockPtr, Cart* cartPtr) {
	this->stockPtr = stockPtr;
	this->cartPtr = cartPtr;
}

state CartWindow::displayWindow() {

	system("cls");
	std::cout << "YOUR CART\n" << std::endl << std::endl;
	cartPtr->displeyMyCart();
	double total = cartPtr->sum();

	std::cout << "\nTOTAL:       " << total <<"$" << std::endl;

	// print list of choices 
	std::cout << "\nOPTIONS" << std::endl << std::endl;
	std::cout << "1. Increment amount of chosen product" << std::endl;
	std::cout << "2. Decrement amount of chosen product" << std::endl;
	std::cout << "3. Remove product from the cart" << std::endl;
	std::cout << "4. Menu" << std::endl;
	std::cout << "5. Exit" << std::endl;

	// read user's choice
	int usersChoice = takeUserInput(1, 5);
	state nextState;

	switch (usersChoice) {
	case 1:
		nextState = state::cart;
		//int id = takeUserInput(100, 999);
		//cartPtr->incrementAmount(id, stockPtr);
		break;
	case 2:
		nextState = state::cart;

		break;
	case 3:
		nextState = state::cart;

		break;
	case 4:
		nextState = state::menu;
		break;
	case 5:
		nextState = state::exit;
		break;
	}

	system("pause");

	return nextState;
}