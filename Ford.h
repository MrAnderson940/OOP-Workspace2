#ifndef FORD_H
#define FORD_H
#pragma once
#include "Car.h"


class Ford: public Car{
    private:
    int badgeNumber;
    float litresOfFuel;

    public:
    Ford();            
    Ford(int badgeNumber, int price); 
    void refuel(int litres);
    void drive(int kms);  
    void set_badgeNumber(int bn);
    void set_litresOfFuel(float fuel);
    int get_badgeNumber();
    float get_litresOfFuel();
};


#endif