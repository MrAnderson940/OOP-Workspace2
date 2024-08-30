#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>

    ParkingLot::ParkingLot(int max){
        maxSize = max;
        count = 0;
        vehicleArray = new Vehicle[max];
    };
    int ParkingLot::getCount(){
        return count;
    };
    void ParkingLot::parkVehicle(Vehicle* vehicle){
        if (count == maxSize){
            std::cout << "The lot is full\n";
        } else {
            vehicleArray[count] = *vehicle;
            count++;
        }
    };
    int ParkingLot::unparkVehicle(int id){
        for (int i = 0; i<count; i++){
            if (id == vehicleArray[i].getID()){
                for (int j=i; j<count-1; j++){
                    vehicleArray[j] = vehicleArray[j+1];
                    count--;
                    return 0;
                }
            } else if( i + 1 == count){
                std::cout << "Vehicle not in the lot\n";
                return 0;
            }
        }
    };
    ParkingLot::~ParkingLot(){
        delete[] vehicleArray;
    }