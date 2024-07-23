#include <iostream>

using namespace std;

int count_evens(int number){
    int evens = 0;

    for (int i=1; i<number; i+=2){
        evens++;
    }

    return evens;
}