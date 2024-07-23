#include <iostream>

using namespace std;

extern int min_element(int array[], int n);

int main(){
    int arrry1[] = {1,2,-5,4,5}, array2[] = {5,2,3,4,1};
    cout << min_element(arrry1,5) << endl;
    cout << min_element(array2,5) << endl;
    cout << min_element(arrry1,-6) << endl;

    return 0;
}