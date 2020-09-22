#include "character.h"

Character::Character()
{

}

void Character::fight(){
    weapon->useWeapon();
}
    void setWeapon(WeaponBehavior *w){
    this->weapon = w;
}


