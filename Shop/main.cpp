#include <iostream>
#include "Product.h"
#include "Stock.h"
//#include "Cart.h"


Stock initialize();

Stock theStock = initialize();

int main() {

	//kolorowe tło? 

	std::vector<Product *> stockPointers = theStock.getStockPointers();

	theStock.sort(stockPointers, 0, stockPointers.size() - 1, CompareByName());
	std::cout << "\n                SORTED BY: Name A-Z\n\n" << std::endl;
	std::cout << " PRODUCT NAME  " << "      PRICE    " << "  CATEGORY"  << "           SUPPLIER\n" << std::endl;
	
	for (int i = 0; i < stockPointers.size(); i++) {
		stockPointers[i]->print();
		std::cout << std::endl;
	}		

	theStock.sort(stockPointers, 0, stockPointers.size() - 1, CompareByPrice());

	std::cout << "\n                SORTED BY: Price ASC\n\n" << std::endl;

	std::cout << " PRODUCT NAME  " << "      PRICE    " << "  CATEGORY" << "           SUPPLIER\n" << std::endl;

	for (int i = 0; i < stockPointers.size(); i++) {
		stockPointers[i]->print();
		std::cout << std::endl;
	}

	int a = getchar();

	return 0;
}

Stock initialize() {
	Stock stock;
	Product p1;
	p1.name = "Bread";
	p1.id = 100;
	p1.price = 1.14;
	p1.category = food;
	p1.supplier = poland;
	stock.addToStock(p1);

	Product p2;
	p2.name = "Apple";
	p2.id = 101;
	p2.price = 0.50;
	p2.category = food;
	p2.supplier = china;
	stock.addToStock(p2);

	Product p3;
	p3.name = "Milk";
	p3.id = 102;
	p3.price = 2.20;
	p3.category = food;
	p3.supplier = germany;
	stock.addToStock(p3);

	Product p4;
	p4.name = "Cheese";
	p4.id = 103;
	p4.price = 3.50;
	p4.category = food;
	p4.supplier = poland;
	stock.addToStock(p4);

	Product p5;
	p5.name = "Chips";
	p5.id = 104;
	p5.price = 3.50;
	p5.category = food;
	p5.supplier = poland;
	stock.addToStock(p5);

	Product p6;
	p6.name = "TV";
	p6.id = 105;
	p6.price = 999.99;
	p6.category = AGDRTV;
	p6.supplier = china;
	stock.addToStock(p6);

	Product p7;
	p7.name = "MP3";
	p7.id = 106;
	p7.price = 9.99;
	p7.category = AGDRTV;
	p7.supplier = china;
	stock.addToStock(p7);

	Product p8;
	p8.name = "PlayStation";
	p8.id = 107;
	p8.price = 2999.99;
	p8.category = AGDRTV;
	p8.supplier = china;
	stock.addToStock(p8);

	Product p9;
	p9.name = "Headphones";
	p9.id = 108;
	p9.price = 89.99;
	p9.category = AGDRTV;
	p9.supplier = poland;
	stock.addToStock(p9);

	Product p10;
	p10.name = "Mouse";
	p10.id = 109;
	p10.price = 49.99;
	p10.category = AGDRTV;
	p10.supplier = germany;
	stock.addToStock(p10);

	Product p11;
	p11.name = "Harry Potter";
	p11.id = 110;
	p11.price = 15.15;
	p11.category = booksandstats;
	p11.supplier = germany;
	stock.addToStock(p11);

	Product p12;
	p12.name = "Star Wars";
	p12.id = 111;
	p12.price = 15.15;
	p12.category = booksandstats;
	p12.supplier = poland;
	stock.addToStock(p12);

	Product p13;
	p13.name = "Pencil";
	p13.id = 112;
	p13.price = 0.85;
	p13.category = booksandstats;
	p13.supplier = germany;
	stock.addToStock(p13);

	Product p14;
	p14.name = "Pen";
	p14.id = 113;
	p14.price = 1.15;
	p14.category = booksandstats;
	p14.supplier = china;
	stock.addToStock(p14);

	Product p15;
	p15.name = "White Tshirt";
	p15.id = 114;
	p15.price = 15.15;
	p15.category = clothes;
	p15.supplier = poland;
	stock.addToStock(p15);

	Product p16;
	p16.name = "Dress";
	p16.id = 115;
	p16.price = 30.99;
	p16.category = clothes;
	p16.supplier = germany;
	stock.addToStock(p16);

	Product p17;
	p17.name = "Kubotas";
	p17.id = 116;
	p17.price = 3.01;
	p17.category = clothes;
	p17.supplier = china;
	stock.addToStock(p17);

	Product p18;
	p18.name = "Shampoo";
	p18.id = 117;
	p18.price = 3.99;
	p18.category = cosmetics;
	p18.supplier = poland;
	stock.addToStock(p18);

	Product p19;
	p19.name = "Soap";
	p19.id = 118;
	p19.price = 1.01;
	p19.category = cosmetics;
	p19.supplier = germany;
	stock.addToStock(p19);

	Product p20;
	p20.name = "Shower gel";
	p20.id = 119;
	p20.price = 2.30;
	p20.category = cosmetics;
	p20.supplier = china;
	stock.addToStock(p20);

	return stock; 
} 