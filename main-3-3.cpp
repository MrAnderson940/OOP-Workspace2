#include <iostream>

using namespace std;

extern double weighted_average(int array[], int n);


int main(){
    int array1[]={1,2,1,4,1,3}, n=6;
    cout << weighted_average(array1,n) << endl;
    cout << weighted_average(array1,0) << endl;

    return 0;
}