#include "TV.h"
#include <iostream>

TV::TV(){
    screenSize = 0;
    set_powerRating(0);
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
    std::cout << "plz\n" << get_powerRating() << std::endl;
    //return (get_powerRating() * screenSize / 10);
    return 200;
};
