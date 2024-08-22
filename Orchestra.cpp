#include "Orchestra.h"
#include "Musician.h"
#include <iostream>


Orchestra::Orchestra() {
    size = 0;
    numMember = 0;
    memberArray = nullptr;
}

Orchestra::Orchestra(int n){
    this->size = n;
    this->numMember = 0;
    this->memberArray = new Musician[n];
}

int Orchestra::get_current_number_of_members(){
    return numMember;
}

bool Orchestra::has_instrument(std::string inst){
    for (int i=0; i<size;i++){
        if (memberArray[i].get_instrument() == inst){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){
    return memberArray;
}

bool Orchestra::add_musician(Musician new_musician){
    if (numMember < size){
        memberArray[numMember] = new_musician;
        numMember++;
        return true;
    } else{
    return false;
    }
}

Orchestra::~Orchestra(){
    delete[] memberArray;
}