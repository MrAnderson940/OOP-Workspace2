#ifndef ROBOT_HPP
#define ROBOT_HPP

#pragma once

#include <math.h>
#include <iostream>
#include "GridItem.hpp"

class Robot : public GridItem {
private:
    int health;
public:
Robot(int gWidth, int gHeight){
    setGridWitdth(gWidth);
    setGridHeight(gHeight);
    health =3;
    setCoordinates(0,0);
 }
int getHealth(){
    return health;
} // gets the current health of the robot
void takeHit(){
    health--;
    if (health < 0){
        health=0;
    }
} // decrements the health of the robot. The robot cannot have negative health
bool move(int xOffset, int yOffset){
    int px = getCoordinates().first, py = getCoordinates().second;
    px += xOffset;
    py += yOffset;
    setCoordinates(px,py);
}
};


#endif