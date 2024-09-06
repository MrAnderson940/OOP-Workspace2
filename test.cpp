#include <iostream>
#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include "Appliance.h"


int main() {
    House myHouse(3);
    
    Appliance* tv = new TV(5,5);
    Appliance* fridge = new Fridge(2,2);
    
    if (!myHouse.addAppliance(tv)) {
        std::cerr << "Failed to add TV!" << std::endl;
    }
    if (!myHouse.addAppliance(fridge)) {
        std::cerr << "Failed to add Fridge!" << std::endl;
    }
    std::cout << "yes\n";
    std::cout << "Total Power Consumption: " << myHouse.getTotalPowerConsumption() << std::endl;
    
    return 0;
}