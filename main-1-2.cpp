#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(){
    int n=5;
    PersonList L1 = createPersonList(n);
    for (int i=0;i<n;i++){
        cout << L1.people[i].age << " " << L1.people[i].name << endl;
    }

    cout << L1.numPeople << endl;
    delete [] L1.people;
    return 0;
}