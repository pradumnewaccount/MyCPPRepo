#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "Product.h"
#define SIZE 5

//Check container is empty or not
bool CheckIsNull(Product* arr[SIZE]);

//Create Product object in container
void CreateObjects(Product* arr[SIZE]);

//Find Average of all Products
float AverageProductPrice(Product* arr[SIZE]);

//Calculate Tax for All Products
void CallProductTaxAmount(Product* arr[SIZE]);

//Find Maximum Product's Price
float MaximumProductPrice(Product* arr[SIZE]);

void FreeMemory(Product* arr[SIZE]);

#endif // FUNCTIONALITIES_H
