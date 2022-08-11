#include "CartWindow.h"
//#include "ShoppingHandler.h"

CartWindow::CartWindow() {
	this->stockPtr = nullptr;
}

CartWindow::CartWindow(Stock* stockPtr, Cart* cartPtr) {
	this->stockPtr = stockPtr;
	this->cartPtr = cartPtr;
}

void CartWindow::cartChanges(int choice) {
	bool isIdCorrect = false;
	int id{};
	while (!isIdCorrect) {
		std::cout << std::endl << std::endl;
		std::cout << "Select id of the product:\t>>";
		id = takeUserInput(1, 10000); //TODO: find max id ->max id is 999
		if (true) { //TODO: validate given id (whether it is in database etc.) (maybe by using Krystian's getProductById() function)
			isIdCorrect = true;
		}
		else {
			std::cout << "Make sure you enter correct id:"; //TODO: make that message consistent with messages returned by takeUserInput() function
		}
	}
	if (choice == 1)
		cartPtr->incrementAmount(id, stockPtr);
	else if (choice == 2)
		cartPtr->dectrementAmount(id, stockPtr);
	else if (choice == 3)
		cartPtr->removeProduct(id, stockPtr);
	else
		std::cout << "ERROR! Try again!";
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
	std::cout << "4. Go to payment" << std::endl;
	std::cout << "5. Menu" << std::endl;
	std::cout << "6. Exit" << std::endl;

	// read user's choice
	int usersChoice = takeUserInput(1, 5);
	state nextState;

	switch (usersChoice) {
	case 1:
		nextState = state::cart;
		cartChanges(usersChoice);
		break;
	case 2:
		nextState = state::cart;
		cartChanges(usersChoice);
		break;
	case 3:
		nextState = state::cart;
		cartChanges(usersChoice);
		break;
	case 4:
		nextState = state::userDataWindow;
		break;
	case 5:
		nextState = state::menu;
		break;
	case 6:
		nextState = state::exit;
		break;
	}

	system("pause");

	return nextState;
}