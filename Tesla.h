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
    virtual void chargeBattery(int mins);            
    virtual void drive(int kms); 
    virtual char get_model();
    virtual float get_batteryPercentage();
    virtual void set_model(char m);
    virtual void set_batterPercentage(float);
};


#endif