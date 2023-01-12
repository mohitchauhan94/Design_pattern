#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H

#include "Notification_Observer.h"
#include <iostream>

class Email_Notification : public Notification_Observer{
    std::string m_email;
    public:
        Email_Notification(std::string email):m_email(email){
        }

        void update(std::string msg) override;
        void send_notification(std::string msg);
};

#endif