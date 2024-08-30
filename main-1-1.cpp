#include <iostream>
#include <ctime>
#include "vehicle.h"
#include "bus.h"
#include "car.h"
#include "motorbike.h"
#include <unistd.h>


int main(){
    Car myCar(1849472);
    Motorbike myBike(3880);
    Bus myBus(600);
    sleep(5);
    std::cout << myCar.getParkingDuration() << std::endl;
    std::cout << myBike.getParkingDuration() << std::endl;
    std::cout << myBus.getParkingDuration() << std::endl;
    return 0;
}