#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){
    Fridge f1(1, 100), f2;
    cout << f1.get_powerRating() << " " << f1.get_isOn() << " " << f1.getVolume() << " " << f1.getPowerConsumption() << endl;
    cout << f2.get_powerRating() << " " << f2.get_isOn() << " " << f2.getVolume() << " " << f2.getPowerConsumption() << endl;

    f2.set_powerRating(30);
    f2.set_isOn(true);
    f2.setVolume(4442);
    f1.turnOn();
    cout << endl << endl;
    cout << f1.get_powerRating() << " " << f1.get_isOn() << " " << f1.getVolume() << " " << f1.getPowerConsumption() << endl;
    cout << f2.get_powerRating() << " " << f2.get_isOn() << " " << f2.getVolume() << " " << f2.getPowerConsumption() << endl;

    f1.turnOff();
    cout << endl << endl;
    cout << f1.get_powerRating() << " " << f1.get_isOn() << " " << f1.getVolume() << " " << f1.getPowerConsumption() << endl;
    return 0;


}