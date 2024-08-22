#include "MusicBox.h"
#include <iostream>

int main(){
    MusicBox m1, m2("hello",5);
    std::cout << m1.get_song() << " " << m1.get_width() << std::endl;
    std::cout << m2.get_song() << " " << m2.get_width() << std::endl;
    return 0;

}