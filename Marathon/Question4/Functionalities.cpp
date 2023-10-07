#include <iostream>
#include "Functionalities.h"
#include "Customer.h"
#include "CreditCard.h"
#define SIZE 3

//check container is empty or not
bool CheckIsNull(Customer* arr[SIZE]){

    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            flag = false;
        }
    }

    return flag;
}

//Create Object of customer in a container using this function
void CreateObjects(Customer* arr[SIZE]){

    arr[0] = new Customer("Shubham Jaiswal", "C1001", CustomerType::PRIVILEGED,
        new CreditCard("2323 6767 7878 1001", CardType::SIGNATURE, 25000.0f, 101));

    arr[1] = new Customer("Manish Biruli", "C1002", CustomerType::ELITE,
        new CreditCard("2323 6767 7878 1002", CardType::MILES, 35000.0f, 102));

    arr[2] = new Customer("Sandeep Dahiya", "C1003", CustomerType::PRO,
        new CreditCard("2323 6767 7878 1003", CardType::NEO, 30000.0f, 103));

}

//Return number who have Minimum Limit
std::string MinimumLimitNumber(Customer* arr[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty\n");
    }

    float limit = arr[0]->creditCard()->limit();
    std::string ansNumber = arr[0]->creditCard()->number();

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->creditCard()->limit() < limit){
            limit = arr[i]->creditCard()->limit();
            ansNumber = arr[i]->creditCard()->number();
        }
    }

    return ansNumber;

}



//Find all the CreditCard with specific type
void FindCreditCard(Customer* arr[SIZE], CreditCard* res[SIZE], CardType cardValue){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty\n");
    }

    int it = 0;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->creditCard()->cardType() == cardValue){
            res[it++] = arr[i]->creditCard();
        }
    }

}

//Return Customer Type and check id

// std::string MatchIdCustomerType(Customer* arr[SIZE], std::string idValue){

//     if(CheckIsNull(arr)){
//         throw std::runtime_error("Container is Empty\n");
//     }

//     std::string cust_type = "No Match";

//     for(int i = 0; i < SIZE; i++){
//         if(arr[i]->id() == idValue){
//             cust_type =  arr[i]->customerType();
//         }
//     }

//     return cust_type;
// }

//Check All Card Type is SIGNATURE Type or not
bool CheckAllCardTypeSame(Customer* arr[SIZE], CardType cardValue){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty\n");
    }

    bool flag = false;
    int count = 0;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->creditCard()->cardType() == cardValue){
            count++;
        }
    }

    if(count == SIZE){
        flag = true;
    }

    return true;

}


//destroy all the object from the container
void FreeMemory(Customer* arr[SIZE]){
    for(int i = 0; i < SIZE; i++){
        delete arr[i];
    }
}