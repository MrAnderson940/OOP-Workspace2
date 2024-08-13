#include <iostream>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl){
    PersonList L2;
    L2.people = new Person[pl.numPeople];
    L2.numPeople = pl.numPeople;
    for (int i=0; i<pl.numPeople; i++){
        L2.people[i].age = pl.people[i].age;
        L2.people[i].name = pl.people[i].name;
    }
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