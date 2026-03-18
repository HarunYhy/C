#include <stdio.h>

int tektop = 0, cifttop = 0;

void main()
{
    for (int i = 0; i <= 10; i++)
        if (i % 2 == 1)
            tektop += i;
        else
            cifttop += i;

    printf("\nTek sayilarin toplami = %d \nÇift sayilarin toplami = %d",tektop,cifttop);
}