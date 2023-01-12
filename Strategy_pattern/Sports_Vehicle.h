#ifndef SPORTS_VEHICLE_H
#define SPORTS_VEHICLE_H

#include "Vehicle.h"
#include "Sports_Drive.h"

class Sports_Vehicle : public Vehicle{
    public:
        Sports_Vehicle():Vehicle(new Sports_Drive()){
        }

        void engine() override;
        void body() override;
};

#endif