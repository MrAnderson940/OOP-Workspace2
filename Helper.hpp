#ifdef HELPER_HPP
#define HELPER_HPP


#pragma once
#include <math.h>
#include <iostrem> 

namespace helper{
    
} // namespace helper
    Helper();
    / function to calculate the euclidean distance between two coordinates.
    double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        double n;
        n = (item2.second-item1.second)^2 + (item2.first-item1.first)^2;
        n = n^(1/2);
        return n;
    }
    ~Helper();

};




#endif