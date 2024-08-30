#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot{
    private:
    int maxSize;
    Vehicle* vehicleArray;
    int count;

    public:
    ParkingLot(int max);
    int getCount();
    void parkVehicle(Vehicle* vehicle);
    int unparkVehicle(int id);
    ~ParkingLot();
};


#endif