#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP
#pragma once
#include <math.h>
#include <iostream>
#include "GridItem.hpp"
#include "Robot.hpp"
using namespace std;

class Interactable: public GridItem{
    private:
    public:
    Interactable(){
        setCoordinates(0,0);
    }
    virtual bool interact(Robot* player){
        
    }
};

#endif
