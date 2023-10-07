#ifndef BIKE_H
#define BIKE_H

#include "BikeType.h"
#include "Vehicle.h"
#include <ostream>

class Bike : public Vehicle
{
    private:
        float _bike_mileage;  
        BikeType _bike_type;


    public:
        //4+2
        Bike(std::string id,
            std::string brand,
            VehicleType type,
            float price,
            float mileage,
            BikeType btype);

        //3+2
        Bike(std::string id,
            std::string brand,
            VehicleType type,
            float mileage,
            BikeType btype);

        float CalculateTax() override;

        ~Bike() {
            std::cout<<"Bike part of vehicle with ID: "<<id()<<" is destroyed\n";
        }

        float bikeMileage() const { return _bike_mileage; }

        BikeType bikeType() const { return _bike_type; }

        friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);

        
};

std::string DisplayBikeEnum(const BikeType value);

#endif // BIKE_H
