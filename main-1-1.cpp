// #include <iostream>
// #include "player.h"
// using namespace std;

// int main()
// {
//     Player p1("Keth", 100, 4), p2("Owen", 480, 26);
//     cout << p1.name << " " << p1.health << " " << p1.damage << endl;
//     cout << p2.name << " " << p2.health << " " << p2.damage << endl;
//     p2.attack(&p1, p2.damage);
//     cout << p1.name << " " << p1.health << " " << p1.damage << endl;
//     cout << p2.name << " " << p2.health << " " << p2.damage << endl;
//     return 0;
// }

#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"
using namespace std;
int main()
{
    // Wizard(name, health, damage, mana)
    Wizard wizard("Gandalf", 30, 20, 50);
    // Warrior(name, health, damage, weapon)
    Warrior warrior("Aragorn", 120, 25, "Sword");
    cout << "Let the battle begin!" << endl;
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0)
    {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() > 0)
        {
            warrior.swingWeapon(&wizard);
        }
    }
    if (wizard.getHealth() > 0)
    {
        cout << wizard.getName() << " wins!" << endl;
    }
    else
    {
        cout << warrior.getName() << " wins!" << endl;
    }
    return 0;
}
