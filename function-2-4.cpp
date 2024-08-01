#include <iostream>

using namespace std;

int array_min(int integers[], int length){
    if (length<1){
        return -1;
    }
    int min = integers[0];
    for (int i=1; i<length; i++){
        if (min > integers[i]){
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length){
    if (length<1){
        return -1;
    }
    int max = integers[0];
    for (int i=1; i<length; i++){
        if (max < integers[i]){
            max = integers[i];
        }
    }
    return max;
}

int array_min_max(int integers[], int length){
    if (length<1){
        return -1;
    }
    int max, min, sum;
    max = array_max(integers, length);
    min = array_min(integers, length);
    sum = max + min;
    return sum;
}