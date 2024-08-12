#include <iostream>
#include "function-3-2.cpp"

using namespace std;

int main(){
    int array1[] = {1,2,3,4}, array2[] = {1,3,3,4}, n=4, *array3 = new int(4);

    cout << equalsArray(array1,array2,n) << endl;
    array3 = reverseArray(array3, 4);
    printNumbers(array3, 4);
    delete[] array3;
    
    return 0;
}