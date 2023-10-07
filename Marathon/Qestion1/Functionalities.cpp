#include <iostream>
#include "Functionalities.h"
#define SIZE 5

bool CheckIsNull(Product* arr[SIZE]){

    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            flag = false;
        }
    }

    return flag;
}

void CreateObjects(Product* arr[SIZE]){

    arr[0] = new Product("P101", ProductType::FMCG, 500.0f, "Bajaj");
    arr[1] = new Product("P102", ProductType::FMCG, 700.0f, "P&G");
    arr[2] = new Product("P103", ProductType::FMCG, 900.0f, "Parle");
    arr[3] = new Product("P104", ProductType::APPLIANCE, 5000.0f, "SONY");
    arr[4] = new Product("P105", ProductType::PERFUME, 800.0f, "Denever");

}

float AverageProductPrice(Product* arr[SIZE]){

    float total = 0.0f;

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty");
    }

    for(int i = 0; i < SIZE; i++){
        total += arr[i]->productPrice();
    }

    return total/SIZE;

}

void CallProductTaxAmount(Product* arr[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty");
    }

    for(int i = 0; i < SIZE; i++){
        std::cout << "Tax : " << arr[i]->ProductTaxAmount() << "\n";
    }
    
}

float MaximumProductPrice(Product* arr[SIZE]){

    float res = 0.0f;

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty");
    }

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->productPrice() > res){
            res = arr[i]->productPrice();
        }
    }

    return res;
}

void FreeMemory(Product* arr[SIZE]){

    for(int i = 0; i < SIZE; i++){
        delete arr[i];
    }

}