#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){
    Fridge f1(100, 21), f2(23, 444);
    TV TV1(32, 65), TV2(222,24);
    House h1(4);
    h1.addAppliance(&f1);
    h1.addAppliance(&TV2);
    h1.addAppliance(&TV1);
    h1.addAppliance(&f2);
    cout << h1.getTotalPowerConsumption() << h1.getPowerRating() << endl;
    return 0;
    
}