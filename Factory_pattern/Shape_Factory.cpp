#include "Shape_Factory.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include <iostream>

Shape* Shape_Factory::get_shape(int input)
{
    switch(input)
    {
        case circle:
            return new Circle();
            break;

        case rectangle:
            return new Rectangle();
            break;

        case square:
            return new Square();
            break;

        default:
            std::cout << "incorrect input" << std::endl;
            return NULL;
            break;
    }
    return NULL;
}
