#include <iostream>

using namespace std;

void transform(int b10, int b2[64]){
    bool bigger = true;

    for (int i=63; bigger == true && i >=0; i-- ){
        b2[i] = b10 % 2;
        b10 = b10 / 2;
        if (b10 < 2){
            bigger = false;
            b2[i-1] = 1;
        }
    }
    

}


int main(){
    int b10 = 244, b2[64];
    transform(b10,b2);
    for (int i=0; i<64; i++){
        if (b2[i] == 0 || b2[i] == 1){
            cout << b2[i];
        } 
    }
    cout << endl;
    return 0;
}
