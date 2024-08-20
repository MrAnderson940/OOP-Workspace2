#include "Musician.h"

Musician::Musician(){
    std::string instrument;
    int experience = 0; 
}

Musician::Musician(std::string instrument, int experience){
    std::string instrument = instrument;
    int experience = experience; 
}

std::string Musician::get_instrument(){
    return Musician.instrument;
}

int Musician::get_experience(){
    return Musician.experiance;
}
