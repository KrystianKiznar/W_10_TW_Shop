#include <iostream>
#include "Product.h"
#include "Stock.h"
#include "Cart.h"

Stock initialize() {
	Stock stock;
	Product p1;
	p1.name = "Bread";
	p1.id = 100;
	p1.price = 1.14;
	p1.category = food;
	p1.supplier = poland;
	Stock stock;
	stock.getStock();

}


int main() {

	
	return 0;
}