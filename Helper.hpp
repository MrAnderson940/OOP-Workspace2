#ifdef HELPER_HPP
#define HELPER_HPP

#pragma once

class Helper{
private:
    
public:
    Helper();
    / function to calculate the euclidean distance between two coordinates.
    double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        double n;
        n = item2.getCordnates()-item1.getCordnates()
        n = n^(1/2);
    }
    ~Helper();
};




#endif