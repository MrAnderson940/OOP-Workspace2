#ifndef BUS_H
#define BUS_H
#include "vehicle.h"
#include <iostream>

class Bus: public Vehicle {
    private:

    public:
    Bus(int num);
    int getParkingDuration();
};


#endif