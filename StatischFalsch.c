/****************************************
* Programm zur falschen Initialisierung einer
* statischen Variablen
****************************************/


#include <stdio.h>

void count()
{
    static int a;
    /*die statische Variable wird auﬂerhalb der Deklaration initialisiert.
    Dadurch erh‰lt sie bei jedem Funktionsaufruf den zugewiesenen Wert*/
    a=1;
    printf("a ist gleich %i\n", a);
    a++;
}

main()
{
    count();
    count();
    count();
}
