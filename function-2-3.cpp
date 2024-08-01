#include <iostream>

using namespace std;



bool is_palindrome(int integers[], int length){
    if (length<1){
        return false;
    }
    for (int i=0; i<length; i++){
        length--;
        if (integers[i] != integers[length]){
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length){
    if (length<1){
        return -1;
    }
    int sum = 0;
    for (int i = 0; i<length; i++){
        sum += integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length){
    if (length<1){
        return -1;
    }

    bool check;
    check = is_palindrome(integers,length);
    if (check == false){
        return -2;
    }

    int sum;
    sum = sum_array_elements(integers,length);
    return sum; 
}