#include <iostream>
#include "Functionalities.h"
#define SIZE 3

int main(){

    //Container of Pointer to TouristVehicle
    TouristVehicle* arr[SIZE] = {};
    
    try{
        CreateObjects(arr);

        TouristVehicle* res[SIZE] = {};
        FindTouristVehicle(arr, res);

         std::cout << "Result : \n";
        for(int i = 0; i < SIZE; i++){

            if(res[i] == nullptr){
                break;
            }
            std::cout << *res[i] <<"\n";

        }

        for(int i = 0; i < SIZE; i++){
            delete res[i];
        }

        std::cout << "Average Booking Charge : " << AverageBookingCharge(arr) << "\n";

        std::cout << "Maximum Charge Tourist Vehicle : " << 
            *(MaximumChargeTouristVehicle(arr)) << "\n";

    }catch(std::runtime_error& ex){
        std::cout<< ex.what() << "\n";
    }


    FreeMemory(arr);
}