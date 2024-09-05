#include "TV.h"
#include <iostream>

TV::TV(){
    screenSize = 0;
};
TV::TV(int power, double size){
    set_powerRating(power);
    screenSize = size;
};
void TV::setScreenSize(double size){
    screenSize = size;
};
double TV::getScreenSize(){
    return screenSize;
};
double TV::getPowerConsumption(){
    return (get_powerRating() * screenSize / 10);
};