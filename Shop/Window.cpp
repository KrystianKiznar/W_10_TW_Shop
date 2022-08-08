#include <iostream>
#include <string>
#include "Window.h"

int Window::takeUserInput(int start, int end)
{
	int number{};
	do {
		std::string userInput;
		std::cout << ">>";
		std::cin >> userInput;
		try {
			number = std::stoi(userInput);
			if (number < start || number > end) {
				std::cout << "Look, you've reached out of the allowed range" << std::endl;
			}
		}
		catch (const std::invalid_argument&) {
			std::cout << "It's not even a number!" << std::endl;
		}
		catch (const std::out_of_range&) {
			std::cout << "That number is way out of range!" << std::endl;
		}
	} while (number < start || number > end);

	return number;
}
