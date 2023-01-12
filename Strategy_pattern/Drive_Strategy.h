#ifndef DRIVE_STRATEGY_H
#define DRIVE_STRATEGY_H

class Drive_Strategy{
    public:
        virtual void drive()=0;
        virtual ~Drive_Strategy(){}
};

#endif