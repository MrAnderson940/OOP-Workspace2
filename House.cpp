#include "House.h"
#include "Appliance.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

House::House(){
    numAppliance = 0;
    appliances = nullptr;
    maxAppliance = 0;
};
House::House(int num){
    numAppliance = 0;
    maxAppliance = num;
    appliances = new Appliance*[num]();
    for (int i = 0; i < num; ++i) {
        appliances[i] = nullptr;  // Initialize to nullptr
    }
};
bool House::addAppliance(Appliance* a){
    if (numAppliance >= maxAppliance){
        return false;
    } else {
        appliances[numAppliance] = a;
        numAppliance++;
        return true; 
    }
};
double House::getTotalPowerConsumption(){
    double power = 0;
    std::cout << appliances[0] << " " << appliances[1] << " " << numAppliance << std::endl;
    for (int i=0; i<numAppliance; i++){
        if (appliances[i] != nullptr){
            std::cout << "t\n";
            std::cout << appliances[i]->getPowerConsumption() << " ";
            std::cout << "poo\n";
            power += appliances[i]->getPowerConsumption();
            std::cout << power << std::endl;
        }
    }
    //std::cout << std::endl;
    
    return power;
};
int House::getPowerRating(){
    return appliances[0]->getPowerConsumption();
}

House::~House(){
    delete[] appliances;
};