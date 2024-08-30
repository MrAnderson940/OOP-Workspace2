#include "warrior.h"
#include "player.h"
#include <iostream>


    Warrior::Warrior(std::string n, int h, int d, std::string weaponName){
        name = n;
        weapon = weaponName;
        health = h;
        damage = d;
    };
    void Warrior::swingWeapon(Player* opponent){
        opponent->takeDamage(damage);
    };
    std::string Warrior::getWeapon(){
        return weapon;
    };
    Warrior::~Warrior(){

    };