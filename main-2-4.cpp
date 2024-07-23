#include <iostream> 

using namespace std;

extern bool is_ascending(int array[], int n);

int main(){
    int array1[]={1,1,2,3,4,4,5,6,7,7,8,9,10,10};
    int array2[]={1,1,2,1,4,4,5,6,7,7,8,9,10,10};
    int array3[]={10,1,2,3,4,4,5,6,7,7,8,9,10,10};
    int n = 14;

    cout << is_ascending(array1,n) << endl;
    cout << is_ascending(array2,n) << endl;
    cout << is_ascending(array3,n) << endl;
    return 0;
}