#include "UserDataWindow.h"


UserDataWindow::UserDataWindow()
{
}

bool UserDataWindow::validation(std::regex x,std::string y)
{   getline(std::cin, y);

	if (std::regex_match(y, x))
		return true;
	else
		return false;
}

state UserDataWindow::displayWindow()
{
	system("cls");
	int usersChoice;
	state nextState;
	std::string firstName, lastName, phoneNum, email, street, house, flat, zipCode, city;
	std::regex nameReg("[A-Z]{0,1}[a-z]{1,40}");
	std::regex phoneReg("\\d{9}");
	std::regex emailReg("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	std::regex houseflatReg("[A-Z]{0,10}[a-z]{0,10}\\d{1,10}");
	std::regex codeReg("\\d{2}([-]|\\s*)?(\\d{3})?$");

	do{
		std::cout << "FIRST NAME: ";
		UserDataWindow::validation(nameReg, firstName);
		std::cout << "\n";
	} while (validation(nameReg, firstName)==false);
	

	std::cout << "LAST NAME: ";
	UserDataWindow::validation(nameReg, lastName);
	std::cout << "\n";
	std::cout << "PHONE NUMBER: ";
	UserDataWindow::validation(phoneReg, phoneNum);
	std::cout << "\n";
	std::cout << "EMAIL ADRESS: ";
	UserDataWindow::validation(emailReg, email);
	std::cout << "\n";
	std::cout << "STREET: ";
	UserDataWindow::validation(nameReg, street);
	std::cout << "\n";
	std::cout << "HOUSE: ";
	UserDataWindow::validation(houseflatReg, house);
	std::cout << "\n";
	std::cout << "FLAT: ";
	UserDataWindow::validation(houseflatReg, flat);
	std::cout << "\n";
	std::cout << "ZIP CODE: ";
	UserDataWindow::validation(codeReg, zipCode);
	std::cout << "\n";
	std::cout << "CITY: ";
	UserDataWindow::validation(nameReg, city);
	std::cout << "\n";
	std::cout << "\n";


		// print list of choices 
		std::cout << "OPTIONS" << std::endl << std::endl;
		std::cout << "1. Payment" << std::endl;
		std::cout << "2. Exit" << std::endl;
		std::cout << "3. Return" << std::endl;

		// read user's choice
		std::cout << std::endl;
		usersChoice = takeUserInput(1, 3);

		switch (usersChoice) {
		case 1:
			nextState = state::payment; 
			break;
		case 2:
			nextState = state::exit; 
			break;
		case 3:
			nextState = state::cart; 
			break;

		}

		system("pause");

		return nextState;
	}

