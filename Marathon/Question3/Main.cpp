#include <iostream>
#include "Functionalities.h"
#include "Bill.h"

#define SIZE 5

int main(){
    
    Bill* arr[SIZE] = {};

    try{
        

        CreateObjects(arr);

        std::cout << "Highest Bill Amount : " << HighestBillAmountInvoice(arr) << "\n";

        std::cout << "Bill Amount : " << BillAmount(arr, "I102") << "\n";

        Invoice* res[SIZE] = {};
        FindAllInvoices(arr, res, 20000.0f);

        MaximumMinimumPrint(arr);
    }catch(std::runtime_error& ex){
        std::cout << ex.what() <<"\n";
    }



    FreeMemory(arr);
}