#ifndef SQUARE_FACTORY_H
#define SQUARE_FACTORY_H

#include "Shape.h"

enum shapes{
    rectangle = 0,
    square,
    circle
};

class Shape_Factory{
    public:
        Shape* get_shape(int input);
};

#endif