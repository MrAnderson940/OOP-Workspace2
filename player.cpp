#include "player.h"
#include <iostream>

    Player::Player(std::string n, int h, int d){
        name = n;
        health = h;
        damage = d;
    };
    void Player::attack(Player* opponent, int dam){
        opponent->takeDamage(dam);
    };
    void Player::takeDamage(int dam){
        health -= dam;
    };
    Player::~Player(){

    };