#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include "player.h"

class Warrior: public Player{
    public:
    std::string weapon;
    Warrior(std::string n, int h, int d, std::string weaponName);
    void swingWeapon(Player* opponent);
    std::string getWeapon();
    ~Warrior();
};


#endif