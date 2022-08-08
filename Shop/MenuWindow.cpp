#include "MenuWindow.h"

int MenuWindow::displayWindow() {

	system("cls");
	int usersChoice, nextState;

	// print list of choices 
	std::cout << "MENU" << std::endl << std::endl;
	std::cout << "1. List" << std::endl;
	std::cout << "2. Cart" << std::endl;
	std::cout << "3. Exit" << std::endl;
	//std::cout << "4. Admin" << std::endl;

	// read user's choice
	std::cout << std::endl;
	usersChoice = takeUserInput(1,3);

	// return next state
	switch (usersChoice) {
	case 1:
		nextState = 2;
		break;
	case 2:
		nextState = 4;
		break;
	case 3:
		nextState = 0;
		break;
	}

	system("pause");

	return nextState;
}
