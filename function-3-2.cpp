#include <iostream>

using namespace std;
// {1,2,3,4,5} 5
int median_array(int array[], int n){
    if (n<1 || n%2 == 0){
        return 0;
    }
    int orderd[n], size;
    int num, pos, median;
    size = n;
    n--;
    
    for (int i=0; i<size; i++){
        pos = 0;
        num = array[0];
        for (int j=1; j<size; j++){
            if (array[j] > num){
                num = array[j];
                pos = j;
            }
        }
        orderd[n] = num;
        n--;
        array[pos] = -156932505;
        //cout << num << endl;
    }

    median = orderd[((size+1)/2)-1];
    
    //cout << "t \n";
    return median;


}