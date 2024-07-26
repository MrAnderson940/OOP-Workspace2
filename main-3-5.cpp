#include <iostream>

using namespace std;

extern double sum_even(double array[], int n);

int main(){
    double array1[] = {10,10,9,8,8,7,7,6,6,6,5,4,3,3,2,1,1};
    int n = 17;
    double array2[] = {10,10,9,8,8,7,7,64,6,6,5,4,3,3,2,1,1};
    double array3[] = {1,10,9,8,8,7,7,6,6,6,5,4,3,3,2,1,1};

    cout << sum_even(array1,n) << endl;
    cout << sum_even(array3,n) << endl;
    cout << sum_even(array2,n) << endl;
    cout << sum_even(array1,-3) << endl;
}