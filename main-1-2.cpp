#include <iostream>

extern void modifyArray(double* array, int size, double value);

using namespace std;

int main(){
    double array1[] = {1,2,3,4}, value =9;
    int n=4;

    modifyArray(array1,n,value);

    for (int i=0; i<n; i++){
        cout << array1[i] << " ";

    }
    cout << endl;
    return 0;
}