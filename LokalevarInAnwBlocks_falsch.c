/**********************************
*Programm um die Löschung lokaler
*Variablen zu demonstrieren.
***********************************/


#include <stdio.h>

int main(void)
{
    int x = 4;
    int y = 5;
    {
        int z= 6;
        printf("x = %i\n",x);
        printf("y=  %i\n",y);

    }
    /* Die lokale Variable z
    ist ausßerhalb des Blocks, in dem sie defniert wurde,
    nicht gültig. Kompilierfehler*/
    printf("z=  %i\n",z);

    return 0;
}
