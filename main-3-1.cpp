#include <iostream>

using namespace std;

extern bool is_fanarray(int array[], int n);

int main(){
    int array1[] = {1,2,3,2,1}, n1=5;
    int array2[] = {1,2,2,1}, n2=4;
    int array3[] = {2,4,4,2};
    int array4[] = {1,2,1,2,1}, n3=-3;

    cout << is_fanarray(array1,n1) << endl;
    cout << is_fanarray(array2,n2) << endl;
    cout << is_fanarray(array3,n2) << endl;
    cout << is_fanarray(array4,n3) << endl;
    cout << is_fanarray(array4,n1) << endl;
}