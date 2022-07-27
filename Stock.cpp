#include "Stock.h"
#include <algorithm>
#include <iostream>

std::vector<Product> Stock::getStock()
{
    return stock;
}


void Stock::sort (std::vector<int> &arr, int l, int r)
{
     {
    if (l < r) {
        int pivot = l;
        int i = l;
        int j = r;
        while (i < j) {
            while (arr[i] <= arr[pivot] && i < r)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j) {
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[pivot], &arr[j]);
        sort(arr, l, j - 1);
        sort(arr, j + 1, r);
    }
};
}

