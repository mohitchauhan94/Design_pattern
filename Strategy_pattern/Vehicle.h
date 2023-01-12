#ifndef VEHICLE_H
#define VEHICLE_H

#include "Drive_Strategy.h"

class Vehicle{
    public:
        Drive_Strategy *m_drive;
        Vehicle(Drive_Strategy *drive) : m_drive(drive){
        }

        virtual void engine()=0;
        virtual void body()=0;

        void drive(){
            m_drive->drive();
        }

        virtual ~Vehicle(){}
};

#endif