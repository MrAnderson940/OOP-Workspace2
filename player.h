#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {
    public:
    std::string name;
    int health;
    int damage;
    Player();
    Player(std::string n, int h, int d);
    void attack(Player* opponent, int dam);
    void takeDamage(int dam);
    int getHealth();
    int getDamage();
    std::string getName();
    ~Player();
};

#endif