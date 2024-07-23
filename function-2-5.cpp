#include <iostream>

using namespace std;

bool is_descending(int array[], int n){
    if (n<1){
        return false;
    }
    int element;
    element = array[0];

    for (int i=1; i<n; i++){
        if (element>=array[i]){
            element = array[i];
        } else {
            return false;
        }
    }
    return true;
}