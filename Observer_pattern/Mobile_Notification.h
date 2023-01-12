#ifndef MOBILE_NOTIFICATION_H
#define MOBILE_NOTIFICATION_H

#include "Notification_Observer.h"
#include <string>

class Mobile_Notification : public Notification_Observer{
    std::string m_mobile;
    public:
        Mobile_Notification(std::string mobile):m_mobile(mobile){
        }

        void update(std::string msg) override;
        void send_notification(std::string msg);
};

#endif