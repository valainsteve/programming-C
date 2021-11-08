/*****************************
*Programm zur Demonstration der
*Loeschung lokaler Variabler
******************************/

#include <stdio.h>

void aendern(void)
{
    /*Die lokale Variable wird deklariert und auf 10 initialisiert*/
    int x;
    x=10;
    /*mit Verlassen der Funktion wird die lokale Variable x gelöscht*/
}

int main(void)
{
    int x=4;
    printf("Vor der Aenderung: x=%i\n",x);

    /*Der Aufruf der Funktion aendern bewirkt keine Änderung der lokalen
    Variablen x aus der main Funktion*/
    aendern();
    printf("Nach der Aenderung: x= %i\n",x);

    getchar();
    return 0;
}
