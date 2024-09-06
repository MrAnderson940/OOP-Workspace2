#ifndef CAR_H
#define CAR_H
#pragma once

class Car{
    private:
    int price, emissions;

    public:
    Car();
    Car(int p);
    void drive(int kms);
    int get_price();
    int get_emissions();
    void set_price(int p);
    void set_emissions(int e);

};




#endif