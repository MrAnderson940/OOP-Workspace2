#ifndef MUSICBOX_H
#define MUSICBOX_H
#include <iostream>


class MusicBox
{
private:
    int width;
    std::string songname;
public:
    MusicBox();
    MusicBox(std::string sn, int w);

    std::string get_song();
    int get_width();



    ~MusicBox();
};



#endif 