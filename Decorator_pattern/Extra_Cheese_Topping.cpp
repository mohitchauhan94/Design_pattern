#include "Extra_Cheese_Topping.h"
#include <iostream>

int Extra_Cheese_Topping::cost(){
    std::cout << "Extra cheese added cost 20" << std::endl;
    return m_basepizza->cost()+20;
}

