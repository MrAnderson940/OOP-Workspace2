#include <iostream>
extern int* readNumbers();
extern void printNumbers(int* array, int length);

using namespace std;

int main(){
    int* array;
    array = readNumbers();
    printNumbers(array, 10);
    delete[] array;
    return 0;
}