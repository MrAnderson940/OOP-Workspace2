#include <iostream>
#include "player.h"
using namespace std;


int main(){
    Player p1("Keth",100,4), p2("Owen",480,26);
    cout << p1.name << " " << p1.health << " " << p1.damage << endl;
    cout << p2.name << " " << p2.health << " " << p2.damage << endl;
    p2.attack(&p1, p2.damage);
    cout << p1.name << " " << p1.health << " " << p1.damage << endl;
    cout << p2.name << " " << p2.health << " " << p2.damage << endl;
    return 0;
}