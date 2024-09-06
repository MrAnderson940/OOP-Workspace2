#include <iostream>
#include "Tesla.h"
#include "Car.h"

using namespace std;

int main(){
    Tesla t1, t2('s', 100000);
    cout << t1.get_batterPercentage() << " " << t1.get_emissions() << " " << t1.get_model() << " " << t1.get_price() << endl;
    cout << t2.get_batterPercentage() << " " << t2.get_emissions() << " " << t2.get_model() << " " << t2.get_price() << endl;
    t1.set_batterPercentage(40);
    t1.set_emissions(800);
    t1.set_model('t');
    t1.set_price(51351);
    t2.drive(900);
    cout << t1.get_batterPercentage() << " " << t1.get_emissions() << " " << t1.get_model() << " " << t1.get_price() << endl;
    cout << t2.get_batterPercentage() << " " << t2.get_emissions() << " " << t2.get_model() << " " << t2.get_price() << endl;
    t2.chargeBattery(10);
    cout << t1.get_batterPercentage() << " " << t1.get_emissions() << " " << t1.get_model() << " " << t1.get_price() << endl;
    cout << t2.get_batterPercentage() << " " << t2.get_emissions() << " " << t2.get_model() << " " << t2.get_price() << endl;
    return 0;

}