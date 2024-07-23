#include <iostream>

using namespace std;

extern double array_mean(int array[], int n);

int main(){
    int array[] = {1, 2, 3, 4, 5}, n = 5;


    cout << array_mean(array,n) << endl;

    return 0;
}