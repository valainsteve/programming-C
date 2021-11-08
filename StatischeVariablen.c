/***********************************
*Notwenddigkeit von statischen Variablen
************************************/

#include <stdio.h>

void count(void)
{
    /* Die lokale Variable a wird
    bei jedem Funktionsaufruf neu mit 1 initialisiert*/
    int a=1;
    printf("a=%i\n",a);
    a++;
}

int main(void)
{
    count();
    count();
    count();

}
