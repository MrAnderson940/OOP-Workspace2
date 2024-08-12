#include <iostream>
#include "function-1-1.cpp"

using namespace std;

int main(){
    int* array;
    array = readNumbers();
    printNumbers(array, 10);
    delete[] array;
    return 0;
}