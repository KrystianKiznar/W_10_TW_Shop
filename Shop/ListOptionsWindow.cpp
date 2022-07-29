#include "ListOptionsWindow.h"

ListOptionsWindow::ListOptionsWindow() {
	this->stockPtr = nullptr;
}

ListOptionsWindow::ListOptionsWindow(Stock* stockPtr) {
	this->stockPtr = stockPtr;
}

int ListOptionsWindow::displayWindow() {

	system("cls");
	int usersChoice, nextState;

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
	usersChoice = takeUserInput(1, 15);;

	// return next state
	switch (usersChoice) {
	case 1:
		nextState = 3; //LIST
		stockPtr->setFilterByCat(category::catNone);
		stockPtr->setFilterBySupp(supplier::none);
		break;
	case 2:
		nextState = 3; //LIST
		stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(category::catNone);
		stockPtr->setFilterBySupp(supplier::none);
		break;
	case 3:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(category::catNone);
		stockPtr->setFilterBySupp(supplier::none);
		break;
	case 4:
		nextState = 3; //LIST
		stockPtr->sortByPriceAsc();
		stockPtr->setFilterByCat(category::catNone);
		stockPtr->setFilterBySupp(supplier::none);
		break;
	case 5:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(category::catNone);
		stockPtr->setFilterBySupp(supplier::none);
		break;
	case 6:
		nextState = 3; //LIST
		stockPtr->setFilterByCat(category::food);
		break;
	case 7:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(AGDRTV);
		break;
	case 8:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(booksandstats);
		break;
	case 9:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(cosmetics);
		break;
	case 10:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterByCat(clothes);
		break;
	case 11:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterBySupp(poland);
		break;
	case 12:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterBySupp(germany);
		break;
	case 13:
		nextState = 3; //LIST
		//stockPtr->sortByNameAsc();
		stockPtr->setFilterBySupp(china);
		break;
	case 14:
		nextState = 1; //MENU
		//stockPtr->sortByNameAsc();
		break;
	case 15:
		nextState = 0; //EXIT
		//stockPtr->sortByNameAsc();
		break;
	}

	system("pause");

	return nextState;
}
