#ifndef GUI_FACTORY_H
#define GUI_FACTORY_H

#include "IFactory.h"
#include "Windows_Factory.h"
#include "Mac_Factory.h"
#include <iostream>

class GUI_Factory
{
    public:
        static IFactory* create_factory(std::string os_type)
        {
            if(os_type == "windows")
            {
                return new Windows_Factory();
            }
            else if(os_type == "mac")
            {
                return new Mac_Factory();
            }
            return NULL;
        }
};

#endif