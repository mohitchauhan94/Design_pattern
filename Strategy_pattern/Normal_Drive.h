#ifndef NORMAL_DRIVE_H
#define NORMAL_DRIVE_H

#include "Drive_Strategy.h"

class Normal_Drive : public Drive_Strategy{
    public:
        void drive() override;
};

#endif