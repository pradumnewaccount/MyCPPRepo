#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "TouristVehicle.h"
#define SIZE 3

//check container is empty or not
bool CheckIsNull(TouristVehicle* arr[SIZE]);

// function for create objects
void CreateObjects(TouristVehicle* arr[SIZE]);

//find all tourist vehicle shose seat >= 4
void FindTouristVehicle(TouristVehicle* arr[SIZE], TouristVehicle* res[SIZE]);

//find average of booking charge
float AverageBookingCharge(TouristVehicle* arr[SIZE]);

//find pointer of vehicle whose charge is maximum
TouristVehicle* MaximumChargeTouristVehicle(TouristVehicle* arr[SIZE]);

//function to free memory
void FreeMemory(TouristVehicle* arr[SIZE]);


#endif // FUNCTIONALITIES_H
