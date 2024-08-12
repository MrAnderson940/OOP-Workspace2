#include <iostream>

extern int* reverseArray(int *numbers1,int length);
extern void printNumbers(int* array, int length);
extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);


using namespace std;

int main(){
    int array1[] = {1,2,3,4}, array2[] = {1,3,3,4}, n=4, *array3 = new int(4);
    array3 = reverseArray(array3, 4);
    printNumbers(array3, 4);
    delete[] array3;
    
    return 0;
}