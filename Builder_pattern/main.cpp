#include "Director_Builder.h"
#include "Dell_Builder.h"
#include "HP_Builder.h"

int main()
{
    Dell_Builder *dell_builder = new Dell_Builder();
    HP_Builder *hp_builder = new HP_Builder();

    Director_Builder *dell_director = new Director_Builder(dell_builder);
    Director_Builder *hp_director = new Director_Builder(hp_builder);

    dell_director->build_desktop();
    hp_director->build_desktop();

    Desktop* dell_desktop = dell_director->get_desktop();
    Desktop* hp_desktop = hp_director->get_desktop();

    dell_desktop->get_specs();
    hp_desktop->get_specs();

    return 0;
}