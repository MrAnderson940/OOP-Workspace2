#include <iostream>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n) {
    Person* p = new Person[n];
    for (int i=0;i<n;i++){
        p[i].age = 0;
        p[i].name = "John Doe";
    }
    return p;
}