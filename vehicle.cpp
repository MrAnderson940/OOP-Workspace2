#include "vehicle.h"
#include <iostream>
#include <ctime>

Vehicle::Vehicle(int num){
    ID = num;
    timeStart = time(&timeOfEntry);
};

Vehicle::Vehicle(){
    ID = 0;
}