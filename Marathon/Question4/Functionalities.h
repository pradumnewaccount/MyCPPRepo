#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "Customer.h"
#include "CreditCard.h"
#define SIZE 3

bool CheckIsNull(Customer* arr[SIZE]);

void CreateObjects(Customer* arr[SIZE]);

std::string MinimumLimitNumber(Customer* arr[SIZE]);

void FindCreditCard(Customer* arr[SIZE], CreditCard* res[SIZE], CardType cardValue);

//std::string MatchIdCustomerType(Customer* arr[SIZE], std::string idValue);

bool CheckAllCardTypeSame(Customer* arr[SIZE], CardType cardValue);

void FreeMemory(Customer* arr[SIZE]);



#endif // FUNCTIONALITIES_H
