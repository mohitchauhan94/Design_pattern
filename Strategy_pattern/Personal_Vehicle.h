#ifndef PERSONAL_VEHICLE_H
#define PERSONAL_VEHICLE_H

#include "Vehicle.h"
#include "Normal_Drive.h"

class Personal_Vehicle : public Vehicle{
    public:
        Personal_Vehicle():Vehicle(new Normal_Drive()){
        }

        void engine() override;
        void body() override;
};

#endif