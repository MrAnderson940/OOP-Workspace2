#include <iostream>

using namespace std;

double* duplicateArray(double* array, int size){
    double* Narray = new(double);
    for (int i=0; i<size;i++){
        Narray[i]=array[i];

    }
    return Narray;
}