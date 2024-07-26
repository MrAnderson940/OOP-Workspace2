#include <iostream>

using namespace std;

extern void print_pass_fail(char grade);

int main(){
    char a='A', b='B',c='C',d='D',e='E',f='F';
    print_pass_fail(a);
    print_pass_fail(b);
    print_pass_fail(c);
    print_pass_fail(d);
    print_pass_fail(e);
    print_pass_fail(f);

    return 0;
}