#include <iostream>
#include <math.h>

using namespace std;

double weighted_average(int array[], int n){
    if (n<1){
        return 0;
    }

    double total = 0; 
    int repeat, test;

    for (int i=0; i<n; i++){
        test = array[i];
        repeat = 0;
        for (int j=0; j<n; j++){
            if (array[j] == test){
                repeat++;
            }
        }
        total = total + ((test * repeat));
    }
    total = total / n;

    return total;
}