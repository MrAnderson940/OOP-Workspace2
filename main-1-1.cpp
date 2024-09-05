#include "Appliance.h"
#include <iostream>

using namespace std;

int main(){
    Appliance a1(50), a2, a3(23614);
    cout << a1.get_isOn() << " " << a1.get_powerRating() << endl;
    
    cout << a2.get_isOn() << " " << a2.get_powerRating() << endl;
    cout << a3.get_isOn() << " " << a3.get_powerRating() << endl;

    a2.set_isOn(true);
    a2.set_powerRating(3);
    a1.turnOn();

    cout << endl << endl << a1.get_isOn() << " " << a1.get_powerRating() << endl;
    
    cout << a2.get_isOn() << " " << a2.get_powerRating() << endl;
    cout << a3.get_isOn() << " " << a3.get_powerRating() << endl;


    a1.turnOff();
    cout << endl << endl << a1.get_isOn() << " " << a1.get_powerRating() << endl;

    return 0;


}