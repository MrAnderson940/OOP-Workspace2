#include <iostream>

using namespace std;

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main(){
    int array[]= {1,2,3,4}, n=4;
    cout << sum_min_max(array,n) << endl;
    return 0;
}