#include "Fridge.h"
#include <iostream>

using namespace std;


Fridge::Fridge(){
    volume = 0;
};
Fridge::Fridge(int power, double v){
    set_powerRating(power);
    volume = v;
    set_isOn(false);
};
void Fridge::setVolume(double v){
    volume = v;
};
double Fridge::getVolume(){
    return volume;
};
double Fridge::getPowerConsumption(){
    return (get_powerRating()*24*(volume/100));
};