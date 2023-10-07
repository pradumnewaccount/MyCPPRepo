#include <iostream>
#include "TouristVehicle.h"

TouristVehicle:: TouristVehicle(std::string number, VehicleType type, int seat_count,
    float per_hour_booking_charge)
    : _number(number), _type(type), _seat_count(seat_count), 
      _per_hour_booking_charge(per_hour_booking_charge)
{
}


std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << DisplayVehicleEnum(rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}

std::string DisplayVehicleEnum(const VehicleType value){
    if(value == VehicleType::BIKE){
        return "BIKE";
    }
    else if(value == VehicleType::CAB){
        return "CAB";
    }
    return "BUS";
}
