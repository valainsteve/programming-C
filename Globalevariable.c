/**************************
*Programm zur Demonstraion globaler
*Variablen
***************************/

#include <stdio.h>

/*Deklaration der globalen Variablen x*/
int x;

void aendern(void)
{
    /*Verwendung der globalen Variablen x*/
    x=10;
}

int main(void)
{
    /*Verwendung der globalen Variablen x*/
    x=4;
    printf("x vor der Aenderung =%i\n",x);
    aendern();
    printf("x nach der Aenderung = %i\n",x);
    return 0;
}
