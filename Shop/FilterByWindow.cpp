#include "FilterByWindow.h"

FilterByWindow::FilterByWindow()
{
	this->stockPtr = nullptr;
}

FilterByWindow::FilterByWindow(Stock* stockPtr)
{
	this->stockPtr = stockPtr;
}

state FilterByWindow::displayWindow()
{
	system("cls");
	int usersChoice;
	state nextState;

	// print list of choices 
	std::cout << "OPTIONS" << std::endl << std::endl;
	std::cout << "1. Filter by category: FOOD" << std::endl;
	std::cout << "2. Filter by category: AGD & RTV" << std::endl;
	std::cout << "3. Filter by category: BOOKS & STATIONERY" << std::endl;
	std::cout << "4. Filter by category: CLOTHES" << std::endl;
	std::cout << "5. Filter by category: COSMETICS" << std::endl;
	std::cout << "6. Filter by supplier: POLAND" << std::endl;
	std::cout << "7. Filter by supplier: GERMANY" << std::endl;
	std::cout << "8. Filter by supplier: CHINA" << std::endl;
	std::cout << "9. Menu" << std::endl;
	std::cout << "10. Exit" << std::endl;
	std::cout << "11. Return" << std::endl;
	// read user's choice
	std::cout << std::endl;
	usersChoice = takeUserInput(1, 11);

	switch (usersChoice) {
	case 1:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(categoryEnum::food);
		break;
	case 2:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(categoryEnum::AGDRTV);
		break;
	case 3:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(categoryEnum::booksandstats);
		break;
	case 4:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(categoryEnum::cosmetics);
		break;
	case 5:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(categoryEnum::clothes);
		break;
	case 6:
		nextState = state::list; //LIST
		stockPtr->filterBySupplier(supplierEnum::poland);
		break;
	case 7:
		nextState = state::list; //LIST
		stockPtr->filterBySupplier(supplierEnum::germany);
		break;
	case 8:
		nextState = state::list; //LIST
		stockPtr->filterBySupplier(supplierEnum::china);
		break;
	case 9:
		nextState = state::menu; //MENU
		break;
	case 10:
		nextState = state::exit; //EXIT
		break;
	case 11:
		nextState = state::listOptions; //LIST OPTIONS
		break;
	}

	system("pause");

	return nextState;
}

