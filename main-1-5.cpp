#include <iostream>

using namespace std;

extern int count_evens(int number);

int main(){
    cout << count_evens(10) << endl;
    cout << count_evens(1) << endl;
    cout << count_evens(0) << endl;
    cout << count_evens(2) << endl;
    cout << count_evens(-10) << endl;
    return 0;
}