#include <iostream>

using namespace std;

double array_mean(int array[], int n){
    
   
    // if n is less then 1 retun 0
    if (n<1){
        return 0;
    }

    // summing the array

    int sum = 0, adv = 0;

    for (int i=0; i<n; i++){
        sum += array[i];
    }

    adv = sum/n;

    return adv;

}