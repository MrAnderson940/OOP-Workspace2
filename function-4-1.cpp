#include <iostream>

using namespace std;

int* readNumbers(){
    int* array = new int(4);
    for (int i=0;i<4;i++){
        cin >> array[i];
    }
    return array;
}

void printNumbers(int* array, int length){
    for (int i=0;i<length;i++){
        cout << i << " " << array[i] << endl;
    }

}

int secondSmallestSum(int *numbers,int length){
    int sumarray[10], test1, test2;
    sumarray[0]=numbers[0];
    sumarray[1]=numbers[0]+ numbers[1];
    sumarray[2]=numbers[0]+ numbers[1] + numbers[2];
    sumarray[3]=numbers[0]+ numbers[1] + numbers[2] + numbers[3];
    sumarray[4]=numbers[1];
    sumarray[5]=numbers[1] + numbers[2];
    sumarray[6]=numbers[1] + numbers[2] + numbers[3];
    sumarray[7]=numbers[2];
    sumarray[8]=numbers[2] + numbers[3];
    sumarray[9]=numbers[3];
    if (sumarray[0]< sumarray[1]){
        test1 = sumarray[0];
        test2 = sumarray[1];
    }   else {
        test2 = sumarray[0];
        test1 = sumarray[1];
    }    
    for (int i=2;i<10;i++){
        if (sumarray[i]<test1){
            test2 = test1;
            test1 = sumarray[i];
        } else if (sumarray[i] < test2){
            test2 = sumarray[i];
        }
        
    }
    return test2;

}