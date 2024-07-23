#include <iostream>

using namespace std;

int array_sum(int array[], int n){
    // Write a function that returns the sum of all elements in 
    // an int array. The parameters of the function are the array 
    // and the number of elements in the array


    // if n is less then 1 retun 0
    if (n<1){
        return 0;
    }

    // summing the array

    int sum = 0;

    for (int i=0; i<n; i++){
        sum += array[i];
    }

    return sum;

}