#include <stdio.h>

int main(void)
{
    int x=4;
    {
        /*Kompilierfehler, da die Deklaration nicht als
        erstes im Block kommt*/
        printf("x= %i.\n",x);
        int y = 12;


        printf("y=%i.\n",x);
    }

    getchar();
    return 0;
}
