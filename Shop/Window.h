#pragma once
#include <iostream>
//#include "ShoppingHandler.h"

enum class state {
	//TODO: Maybe we should move that somewhere else? 
	exit,
	menu,
	listOptions,
	list,
	cart,
	sort,
	filter,
	payment,
	other
};

class Window {
public:
	/// <summary>
	/// Function that does things that particular window is suppesed to do (like
	/// displaying menu, adding items to the cart, letting user decide what to do
	/// next... etc.)
	/// </summary>
	/// <returns> Next state's id </returns>
	virtual state displayWindow() = 0;
	int takeUserInput(int start, int end);

private:

	

};

