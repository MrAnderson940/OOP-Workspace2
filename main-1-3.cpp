#include <iostream>

extern int num_count(int array[], int n, int number);

using namespace std;

int main(){
    int array[] = {1,2,3,4,5,5,5,5}, n=8;

    cout << num_count(array,n,3) << " " << num_count(array,n,5);
    cout << ' ' << num_count(array,n,(-1)) << endl;

    return 0;
}