#include "Appliance.h"
#include <iostream>



Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
};
Appliance::Appliance(int power){
    powerRating = power;
    isOn = false;
};
void Appliance::turnOn(){
    isOn = true;
};
void Appliance::turnOff(){
    isOn = false;
};
double Appliance::getPowerConsumption(){
    return 0;
};
int Appliance::get_powerRating(){
    return powerRating;
};
bool Appliance::get_isOn(){
    return isOn;
};
void Appliance::set_powerRating(int power){
    powerRating = power;
};
void Appliance::set_isOn(bool power){
    isOn = power;
};
    