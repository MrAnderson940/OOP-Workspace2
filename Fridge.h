#ifndef FRIDGE_H
#define FRIDGE_H
#pragma once
#include "Appliance.h"

class Fridge : public Appliance{
    private:
    double volume;

    public:
    Fridge();
    Fridge(int power, double v);
    void setVolume(double v);
    double getVolume();
    double getPowerConsumption();

};


#endif