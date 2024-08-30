#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
#include <iostream>

class Motorbike: public Vehicle {
    private:

    public:
    Motorbike(int num);
    int getParkingDuration();
};



#endif