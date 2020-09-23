#include <QCoreApplication>
#include "character.h"
#include "king.h"
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "bowandarrowbehavior.h"
#include "knifebehavior.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeaponBehavior *wb = new SwordBehavior();
    wb->useWeapon();
    WeaponBehavior *wb1 = new BowAndArrowBehavior();
    wb1->useWeapon();
    WeaponBehavior *wb2 = new KnifeBehavior();
    wb2->useWeapon();
    Character *p = new King();
    p->fight();

    return a.exec();
}
