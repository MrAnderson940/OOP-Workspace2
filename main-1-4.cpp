#include <iostream>

extern void print_scaled(int array[3][3],int scale);

using namespace std;

int main(){
    int array[3][3] = {{0,1,2},{3,4,5},{6,7,8}}, scale = 3;
    print_scaled(array,scale);

    return 0;
}