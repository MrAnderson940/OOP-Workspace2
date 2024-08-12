#include <iostream>

using namespace std;
extern int* readNumbers();
extern void printNumbers(int* array, int length);
extern int secondSmallestSum(int *numbers,int length);


int main(){
    int* array1;
    array1 = readNumbers();
    cout << secondSmallestSum(array1,4) << endl;




    delete[] array1;
    return 0;
}