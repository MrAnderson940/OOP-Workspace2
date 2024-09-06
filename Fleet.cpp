#include "Fleet.h"


Fleet::Fleet(){
    fleet = new Car*[5];
    Tesla t1('S', 10000);
    Ford f1(1, 20000);
    Car c1(30000);
    Ford f2(2, 40000); 
    Tesla t2('T', 50000);
    fleet[0] = &t1;
    fleet[1] = &f1;
    fleet[2] = &c1;
    fleet[3] = &f2;
    fleet[4] = &t2;
};
Car **Fleet::get_fleet(){
    return fleet;
};  