#include "ListWindow.h"

ListWindow::ListWindow() {
	this->stockPtr = nullptr;
}

ListWindow::ListWindow(Stock* stockPtr) {
	this->stockPtr = stockPtr;
}

state ListWindow::displayWindow() {

	system("cls");
	std::cout << "LIST OF PRODUCTS" << std::endl << std::endl;

	//std::cout << "\n                SORTED BY: Name A-Z\n\n" << std::endl;
	std::cout << "       PRODUCT NAME  " << "                     PRICE    " << "       CATEGORY" << "            ID   "<< "   SUPPLIER\n" << std::endl;

	stockPtr->printStock();

	// print list of choices 
	std::cout << std::endl << std::endl << "OPTIONS" << std::endl << std::endl;
	std::cout << "1. Add product to cart" << std::endl;
	std::cout << "2. Display cart" << std::endl;
	std::cout << "3. Menu" << std::endl;
	std::cout << "4. Exit" << std::endl;

	// read user's choice
	std::cout << std::endl;
	int usersChoice = takeUserInput(1, 5);
	state nextState;

	switch (usersChoice) {
	case 1:
		nextState = state::list;
		addToCart();
		break;
	case 2:
		nextState = state::cart;
		break;
	case 3:
		nextState = state::menu;
		break;
	case 4:
		nextState = state::exit;
		break;
	}

	system("pause");

	return nextState;
}

void ListWindow::addToCart() {

	int id;
	int quantity;

	bool isIdCorrect = false, isQuantityCorrect = false;

	while (!isIdCorrect) {
		std::cout << std::endl << std::endl;
		std::cout << "Select id of the product:\t>>";
		id = takeUserInput(1,10000); //TODO: find max id
		if (true) { //TODO: validate given id (whether it is in database etc.) (maybe by using Krystian's getProductById() function)
			isIdCorrect = true;
		} else {
			std::cout << "Make sure you enter correct id:"; //TODO: make that message consistent with messages returned by takeUserInput() function
		}
	}
	

	while (!isQuantityCorrect) {
		std::cout << std::endl << std::endl;
		std::cout << "Select quantity of the product:\t>>";
		quantity = takeUserInput(1, 100);
		if (true) { //TODO: validate given id (whether it is in database etc.) (maybe by using Krystian's getProductById() function)
			isQuantityCorrect = true;
		} 
	}

	std::cout <<std::endl << "Item has been added";
	//TODO: wait
	//TODO: add product to the actual Cart object (Krystian's functions)

}
