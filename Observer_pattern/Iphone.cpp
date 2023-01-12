#include "Iphone.h"

void Iphone::add(Notification_Observer *observer){
    m_noti_observer.push_back(observer);
}
void Iphone::remove(Notification_Observer *observer){
    m_noti_observer.remove(observer);
}

void Iphone::notify(){
    std::list<Notification_Observer*>::iterator it;
    for(it = m_noti_observer.begin(); it!= m_noti_observer.end() ;it++){
        (*it)->update("Iphones are in stocks!!!");
    }
}

void Iphone::set_data(int set_data){
    if(m_iphone_stock==0){
        notify();
    }
    m_iphone_stock += set_data;
}

int Iphone::get_data(){
    return m_iphone_stock;
}