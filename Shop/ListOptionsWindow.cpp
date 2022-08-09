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
	std::cout << "2. Sorted by names A-Z" << std::endl;
	std::cout << "3. Sorted by names Z-A" << std::endl;
	std::cout << "4. Sorted by price ASC" << std::endl;
	std::cout << "5. Sorted by price DESC" << std::endl;
	std::cout << "6. Filter by category: FOOD" << std::endl;
	std::cout << "7. Filter by category: AGD & RTV" << std::endl;
	std::cout << "8. Filter by category: BOOKS & STATIONERY" << std::endl;
	std::cout << "9. Filter by category: CLOTHES" << std::endl;
	std::cout << "10. Filter by category: COSMETICS" << std::endl;
	std::cout << "11. Filter by supplier: POLAND" << std::endl;
	std::cout << "12. Filter by supplier: GERMANY" << std::endl;
	std::cout << "13. Filter by supplier: CHINA" << std::endl;
	std::cout << "14. Menu" << std::endl;
	std::cout << "15. Exit" << std::endl;

	// read user's choice
	std::cout << std::endl;
	usersChoice = takeUserInput(1, 15);

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
		break;
	case 4:
		nextState = state::list; //LIST
		stockPtr->sortByPriceAsc();
		break;
	case 5:
		nextState = state::list; //LIST
		break;
	case 6:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(category::food);
		break;
	case 7:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(AGDRTV);
		break;
	case 8:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(booksandstats);
		break;
	case 9:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(cosmetics);
		break;
	case 10:
		nextState = state::list; //LIST
		stockPtr->filterByCategory(clothes);
		break;
	case 11:
		nextState = state::list; //LIST
		stockPtr->filterBySupplier(poland);
		break;
	case 12:
		nextState = state::list; //LIST
		stockPtr->filterBySupplier(germany);
		break;
	case 13:
		nextState = state::list; //LIST
		stockPtr->filterBySupplier(china);
		break;
	case 14:
		nextState = state::menu; //MENU
		break;
	case 15:
		nextState = state::exit; //EXIT
		break;
	}

	system("pause");

	return nextState;
}
