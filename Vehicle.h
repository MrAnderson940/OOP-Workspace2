#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream> 
#include <ctime>

class Vehicle{
    protected:
    time_t timeOfEntry;
    int ID;
    int timeStart;

    public:
    Vehicle();
    Vehicle(int num);
    

};
#endif