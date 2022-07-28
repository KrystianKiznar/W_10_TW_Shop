#include "ListOptionsWindow.h"

ListOptionsWindow::ListOptionsWindow() {
	this->stockPtr = nullptr;
}

ListOptionsWindow::ListOptionsWindow(Stock* stockPtr) {
	this->stockPtr = stockPtr;
}

int ListOptionsWindow::displayWindow() {

	int usersChoice, nextState;

	// print list of choices 
	std::cout << "OPTIONS" << std::endl << std::endl;
	std::cout << "1. Unsorted" << std::endl;
	std::cout << "2. Sorted by names ASC" << std::endl;
	std::cout << "3. Sorted by names DESC" << std::endl;
	std::cout << "4. Sorted by price ASC" << std::endl;
	std::cout << "5. Sorted by price DESC" << std::endl;
	std::cout << "6. Menu" << std::endl;
	std::cout << "7. Exit" << std::endl;

	// read user's choice
	std::cin >> usersChoice;

	// return next state
	switch (usersChoice) {
	case 1:
		nextState = 3; //LIST
		stockPtr->sortByNameAsc();
		break;
	case 2:
		nextState = 3; //LIST
		stockPtr->sortByNameAsc();
		break;
	case 3:
		nextState = 3; //LIST
		stockPtr->sortByNameAsc();
		break;
	case 4:
		nextState = 3; //LIST
		stockPtr->sortByNameAsc();
		break;
	case 5:
		nextState = 3; //LIST
		stockPtr->sortByNameAsc();
		break;
	case 6:
		nextState = 1; //MENU
		break;
	case 7:
		nextState = 0; //EXIT
		break;
	}

	system("pause");

	return nextState;
}
