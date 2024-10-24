#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP
#include <math.h>
#include <iostream>
#pragma once

class GridItem{
private:
    int x, y, width, height, itemCount;

public:
GridItem(int lx, int ly, int w, int h): GridItem(){
    x=lx;
    y=ly;
    width=w;
    height=h;
    itemCount=0;
}
GridItem(){
    x=0;
    y=0;
    width=0;
    height=0    ;
    itemCount=0;
}
void setCoordinates(int lx, int ly){
    x=lx;
    y=ly;
}
std::pair<int,int> getCoordinates(){
    std::pair<int,int> pair;
    pair.first = x;
    pair.second =y;
    return pair;
}

int getGridWidth(){
    return width;
}

int getGridHeight(){
    return height;
}

int getActiveGridItemCount(){
    return 5;
}

~GridItem(){}
};
#endif