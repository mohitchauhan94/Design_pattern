#ifndef STOCKS_H
#define STOCKS_H

#include "Notification_Observer.h"

class Stocks{
    public:
        virtual void add(Notification_Observer *observer)=0;
        virtual void remove(Notification_Observer *observer)=0;
        virtual void notify()=0;
        virtual void set_data(int set_data)=0;
        virtual int get_data()=0;
};

#endif