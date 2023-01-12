#include "Mobile_Notification.h"
#include <iostream>

void Mobile_Notification::update(std::string msg){
    send_notification(msg);
}

void Mobile_Notification::send_notification(std::string msg){
    std::cout << "send notification: " << msg << " to mobile " << m_mobile << std::endl;
}

