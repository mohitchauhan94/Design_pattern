#include "Iphone.h"
#include "Mobile_Notification.h"
#include "Email_Notification.h"

int main(){
    Stocks *stock = new Iphone();

    Notification_Observer *observer1 = new Mobile_Notification("9550505050");
    Notification_Observer *observer2 = new Email_Notification("mohit@gmail.com");

    stock->add(observer1);
    stock->add(observer2);

    stock->set_data(10);
    stock->set_data(20);

    return 0;
}