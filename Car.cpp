#include "Car.h"
#include <iostream>
#include <unistd.h>

int Car::getParkingDuration(){
    return 0.9 * (time(&timeOfEntry) - timeStart);
}

Car::Car(int num){
    ID = num;
    timeStart = time(&timeOfEntry);
};

int Car::gettimeOfEntry(){
    return time(&timeOfEntry);
};