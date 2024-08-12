#include <iostream>
using namespace std;

bool equalsArray(int *numbers1,int *numbers2,int length){
    for (int i=0; i<length; i++){
        if (numbers1[i] != numbers2[i]){
            return false;
        }
    }
    return true;
}


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