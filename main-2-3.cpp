#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
    int integers[] = {1,2,1}, n = 3;
    cout << sum_if_palindrome(integers,n) << endl;
    return 0;
}