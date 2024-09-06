#ifndef TESLA_H
#define TESLA_H
#pragma once
#include "Car.h"

class Tesla: public Car{
    private:
    char model;
    float batteryPercentage;

    public:
    Tesla();            
    Tesla(char m, int p);
    void chargeBattery(int mins);            
    void drive(int kms); 
    char get_model();
    float get_batterPercentage();
    void set_model(char m);
    void set_batterPercentage(float);
};


#endif