#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    int n=5;
    PersonList L1 = createPersonList(n);
    for (int i=0;i<n;i++){
        cout << L1.people[i].age << " " << L1.people[i].name << endl;
    }

    cout << L1.numPeople << endl;
    PersonList L2 = deepCopyPersonList(L1);
        for (int i=0;i<n;i++){
        cout << L2.people[i].age << " " << L2.people[i].name << endl;
    }
    cout << L1.numPeople << endl;
    delete [] L1.people;
    delete [] L2.people;
    return 0;
}