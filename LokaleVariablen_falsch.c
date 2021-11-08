/***********************************************
* Programm, um den Bezugsrahmen von Variablen zu
* demonstrieren.
* Das Programm kompiliert nicht, weil die
* lokale Variable x in der Funktion aendern()
* nicht deklariert wurde.
***********************************************/


#include <stdio.h>

void aendern(void)
{
    /* lokale Variable x wird verwendet, ohne
    dass sie vorher deklariert wurde. Das führt zu einem
    Compile Fehler*/
    x=10;
}

int main(void)
{
    int x=4;
    printf("x=%i\n",x);
    aendern();
    printf("x= %i\n",x);
    return 0;
}
