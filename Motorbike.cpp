#include "Motorbike.h"
#include <iostream>
#include <ctime>


int Motorbike::getParkingDuration(){
    return 0.85 * (time(&timeOfEntry) - timeStart);
}

Motorbike::Motorbike(int num){
    ID = num;
    timeStart = time(&timeOfEntry);
};