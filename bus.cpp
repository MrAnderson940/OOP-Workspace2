#include "bus.h"
#include <iostream>
#include <ctime>

int Bus::getParkingDuration(){
    return 0.75 * (time(&timeOfEntry) - timeStart);
}

Bus::Bus(int num){
    ID = num;
    timeStart = time(&timeOfEntry);
};