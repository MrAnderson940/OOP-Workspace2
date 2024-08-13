#include <iostream>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl){
    PersonList L2;
    L2.people = pl.people;
    L2.numPeople = pl.numPeople;
    return L2;
}

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