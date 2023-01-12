#ifndef MUSHROOM_TOPPING_H
#define MUSHROOM_TOPPING_H

#include "Topping_Decorator.h"

class Mushroom_Topping : public Topping_Decorator{
    public:
    BasePizza *m_basepizza;
    Mushroom_Topping(BasePizza *basepizza):m_basepizza(basepizza){
    }
    int cost() override;
};

#endif