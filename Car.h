#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>

class Car: public Vehicle {
    private:

    public:
    Car(int num);
    int gettimeOfEntry();
    int getParkingDuration();
};

#endif