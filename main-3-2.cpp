#include <iostream>

using namespace std;

extern int median_array(int array[], int n);

int main(){
    int array1[] = {1,2,3,4,5}, n1=5;
    int array2[] = {3,4,2,5,1};
    int array3[] = {-5,3,0,4,214}, n2=2;
    int n3=-6;
     // cout << "t \n";
    cout << median_array(array1, n1) << endl;
    cout << median_array(array1, n2) << endl;
    cout << median_array(array1, n3) << endl;
    cout << median_array(array2, n1) << endl;
    cout << median_array(array3, n1) << endl;

    return 0;

}