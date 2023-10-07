#include <iostream>
#include "Customer.h"
#include "CreditCard.h"
#include "Functionalities.h"
#define SIZE 3


int main(){

    Customer* arr[SIZE] = {};

    try{

        CreateObjects(arr);

        std::cout <<"Minimum Limit Number : " << MinimumLimitNumber(arr) << "\n"; 

        CreditCard* res[SIZE] = {};
        FindCreditCard(arr, res, CardType::SIGNATURE);

        //std::cout <<"Customer Type : " << MatchIdCustomerType(arr, "C1002") << "\n";

        std::cout <<"SIGNATURE OR NOT : " << CheckAllCardTypeSame(arr, CardType::SIGNATURE) << "\n";

    }catch(std::runtime_error& ex){
        std::cout << ex.what() <<"\n";
    }

    FreeMemory(arr);





}