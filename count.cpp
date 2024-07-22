#include <iostream>
int count(int a[], int n){
    int count = 0;

    for (int i=0;i<n;i++){
        if (a[i]%2 == 0){
            count++;
        }
    }

    return count;

}