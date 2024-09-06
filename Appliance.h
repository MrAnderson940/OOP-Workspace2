#ifndef APPLIANCE_H
#define APPLIANCE_h
#pragma once
#include <iostream>

class Appliance{
    private:
    int powerRating;
    bool isOn;

    public:
    Appliance();
    Appliance(int power);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption(){ return 6;};
    int get_powerRating();
    bool get_isOn();
    void set_powerRating(int power);
    void set_isOn(bool power);

};




#endif