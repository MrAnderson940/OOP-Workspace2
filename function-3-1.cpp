#include <iostream>

using namespace std;

bool is_fanarray(int array[], int n){
    if (n<1){
        return false;
    }

    int frount, back;
    n--;
    frount = array[0];
    back = array[n];

    for (int i=1; i<n; i++){
        if (frount == back){
            n--;
            frount = array[i];
            back = array[n];
        } else {
            return false;
        }

    }

    return true;

}