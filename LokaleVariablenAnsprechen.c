/*******************************
*Demonstration der Gültigkeit von lokalen Variablen
*******************************/

#include <stdio.h>

int main(void)
{
    int x=4;
    /*Hier gilt die im äußeren Block defnierte Variable x */
    printf("Im aeusseren Block ist x=%i.\n",x);
    {
        int x = 12;
        /*Hier gilt die im inneren Block defnierte Variable x */
        printf("Im inneren Blockist x= %i.\n",x);
    }
    /*Hier gilt die im äußeren Block defnierte Variable x */
    printf("Und wieder aussen x=%i.\n",x);

    getchar();
    return 0;
}
