#include <iostream>

using namespace std;

extern bool is_descending(int array[], int n);

int main(){
    int array1[] = {10,10,9,8,8,7,7,6,6,6,5,4,3,3,2,1,1};
    int n = 17;
    int array2[] = {10,10,9,8,8,7,7,64,6,6,5,4,3,3,2,1,1};
    int array3[] = {1,10,9,8,8,7,7,6,6,6,5,4,3,3,2,1,1};

    cout << is_descending(array1,n) << endl;
    cout << is_descending(array2,n) << endl;
    cout << is_descending(array3,n) << endl;
    cout << is_descending(array1,-7) << endl;
    return 0;
}