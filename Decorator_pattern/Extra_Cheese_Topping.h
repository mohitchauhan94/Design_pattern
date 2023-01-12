#ifndef EXTRA_CHEESE_TOPPING_H
#define EXTRA_CHEESE_TOPPING_H

#include "Topping_Decorator.h"

class Extra_Cheese_Topping : public Topping_Decorator{
    public:
    BasePizza *m_basepizza;
    Extra_Cheese_Topping(BasePizza *basepizza):m_basepizza(basepizza){
    }
    int cost() override;
};

#endif