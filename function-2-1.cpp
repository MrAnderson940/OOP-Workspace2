#include <iostream>
#include <string>

using namespace std;


void print_binary_str(std::string decimal_number){
bool bigger = false, start = false;
int b10, b2[64] = {0};
b10 = stoi(decimal_number);
    
    for (int i=63; bigger == false && i >=0; i-- ){
        b2[i] = b10 % 2;
        b10 = b10 / 2;
        if (b10 < 2){
            bigger = false;
            b2[i-1] = 1;
        }
    }

    for (int i=0;i<64;i++){
        if (start == false && b2[i] == 1){
            cout << b2[i];
            start = true;
        } else if (start == true){
            cout << b2[i];
        }
    }
    cout << endl;
}