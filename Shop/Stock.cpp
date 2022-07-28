#include "Stock.h"
#include "Product.h"


std::vector<Product *> Stock::filterByCategory(std::vector<Product> stock, category cat)
{
    std::vector<Product*> output;
 
    for (int i=0; i < stock.size(); i++) {
        if (stock[i].category == cat)
            output[i] = &stock[i];
    }
    return output;
}

std::vector<Product *> Stock::filterBySupplier(std::vector<Product> stock, supplier sup)
{
    std::vector<Product*> output;

    for (int i = 0; i < stock.size(); i++) {
        if (stock[i].supplier == sup)
            output[i] = &stock[i];
    }
    return output;
}

std::vector<Product> Stock::getStock()
{
    return stock;
}
