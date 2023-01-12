#include "Mushroom_Topping.h"
#include <iostream>

int Mushroom_Topping::cost(){
    std::cout << "Mushroom added cost 30" << std::endl;
    return m_basepizza->cost()+30;
}
