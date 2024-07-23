#include <iostream>

using namespace std;

extern int max_element(int array[], int n);

int main(){
    int arrry1[] = {1,2,-5,834,5}, array2[] = {5,2,3,4,1};
    cout << max_element(arrry1,5) << endl;
    cout << max_element(array2,5) << endl;
    cout << max_element(arrry1,-6) << endl;

    return 0;
}