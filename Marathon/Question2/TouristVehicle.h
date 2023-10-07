#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include <iostream>
#include "VehicleType.h"

class TouristVehicle
{
    private:
        //Member attributes
        std::string _number;
        VehicleType _type;
        int _seat_count;
        float _per_hour_booking_charge;

    public:
        //Parameterized Constructor
        TouristVehicle(
            std::string number,
            VehicleType type,
            int seat_count,
            float per_hour_booking_charge
        );
        
        //Destructor
        ~TouristVehicle() {
            std::cout << "Vehicle With ID : " << _number << " destroyed\n";
        }


        //Setter and Getter
        std::string number() const { return _number; }
        void setNumber(const std::string &number) { _number = number; }

        VehicleType type() const { return _type; }
        void setType(const VehicleType &type) { _type = type; }

        int seatCount() const { return _seat_count; }
        void setSeatCount(int seat_count) { _seat_count = seat_count; }

        float perHourBookingCharge() const { return _per_hour_booking_charge; }
        void setPerHourBookingCharge(float per_hour_booking_charge) 
            { _per_hour_booking_charge = per_hour_booking_charge; }

        friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
        
            
};

std::string DisplayVehicleEnum(const VehicleType value);

#endif // TOURISTVEHICLE_H
