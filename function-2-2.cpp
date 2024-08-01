#include <iostream>
#include <cmath>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){
    int b10=0, j=0;

    for (int i=number_of_digits-1;i>=0;i--){
        b10 += (binary_digits[i] * pow(2,j));
        
        j++;
    }
    return b10;
}