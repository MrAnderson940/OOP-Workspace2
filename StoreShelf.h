#ifndef STORESHELF_H
#define STORESHELF_H
#include <iostream>
#include "MusicBox.h"

class StoreShelf
{
private:
    int maxWidth, currentWidth, musicCount;
    MusicBox* MusicBoxArray;
public:
    StoreShelf();
    StoreShelf(int w);

    int get_width();
    int get_num_music_boxes();
    MusicBox *get_contents();
    bool add_music_box(MusicBox m1);


    ~StoreShelf();
};



#endif