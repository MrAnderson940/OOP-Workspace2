#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#pragma once

class GridItem{
private:
    int x, y, width, height, itemCount;

GridItem(int lx, int ly, int w, int h){
    x=lx;
    y=ly;
    width=w;
    height=h;
    itemCount=0;
};
GridItem(){
    x=0;
    y=0;
    width=1;
    height=1;
    itemCount=0;
};
void setCoordinates(int lx, int ly){
    x=lx;
    y=ly;
}
std::pair<int,int> getCoordinates()
int getGridWidth(){
    return width;
}
int getGridHeight(){
    return height;
}
int getActiveGridItemCount(){
    return itemCount;
};
~GridItem(){}
};
#endif