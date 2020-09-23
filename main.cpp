#include <QCoreApplication>
#include "character.h"
#include "king.h"
#include "queen.h"
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

    return a.exec();
}
