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

int* readNumbers(){
    int* array = new int(10);
    for (int i=0;i<10;i++){
        cin >> array[i];
    }
    return array;
}