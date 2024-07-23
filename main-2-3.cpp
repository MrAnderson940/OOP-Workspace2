#include <iostream>

using namespace std;

extern void two_five_nine(int array[], int n);

int main(){
    int array[] = {1,2,2,2,3,4,4,4,4,5,5,5,6,7,8,9,9,9,9,9,9,9,9};
    two_five_nine(array,26);
    two_five_nine(array,-6);
    return 0;
}