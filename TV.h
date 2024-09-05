#ifndef TV_H
#define TV_H
#include "Appliance.h"

class TV: public Appliance{
    private:
    double screenSize;

    public:
    TV();
    TV(int power, double size);
    void setScreenSize(double size);
    double getScreenSize();
    double getPowerConsumption();

};



#endif