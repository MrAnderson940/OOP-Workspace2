#include <iostream>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n) {
    Person* p = new Person[n];
    return p;
}