#include <stdio.h>

int main()
{
    /*year und month haben die selben Speicherklassen*/
    int year;
    auto int month;

    year =1;
    month=2;
    printf("year ist %i\n",year);
    printf("month ist %i\n",month);
}
