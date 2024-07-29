#include <iostream>

using namespace std;

void add(int *a, int *b, int *addtion){
    int overflow = 0;

    for (int i=63; i >=0; i--){
        if ((a[i] +b[i] + overflow) < 2) {
            addtion[i] = a[i] +b[i] + overflow;
            overflow = 0;
        } else if ((a[i] +b[i] + overflow) == 2){
            addtion[i] = 0; 
            overflow = 1;
        } else if ((a[i] +b[i] + overflow) == 3){
            addtion[i]=1;
            overflow = 1;
        }
    }
}


int main(){
    int addition[64], a[64]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
    int b[64]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
    add(a,b,addition);
        for (int i=0; i<64; i++){
        if (addition[i] == 0 || addition[i] == 1){
            cout << addition[i];
        } 
    }
    cout << endl;
    return 0;
}