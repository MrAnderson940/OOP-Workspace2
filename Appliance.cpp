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

int Appliance::get_powerRating(){
    std::cout << "fu\n";
    return powerRating;
};
bool Appliance::get_isOn(){
    return isOn;
};
void Appliance::set_powerRating(int power){
    powerRating = power;
    std::cout << powerRating;
};
void Appliance::set_isOn(bool power){
    isOn = power;
};
    