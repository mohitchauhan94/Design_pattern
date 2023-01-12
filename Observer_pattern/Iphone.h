#ifndef IPHONE_H
#define IPHONE_H

#include "Stocks.h"
#include "Notification_Observer.h"
#include <list>

class Iphone : public Stocks{
    int m_iphone_stock;
    std::list<Notification_Observer*> m_noti_observer;
    public:
        Iphone():m_iphone_stock(0){
        }
        void add(Notification_Observer *observer) override;
        void remove(Notification_Observer *observer) override;
        void notify() override;
        void set_data(int set_stock) override;
        int get_data() override;
};

#endif