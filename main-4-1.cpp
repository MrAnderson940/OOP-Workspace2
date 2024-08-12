#include <iostream>
#include "function-4-1.cpp"

using namespace std;

int main(){
    int* array1;
    array1 = readNumbers();
    cout << secondSmallestSum(array1,4) << endl;




    delete[] array1;
    return 0;
}