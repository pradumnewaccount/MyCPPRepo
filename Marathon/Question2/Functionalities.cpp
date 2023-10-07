#include <iostream>
#include "Functionalities.h"
#define SIZE 3

//check container is empty or not
bool CheckIsNull(TouristVehicle* arr[SIZE]){

    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            flag = false;
        }
    }

    return flag;
}

//cretate objects in heap memory
void CreateObjects(TouristVehicle* arr[SIZE]){

    arr[0] = new TouristVehicle("V101", VehicleType::BIKE, 2, 200.0f);
    arr[1] = new TouristVehicle("V102", VehicleType::BUS, 20, 800.0f);
    arr[2] = new TouristVehicle("V103", VehicleType::CAB, 7, 400.0f);

}

//Get 
void FindTouristVehicle(TouristVehicle* arr[SIZE], TouristVehicle* res[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty.");
    }

    int it = 0;

    for(int i = 0; i < SIZE; i++){

        if(arr[i] == nullptr){
            continue;
        }

        if(arr[i]->seatCount() >= 4){
            res[it++] = arr[i];
        }
    }
}

float AverageBookingCharge(TouristVehicle* arr[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty.");
    }

    float total  = 0.0f;

    for(int i = 0; i < SIZE; i++){
        total += arr[i]->perHourBookingCharge();
    }

    return total/SIZE;

}

TouristVehicle* MaximumChargeTouristVehicle(TouristVehicle* arr[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty.");
    }

    TouristVehicle* res = nullptr;
    float charge = 0.0f;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->perHourBookingCharge() > charge){
            charge = arr[i]->perHourBookingCharge();
            res = arr[i];
        }
    }

    return res;

}

void FreeMemory(TouristVehicle* arr[SIZE]){

    for(int i = 0; i < SIZE; i++){
        delete arr[i];
    }

}
