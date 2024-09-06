#ifndef FLEET_H
#define FLEET_H
#pragma once 
#include "Tesla.h"
#include "Ford.h"
#include "Car.h"

class Fleet{
    private:
    Car** fleet;

    public:
    Fleet();
    Car **get_fleet();  
};




#endif