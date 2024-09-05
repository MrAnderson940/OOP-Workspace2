#include "House.h"
#include <iostream>

House::House(){
    numAppliance = 0;
    appliances = nullptr;
    maxAppliance = 0;
};
House::House(int num){
    numAppliance = 0;
    maxAppliance = num;
    appliances = new Appliance*[num];
};
bool House::addAppliance(Appliance* a){
    if (numAppliance == maxAppliance){
        return false;
    } else {
        appliances[numAppliance] = a;
        numAppliance++;
        return true; 
    }
};
double House::getTotalPowerConsumption(){
    double power = 0;
    for (int i=0; i<numAppliance; i++){
        std::cout << appliances[i]->getPowerConsumption() << " ";
        power =+ appliances[i]->getPowerConsumption();
    }
    std::cout << std::endl;
    return power;
};
int House::getPowerRating(){
    return appliances[0]->get_powerRating();
}