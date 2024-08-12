#include <iostream>
using namespace std;

extern int* readNumbers();
extern void hexDigits(int* array, int length);

int main(){
    int* array;
    array = readNumbers();
    hexDigits(array, 10);
    delete[] array;
    return 0;
}