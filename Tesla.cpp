#include "Tesla.h"


Tesla::Tesla(){
    batteryPercentage = 100;
};           
Tesla::Tesla(char m, int p){
    model = m;
    set_price(p);
    batteryPercentage = 100;
};
void Tesla::chargeBattery(int mins){
    batteryPercentage += mins * 0.5;
    if (batteryPercentage > 100){
        batteryPercentage = 100;
    }
};            
void Tesla::drive(int kms){
    int emissions = get_emissions();
    for(int i=0;i<kms;i++){
        batteryPercentage -= 0.2;
        emissions += 74;
        if (batteryPercentage <= 0){
            i = kms;
            batteryPercentage = 0;
        }
    }
    set_emissions(emissions);
}; 
char Tesla::get_model(){
    return model;
};
float Tesla::get_batterPercentage(){
    return batteryPercentage;
};
void Tesla::set_model(char m){
    model = m;
};
void Tesla::set_batterPercentage(float b){
    batteryPercentage = b;
};