#include <iostream>
#include "Ford.h"
#include "Car.h"

using namespace std;

int main(){
    Ford f1, f2(333, 80000);
    cout << f1.get_badgeNumber() << " " << f1.get_emissions() << " " << f1.get_litresOfFuel() << " " << f1.get_price() << endl;
    cout << f2.get_badgeNumber() << " " << f2.get_emissions() << " " << f2.get_litresOfFuel() << " " << f2.get_price() << endl;
    f1.set_badgeNumber(888);
    f1.set_emissions(899);
    f1.set_litresOfFuel(48);
    f1.set_price(999999);
    f2.refuel(59);
    cout << f1.get_badgeNumber() << " " << f1.get_emissions() << " " << f1.get_litresOfFuel() << " " << f1.get_price() << endl;
    cout << f2.get_badgeNumber() << " " << f2.get_emissions() << " " << f2.get_litresOfFuel() << " " << f2.get_price() << endl;
    f2.drive(999);
    cout << f1.get_badgeNumber() << " " << f1.get_emissions() << " " << f1.get_litresOfFuel() << " " << f1.get_price() << endl;
    cout << f2.get_badgeNumber() << " " << f2.get_emissions() << " " << f2.get_litresOfFuel() << " " << f2.get_price() << endl;
    return 0;
}