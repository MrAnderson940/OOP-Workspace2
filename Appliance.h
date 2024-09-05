#ifndef APPLIANCE_H
#define APPLIANCE_h
#pragma once

class Appliance{
    private:
    int powerRating;
    bool isOn;

    public:
    Appliance();
    Appliance(int power);
    void turnOn();
    void turnOff();
    double getPowerConsumption();
    int get_powerRating();
    bool get_isOn();
    void set_powerRating(int power);
    void set_isOn(bool power);

};




#endif