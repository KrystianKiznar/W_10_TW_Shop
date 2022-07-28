#include "Stock.h"
#include <algorithm>
#include <utility>
#include <iostream>
#include <vector>

std::vector<Product> Stock::getStock()
{
    return stock;
}

std::vector<Product *> Stock::getStockPointers()
{
    std::vector<Product*> pointersVector = std::vector<Product*>(stock.size());
    for (int i = 0; i < stock.size(); i++) {
        pointersVector[i] = &stock[i];
   }
    return pointersVector;
}

void Stock::addToStock(Product& product) {
    stock.push_back(product);
}

void Stock::sort (std::vector<Product *> &arr, int l, int r, Comparator & comparator)
{
     {
    if (l < r) {
        int pivot = l;
        int i = l;
        int j = r;
        while (i < j) {
            while (comparator.compare( arr[i], arr[pivot]) <= 0 && i < r)
                i++;
            while (comparator.compare( arr[j], arr[pivot]) > 0)
                j--;
            if (i < j) {
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[pivot], arr[j]);
        sort(arr, l, j - 1, comparator);
        sort(arr, j + 1, r, comparator);
    }
};
}

