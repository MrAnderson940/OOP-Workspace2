#include <iostream>
#include "function-2-1.cpp"
using namespace std;

int main(){
    int* array;
    array = readNumbers();
    hexDigits(array, 10);
    delete[] array;
    return 0;
}