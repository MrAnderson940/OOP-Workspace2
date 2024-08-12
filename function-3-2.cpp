#include <iostream>
using namespace std;




int* reverseArray(int *numbers1,int length){
    for (int i=length-1; i>-1;i--){
        cin >> numbers1[i];
    }
    return numbers1;
}

void printNumbers(int* array, int length){
    for (int i=0;i<length;i++){
        cout << i << " " << array[i] << endl;
    }

}