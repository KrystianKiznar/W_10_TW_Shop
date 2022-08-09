#include "ListOptionsWindow.h"
//#include "ShoppingHandler.h"

ListOptionsWindow::ListOptionsWindow() {
	this->stockPtr = nullptr;
}

ListOptionsWindow::ListOptionsWindow(Stock* stockPtr) {
	this->stockPtr = stockPtr;
}

state ListOptionsWindow::displayWindow() {

	system("cls");
	int usersChoice; 
	state nextState;

	// print list of choices 
	std::cout << "OPTIONS" << std::endl << std::endl;
	std::cout << "1. Unsorted" << std::endl;
	std::cout << "2. Sorted" << std::endl;
	std::cout << "3. Filter by supplier or category" << std::endl;
	std::cout << "4. Menu" << std::endl;
	std::cout << "5. Exit" << std::endl;

	// read user's choice
	std::cout << std::endl;
	usersChoice = takeUserInput(1, 5);

	switch (usersChoice) {
	case 1:
		nextState = state::list; 
		break;
	case 2:
		nextState = state::sort; 
		break;

	case 3:
		nextState = state::filter; 
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
