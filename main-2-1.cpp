#include <iostream>
#include <string>

using namespace std;

extern void print_binary_str(std::string decimal_number);

int main(){
    string str1 = "1234";
    print_binary_str(str1);

    return 0;
}