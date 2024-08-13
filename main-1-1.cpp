#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main(){
    int n = 5;
    Person* p = createPersonArray(n);

    for (int i=0;i<n;i++){
        cout << p[i].age << endl;
    }

    delete [] p;
    return 0;
}