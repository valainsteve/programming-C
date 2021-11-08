/**********************************
*Verwendung statischer Variable
***********************************/
#include <stdio.h>

void count(void)
{
    /*Die Variable a wird als statisch deklariert
    Dadurch beh�lt sie zwischen Funktionsaufrufen ihren Wert.
    Wenn sie bereits einen Wert hat, wird die folgende Zeile
    beim n�chsten Aufruf ignoriert.*/
    static int a=1;
    printf("a=%i\n",a);
    a++;
}

int main(void)
{
    count();
    count();
    count();

}
