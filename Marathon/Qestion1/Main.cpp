#include <iostream>
#include "Functionalities.h"
#define SIZE 5

int main(){

    //Create a primitive array store Product Object (Creating in HEAP Memory)
    Product* arr[SIZE] = {};

    try{
        
        //This function for create object
        CreateObjects(arr);
        
        //Find Average Price of Products
        std::cout << "Average Prduct Price : " << AverageProductPrice(arr) << "\n";

        //Calculate Tax for all Product Object
        CallProductTaxAmount(arr);
        
        //Get Maximum Price from All Product
        std::cout << "Maximum Product Price : " << MaximumProductPrice(arr) << "\n";

    }catch(std::runtime_error& ex){
        std::cout << ex.what() <<"\n";
    }

    //Destroy all Product from the container
    FreeMemory(arr);

}