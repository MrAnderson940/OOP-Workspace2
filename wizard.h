#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard: public Player{
    public:
    int mana;
    Wizard(std::string n, int h, int d, int m);
    void castSpell(Player* opponent);
    int getMana();
    ~Wizard();
};



#endif