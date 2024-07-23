#include <iostream>

using namespace std;

extern int array_sum(int array[], int n);

int main(){

    int array[] = {1, 2, 3, 4, 5}, n = 5;
    cout << array_sum(array,n) << endl;

    return 0;
}