#include <iostream>

extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int* readNumbers();


using namespace std;

int main(){
    int array1[] = {1,2,3,4}, array2[] = {1,3,3,4}, n=4;

    cout << equalsArray(array1,array2,n) << endl;
    
    return 0;
}