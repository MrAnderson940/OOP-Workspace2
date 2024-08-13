#include <iostream>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n){
    PersonList L1;
    L1.people = new Person[n];
    for (int i=0;i<n;i++){
        L1.people[i].age = 1;
        L1.people[i].name = "Jane Doe";
    }
    L1.numPeople=n;
    return L1;
}