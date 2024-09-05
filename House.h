#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House{
    private:
    int numAppliance;
    Appliance** appliances;
    int maxAppliance;
    public:
    House();
    House(int num);
    bool addAppliance(Appliance* a);
    double getTotalPowerConsumption();
    int getPowerRating();

};


#endif