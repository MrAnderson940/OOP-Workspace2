#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int b2[]={1,0,0,1}, n=4;
    cout << binary_to_int(b2,n) << endl;
    return 0;
}