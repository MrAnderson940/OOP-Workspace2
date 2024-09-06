#include <iostream>
#include "Tesla.h"
#include "Ford.h"
#include "Car.h"
#include "Fleet.h"

using namespace std;

int main(){
    Fleet f1;
    Car** fleet = f1.get_fleet();
    cout << fleet[0]->get_price() << endl;
    cout << f1.get_fleet() << endl;
}