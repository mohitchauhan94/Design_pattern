#include "Shape_Factory.h"

int main()
{
    Shape_Factory *shape_fact_obj = new Shape_Factory();

    Shape *circle_obj = shape_fact_obj->get_shape(circle);
    circle_obj->draw();

    Shape *rectangle_obj = shape_fact_obj->get_shape(rectangle);
    rectangle_obj->draw();

    Shape *square_obj = shape_fact_obj->get_shape(square);
    square_obj->draw();

    return 0;
}