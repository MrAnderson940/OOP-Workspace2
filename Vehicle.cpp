#include "Vehicle.h"
#include <iostream>
#include <ctime>

Vehicle::Vehicle(int num){
    ID = num;
    timeStart = time(&timeOfEntry);
};

Vehicle::Vehicle(){
    ID = 0;
}

int Vehicle::getID(){
    return ID;
}