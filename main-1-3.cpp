#include <iostream>

using namespace std;

extern double* duplicateArray(double* array, int size);

int main(){
    double array[] = {1,2,3,4}, *array2;
    int n=4;
    array2 = duplicateArray(array,n);

        for (int i=0; i<n; i++){
        cout << array2[i] << " ";

    }
    cout << endl;

    delete[] array2;
    return 0;
}