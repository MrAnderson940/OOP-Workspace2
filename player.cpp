#include "player.h"
#include <iostream>

    Player::Player(){
        name = "";
        health = 0;
        damage = 0;
    };

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
    int Player::getHealth(){
        return health;
    };
    int Player::getDamage(){
        return damage;
    };
    std::string Player::getName(){
        return name;
    };

    Player::~Player(){

    };

