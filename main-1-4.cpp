#include <iostream>

using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[] = {1,2,3,4,5}, secondarray[] = {6,7,8,9,10}, n=5;

    cout << sum_two_arrays(array, secondarray, n) << ' ';
    cout << sum_two_arrays(array, array, (-3)) << endl; 

    return 0;
}