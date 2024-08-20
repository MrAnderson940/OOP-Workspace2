#include "Musician.h"
#include <iostream>

Musician::Musician(){
    instrument = "";
    experience = 0; 
}

Musician::Musician(std::string i, int exp){
    instrument = i;
    experience = exp; 
}

std::string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience(){
    return experience;
}
