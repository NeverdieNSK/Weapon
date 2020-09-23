#include <QCoreApplication>
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "bowandarrowbehavior.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeaponBehavior *wb = new SwordBehavior();
    wb->useWeapon();
    WeaponBehavior *wb1 = new BowAndArrowBehavior();
    wb1->useWeapon();

    return a.exec();
}
