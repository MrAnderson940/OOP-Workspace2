#include "wizard.h"
#include <iostream>
#include "player.h"

    Wizard::Wizard(std::string n, int h, int d, int m){
        name = n;
        health = h;
        damage = d;
        mana = m;
    };
    void Wizard::castSpell(Player* opponent){
        opponent->takeDamage(mana);
    };
    int Wizard::getMana(){
        return mana;
    };
    Wizard::~Wizard(){

    };