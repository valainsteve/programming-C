/**********************************
*Programm zur Demonstration der Verwendung lokaler
Variablen in Anweisungs Blocks
**********************************/

#include <stdio.h>

int main(void)
{
    int x = 4;
    int y = 5;
    {
        /* in diesem Block sind
        x, y und z gültig */
        int z= 6;
        printf("x = %i\n",x);
        printf("y=  %i\n",y);
        printf("z=  %i\n",z);
    }


    return 0;
}
