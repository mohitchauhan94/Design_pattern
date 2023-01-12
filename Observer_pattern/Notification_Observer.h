#ifndef NOTIFICATION_OBSERVER_H
#define NOTIFICATION_OBSERVER_H

#include "Notification_Observer.h"
#include <string>
class Notification_Observer{
    public:
        virtual void update(std::string msg)=0;
};

#endif