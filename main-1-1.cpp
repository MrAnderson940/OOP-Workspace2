#include <iostream>
#include "Car.h"

using namespace std;

int main(){
    Car c1, c2(8000);
    cout << c1.get_emissions() << " " << c1.get_price() << endl;
    cout << c2.get_emissions() << " " << c2.get_price() << endl;
    c2.drive(40);
    c1.set_emissions(4000);
    c1.set_price(41241); 
    cout << c1.get_emissions() << " " << c1.get_price() << endl;
    cout << c2.get_emissions() << " " << c2.get_price() << endl;
    return 0;
}