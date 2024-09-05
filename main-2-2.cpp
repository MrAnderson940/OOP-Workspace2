#include "TV.h"
#include <iostream>

using namespace std;

int main(){
    TV f1(1, 100), f2;
    cout << f1.get_powerRating() << " " << f1.get_isOn() << " " << f1.getScreenSize() << " " << f1.getPowerConsumption() << endl;
    cout << f2.get_powerRating() << " " << f2.get_isOn() << " " << f2.getScreenSize() << " " << f2.getPowerConsumption() << endl;

    f2.set_powerRating(30);
    f2.set_isOn(true);
    f2.setScreenSize(4442);
    f1.turnOn();
    cout << endl << endl;
    cout << f1.get_powerRating() << " " << f1.get_isOn() << " " << f1.getScreenSize() << " " << f1.getPowerConsumption() << endl;
    cout << f2.get_powerRating() << " " << f2.get_isOn() << " " << f2.getScreenSize() << " " << f2.getPowerConsumption() << endl;

    f1.turnOff();
    cout << endl << endl;
    cout << f1.get_powerRating() << " " << f1.get_isOn() << " " << f1.getScreenSize() << " " << f1.getPowerConsumption() << endl;
    return 0;   
}