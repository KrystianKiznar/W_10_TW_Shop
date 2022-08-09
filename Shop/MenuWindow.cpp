#include "MenuWindow.h"
//#include "ShoppingHandler.h"

state MenuWindow::displayWindow() {

	system("cls");
	int usersChoice;
	state nextState;

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
		nextState = state::listOptions;
		break;
	case 2:
		nextState = state::cart;
		break;
	case 3:
		nextState = state::exit;
		break;
	}

	system("pause");

	return nextState;
}
