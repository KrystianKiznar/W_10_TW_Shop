#include "MenuWindow.h"

int MenuWindow::displayWindow() {

	int usersChoice, nextState;

	// print list of choices 
	std::cout << "MENU" << std::endl << std::endl;
	std::cout << "1. List" << std::endl;
	std::cout << "2. Cart" << std::endl;
	//std::cout << "3. Admin" << std::endl;
	//std::cout << "4. Exit" << std::endl;

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

	return 3;
}
