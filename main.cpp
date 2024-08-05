#include "workshop.h"
#include <iostream>

using namespace std;

int main(){
    double a=1.86, array1[]={2.33, 6.89, 72.88};
    double *p1;
    int n=3;
    p1 = &a; 
    char b='t', *p2;
    p2 = &b;
    changeValue(p1);
    cout << a << endl;

    printarray(array1, n);
    cout << arrayMax(array1,n) << endl;
    double *array2;
    array2 = dynamicArray(n);
    // cout << "t/n";
    printarray(array2, n);
    delete[] array2;
    return 0;
}