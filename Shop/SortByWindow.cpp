#include "Windows.h"
#include "SortByWindow.h"


SortByWindow::SortByWindow()
{
	this->stockPtr = nullptr;
}
SortByWindow::SortByWindow(Stock* stockPtr)
{
	this->stockPtr = stockPtr;
}


state SortByWindow::displayWindow()
{
	system("cls");
	int usersChoice; 
	state nextState;

	// print list of choices 
	std::cout << "OPTIONS" << std::endl << std::endl;
	std::cout << "1. Unsorted" << std::endl;
	std::cout << "2. Sorted by names A-Z" << std::endl;
	std::cout << "3. Sorted by names Z-A" << std::endl;
	std::cout << "4. Sorted by price ASC" << std::endl;
	std::cout << "5. Sorted by price DESC" << std::endl;
	std::cout << "6. Menu" << std::endl;
	std::cout << "7. Exit" << std::endl;
	std::cout << "8. Return" << std::endl;

	// read user's choice
	std::cout << std::endl;
	usersChoice = takeUserInput(1, 8);
	
	switch (usersChoice) {
	case 1:
		nextState = state::list; //LIST
		break;
	case 2:
		nextState = state::list; //LIST
		stockPtr->sortByNameAsc();
		break;
	case 3:
		nextState = state::list; //LIST
		stockPtr->sortByNameDesc();
		break;
	case 4:
		nextState = state::list; //LIST
		stockPtr->sortByPriceAsc();
		break;
	case 5:
		nextState = state::list; //LIST
		stockPtr->sortByPriceDesc();
		break;
	
	case 6:
		nextState = state::menu; //MENU
		break;
	case 7:
		nextState = state::exit; //EXIT
		break;
	case 8:
		nextState = state::listOptions; //LIST OPTIONS
		break;
	}

	system("pause");

	return nextState;
}