#ifndef CHARACTER_H
#define CHARACTER_H
#include "weaponbehavior.h"

#include <iostream>
using namespace std;

class Character
{
public:
    WeaponBehavior *weapon;
    Character();
    void fight();
    void setWeapon(WeaponBehavior*);
};

#endif // CHARACTER_H
