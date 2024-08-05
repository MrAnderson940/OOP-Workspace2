#include <iostream>
using namespace std;

void changeValue(double* a){
    *a = 42;
}

void printArray(double* a, int n){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

double arrayMax(double* a, int n){
    double max=a[0];
    for (int i=1; i<n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}

double* dynamicArray(int n, double m){
    // cout << "t1\n";
    double* array = new double[n]; 
    // cout << "t2\n" << &array << endl << (&array + 1) << endl;
    for (int i=0; i<n; i++){
        // cout << "t3\n" << &array +i << endl << &i << endl;
        array[i] = m;
        
        // cout << *(&array+i) << " " << i << endl;
    };
    return array;
}