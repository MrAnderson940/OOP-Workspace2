#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include <unistd.h>

using namespace std;

int main(){
    ParkingLot lot1(10);
    int ID;
    Vehicle array1[10];
    for (int i = 0; i<11; i++){
        cout << "enter car ID: ";
        cin >> ID;
        Vehicle Vehicle(ID);
        lot1.parkVehicle(&Vehicle);
    }

    cout << "remving car with ID: ";
    cin >> ID;
    lot1.unparkVehicle(ID);
    sleep(3);
    cout << lot1.countOverstayingVehicles(5) << endl;
    return 0;
    
}