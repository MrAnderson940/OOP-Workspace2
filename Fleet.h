#ifndef FLEET_H
#define FLEET_H
#pragma once 
#include "Tesla.h"
#include "Ford.h"
#include "Car.h"

class Fleet{
    private:
    

    public:
    Car** fleet;
    Fleet();
    Car **get_fleet();  
};




#endif