#include "UserDataWindow.h"


UserDataWindow::UserDataWindow()
{
}

bool UserDataWindow::validation(std::regex x, std::string y)
{
	getline(std::cin, y);

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

	bool isValid = false;
	int n = 0;

	while (isValid== UserDataWindow::validation(nameReg, firstName)){
		std::cout << "\n";
			if (n > 0) {
				std::cout << "Your details are not correct\n";
				std::cout << "FIRST NAME: ";
			} else {
				std::cout << "FIRST NAME: ";
			}
		n++;
	} 
	n = 0;
	while (isValid ==UserDataWindow::validation(nameReg, lastName)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "LAST NAME: ";
		}
		else {
			std::cout << "LAST NAME: ";
		}
		n++;
	}

	n = 0;
	while (isValid == UserDataWindow::validation(phoneReg, phoneNum)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "PHONE NUMBER: ";
		}
		else {
			std::cout << "PHONE NUMBER: ";
		}
		n++;
	}

	n = 0;
	while (isValid == UserDataWindow::validation(emailReg, email)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "EMAIL ADRESS: ";
		}
		else {
			std::cout << "EMAIL ADRESS: ";
		}
		n++;
	}

	n = 0;
	while (isValid == UserDataWindow::validation(nameReg, street)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "STREET: ";
		}
		else {
			std::cout << "STREET: ";
		}
		n++;
	}

	n = 0;
	while (isValid == UserDataWindow::validation(nameReg, street)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "HOUSE: ";
		}
		else {
			std::cout << "HOUSE: ";
		}
		n++;
	}
	
	n = 0;
	while (isValid == UserDataWindow::validation(houseflatReg, house)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "FLAT: ";
		}
		else {
			std::cout << "FLAT: ";
		}
		n++;
	}

	n = 0;
	while (isValid == UserDataWindow::validation(codeReg, zipCode)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "ZIP CODE: ";
		}
		else {
			std::cout << "ZIP CODE: ";
		}
		n++;
	}

	n = 0;
	while (isValid == UserDataWindow::validation(nameReg, city)) {
		std::cout << "\n";
		if (n > 0) {
			std::cout << "Your details are not correct\n";
			std::cout << "CITY: ";
		}
		else {
			std::cout << "CITY: ";;
		}
		n++;
	}

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

