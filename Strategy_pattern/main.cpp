#include<iostream>
#include "Normal_Drive.h"
#include "Sports_Drive.h"
#include "Personal_Vehicle.h"
#include "Passenger_Vehicle.h"
#include "Sports_Vehicle.h"
using namespace std;

int main(){
    Vehicle *perso = new Personal_Vehicle();
    perso->engine();
    perso->body();
    perso->drive();

    Vehicle *passeng = new Passenger_Vehicle();
    passeng->engine();
    passeng->body();
    passeng->drive();

    Vehicle *sports = new Sports_Vehicle();
    sports->engine();
    sports->body();
    sports->drive();

    return 0;
}