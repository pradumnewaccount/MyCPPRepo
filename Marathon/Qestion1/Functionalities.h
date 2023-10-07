#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "Product.h"
#define SIZE 5

bool CheckIsNull(Product* arr[SIZE]);

void CreateObjects(Product* arr[SIZE]);

float AverageProductPrice(Product* arr[SIZE]);

void CallProductTaxAmount(Product* arr[SIZE]);

float MaximumProductPrice(Product* arr[SIZE]);

void FreeMemory(Product* arr[SIZE]);

#endif // FUNCTIONALITIES_H
