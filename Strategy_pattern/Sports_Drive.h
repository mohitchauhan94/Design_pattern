#ifndef SPORTS_DRIVE_H
#define SPORTS_DRIVE_H

#include "Drive_Strategy.h"

class Sports_Drive : public Drive_Strategy{
    public:
        void drive() override;
};

#endif