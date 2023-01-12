#ifndef VEGDELIGHT_H
#define VEGDELIGHT_H

#include "BasePizza.h"

class Vegdelight:public BasePizza{
    public:
        int cost() override;
};

#endif