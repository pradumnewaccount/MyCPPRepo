#ifndef FUNTIONALITIES_H
#define FUNTIONALITIES_H

#include <iostream>
#include "Bill.h"
#include "Invoice.h"
#define SIZE 5

bool CheckIsNull(Bill* arr[SIZE]);

void CreateObjects(Bill* arr[SIZE]);

std::string HighestBillAmountInvoice(Bill* arr[SIZE]);

float BillAmount(Bill* arr[SIZE], std::string invoiceNum);

void FindAllInvoices(Bill* arr[SIZE], Invoice* res[SIZE], float value);

void MaximumMinimumPrint(Bill* arr[SIZE]);

void FreeMemory(Bill* arr[SIZE]);



#endif // FUNTIONALITIES_H
