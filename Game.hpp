#ifndef GAME_HPP
#define GAME_HPP
#pragma once
#include <math.h>
#include <iostream>
#include "GridItem.hpp"
#include "Robot.hpp"

class Game{

    public:
    Game(int width, int height/*, std::vector<std::pair<int, int>> obstacleCoordinates*/){
        Robot player(1,1);
    }
};
#endif