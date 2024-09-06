#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){
    Appliance* house1 = new TV[2], *house2 = new Fridge[2];
    Fridge f1(100, 21), f2(23, 444);
    TV TV1(32, 65), TV2(222,24);
    house1[0] = TV1;
    house1[1] = TV2;
    house2[0] = f1;
    house2[1] = f2;
    House h1(4);
    cout << f1.getPowerConsumption() << endl;
    cout << h1.addAppliance(house1) << " " << f1.getPowerConsumption() << endl;
    cout << h1.addAppliance(house2)<< " " << TV2.getPowerConsumption() << endl;
    cout << h1.addAppliance(house1)<< " " << TV1.getPowerConsumption() << endl;
    cout << h1.addAppliance(house2) << " " << f2.getPowerConsumption() << endl;
    cout << h1.addAppliance(&f2) << " " << f2.getPowerConsumption() << endl;
    cout << h1.getTotalPowerConsumption() <<  " " << h1.getPowerRating() << endl;
    return 0;
    
}