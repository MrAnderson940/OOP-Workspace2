#include "StoreShelf.h"
#include "MusicBox.h"
#include <iostream>
    
    
    
StoreShelf::StoreShelf(){
    maxWidth = 0;
    currentWidth = 0;
    musicCount = 0;
    MusicBoxArray = nullptr;
};
StoreShelf::StoreShelf(int w){
    this->maxWidth = w;
    this->currentWidth = 0;
    this->musicCount = 0;
    this-> MusicBoxArray = new MusicBox[w];
};

int StoreShelf::get_width(){
    return maxWidth;
};

int StoreShelf::get_num_music_boxes(){
    return musicCount;
};


MusicBox *StoreShelf::get_contents(){
    return MusicBoxArray;
};

bool StoreShelf::add_music_box(MusicBox m1){
    if (m1.get_width() > maxWidth - currentWidth){
        return false;
    } else{
        currentWidth += m1.get_width();
        MusicBoxArray[musicCount] = m1;
        musicCount++;
        return true;
    }
};


StoreShelf::~StoreShelf(){
    delete[] MusicBoxArray;
};