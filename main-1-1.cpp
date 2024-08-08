#include <iostream>

extern double arrayMin(double* array, int size);

using namespace std;

int main(){
    double array1[] = {1,2,3,4};
    int n1=4;

    cout << arrayMin(array1,n1) << endl;

    return 0;
}