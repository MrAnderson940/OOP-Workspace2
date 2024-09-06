#include "Car.h"

Car::Car(){

};
Car::Car(int p){
    price = p;
    emissions = 0;
};
void Car::drive(int kms){
    emissions += 20 * kms;
};
int Car::get_price(){
    return price;
};
int Car::get_emissions(){
    return emissions;
};
void Car::set_price(int p){
    price = p;
};
void Car::set_emissions(int e){
    emissions = e;
};