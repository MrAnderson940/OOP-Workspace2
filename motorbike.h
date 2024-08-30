#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "vehicle.h"
#include <iostream>

class Motorbike: public Vehicle {
    private:

    public:
    Motorbike(int num);
    int getParkingDuration();
};



#endif