#include "Ford.h"

Ford::Ford(){

};            
Ford::Ford(int bn, int p){
    badgeNumber = bn;
    set_price(p);
    litresOfFuel = 60;
}; 
void Ford::refuel(int litres){
    litresOfFuel += litres;
    if (litresOfFuel > 60){
        litresOfFuel = 60;
    }
};
void Ford::drive(int kms){
    int emissions = get_emissions();
    for (int i=0; i<kms; i++){
        litresOfFuel -= .2;
        emissions += 234;
        if (litresOfFuel <= 0){
            litresOfFuel = 0;
            emissions -= 234;
            i = kms;
        }
    }
    set_emissions(emissions);
};  
void Ford::set_badgeNumber(int bn){
    badgeNumber = bn;
};
void Ford::set_litresOfFuel(float fuel){
    litresOfFuel = fuel;
};
int Ford::get_badgeNumber(){
    return badgeNumber;
};
float Ford::get_litresOfFuel(){
    return litresOfFuel;
};