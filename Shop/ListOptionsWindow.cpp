#include "ListOptionsWindow.h"

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
		nextState = 1;
		break;
	case 2:
		nextState = 2;
		break;
	case 3:
		nextState = -1;
		break;
	}

	system("pause");

	return nextState;
}
