#include <iostream>

using namespace std;

void print_pass_fail(char grade){
    if (grade == 65 || grade == 66 || grade == 67){
        cout << "Pass";
    } else if (grade == 68 || grade == 70){
        cout << "Fail";
    }
    cout << endl;
}