#include <QCoreApplication>
#include "character.h"
#include "king.h"
#include "queen.h"
#include "troll.h"
#include "knight.h"
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "bowandarrowbehavior.h"
#include "knifebehavior.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character *p = new King();
    p->fight();
    Character *p1 = new Queen();
    p1->fight();
    Character *p2 = new Troll();
    p2->fight();
    Character *p3 = new Knight();
    p3->fight();



    return a.exec();
}
