#include "Email_Notification.h"
#include <iostream>

void Email_Notification::update(std::string msg){
    send_notification(msg);
}

void Email_Notification::send_notification(std::string msg){
    std::cout << "send notification: "<< msg <<" to email " << m_email << std::endl;
}