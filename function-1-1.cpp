#include <iostream>

using namespace std;

int sum_diagonal(int array[4][4]){
    int sum;
    sum = array[1][1] + array[2][2] + array[3][3] + array[0][0]; 

    return sum;
}