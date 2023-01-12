#include "BasePizza.h"
#include "Margherita.h"
#include "Extra_Cheese_Topping.h"
#include "Mushroom_Topping.h"
#include "Vegdelight.h"
#include <iostream>

int main(){

    BasePizza *basePizza1 = new Mushroom_Topping(new Margherita());
    std::cout << basePizza1->cost() << std::endl;

    BasePizza *basePizza2 = new Mushroom_Topping(new Extra_Cheese_Topping(new Margherita()));
    std::cout << basePizza2->cost() << std::endl;

    return 0;
}
