#include "MusicBox.h"
#include <iostream>


MusicBox::MusicBox(){
    width = 0;
    songname = "";
};

MusicBox::MusicBox(std::string sn, int w){
    width = w;
    songname = sn;
};

std::string MusicBox::get_song(){
    return songname;
};


int MusicBox::get_width(){
    return width;
};

MusicBox::~MusicBox(){
};