#include "MusicBox.h"
#include "StoreShelf.h"
#include <iostream>

int main(){
    MusicBox m1, m2("hello",5);
    StoreShelf s1, s2(9);

    std::cout << s1.get_width() << " " << s1.get_num_music_boxes() << " " << s1.get_contents() << std::endl;
    std::cout << s2.get_width() << " " << s2.get_num_music_boxes() << " " << s2.get_contents() << std::endl;
    std::cout << s2.add_music_box(m2) << " " << s2.add_music_box(m2) << std::endl;
    std::cout << s2.get_width() << " " << s2.get_num_music_boxes() << " " << s2.get_contents() << std::endl;
    return 0;
}