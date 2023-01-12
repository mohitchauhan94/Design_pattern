#ifndef PASSENGER_VEHICLE_H
#define PASSENGER_VEHICLE_H

#include "Vehicle.h"
#include "Normal_Drive.h"

class Passenger_Vehicle : public Vehicle{
    public:
        Passenger_Vehicle():Vehicle(new Normal_Drive()){
        }

        void engine() override;
        void body() override;
};

#endif