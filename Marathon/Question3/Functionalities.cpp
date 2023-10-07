#include <iostream>
#include "Functionalities.h"
#include "Bill.h"
#include "Invoice.h"
#define SIZE 5

//check container is empty or not
bool CheckIsNull(Bill* arr[SIZE]){

    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            flag = false;
        }
    }

    return flag;
}

//cretate objects in heap memory
void CreateObjects(Bill* arr[SIZE]){

    arr[0] = new Bill(10000.0f, 1000.0f, 
                new Invoice("I101", InvoiceType::PAPER_SLIP, 10));

    arr[1] = new Bill(20000.0f, 2000.0f, 
                new Invoice("I102", InvoiceType::PAPER_SLIP, 8));

    arr[2] = new Bill(30000.0f, 3000.0f, 
                new Invoice("I103", InvoiceType::E_BILL, 20));

    arr[3] = new Bill(40000.0f, 4000.0f, 
                new Invoice("I104", InvoiceType::SMS_GENERATED, 12));

    arr[4] = new Bill(50000.0f, 5000.0f, 
                new Invoice("I105", InvoiceType::SMS_GENERATED, 5));

}

std::string HighestBillAmountInvoice(Bill* arr[SIZE]){
    if(CheckIsNull(arr)){
        throw std::runtime_error("Empty Container");
    }

    std::string str = "";

    for(int i = 0; i < SIZE; i++){
        
        if(arr[i] == nullptr){
            continue;
        }

        float max= 0.0f;

        if(arr[i]->billAmount() > max){
            str = arr[i]->billAssociatedInvoice()->invoiceNumber();
        }
    }

    return str;
}

float BillAmount(Bill* arr[SIZE], std::string invoiceNum){
    if(CheckIsNull(arr)){
        throw std::runtime_error("Empty Container");
    }

    float billAmt = 0.0f;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->billAssociatedInvoice()->invoiceNumber() == invoiceNum){
            billAmt =  arr[i]->billAmount();
        }
    }

    return billAmt;
}

void FindAllInvoices(Bill* arr[SIZE], Invoice* res[SIZE], float value){
    if(CheckIsNull(arr)){
        throw std::runtime_error("Empty Container");
    }

    for(int i =0 ; i < SIZE; i++){
        if(arr[i] == nullptr){
            continue;
        }

        int it = 0;

        if(arr[i]->billAmount() > value){
            res[it++] == arr[i]->billAssociatedInvoice();
        }

    }
}

void MaximumMinimumPrint(Bill* arr[SIZE]){
    if(CheckIsNull(arr)){
        throw std::runtime_error("Empty Container");
    }

    float max = arr[0]->billAmount();
    float min = arr[0]->billAmount();

    std::string max_invoice = arr[0]->billAssociatedInvoice()->invoiceNumber();;
    std::string min_invoice = arr[0]->billAssociatedInvoice()->invoiceNumber();;


    for(int i = 0; i < SIZE; i++){
        if(arr[i]->billAmount() > max){
            max = arr[i]->billAmount();
            max_invoice = arr[i]->billAssociatedInvoice()->invoiceNumber();
        }

        if(arr[i]->billAmount() < min){
            min = arr[i]->billAmount();
            min_invoice = arr[i]->billAssociatedInvoice()->invoiceNumber();
        }
    }

    std::cout << "Maximum Invoice : " << max_invoice << "\n";
    std::cout << "Minimum Invoice : " << min_invoice << "\n";

}

//It's use for free memory
void FreeMemory(Bill* arr[SIZE]){

    for(int i = 0; i < SIZE; i++){
        delete arr[i];
    }

}