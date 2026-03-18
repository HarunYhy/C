#include <stdio.h>
int deger;
void main()
{
   // while (1)
    //{
        printf("\n\n\n-----------------------------------\n      1 5 arasi deger girin\n-----------------------------------\n");
        scanf("%d", &deger);

        switch (deger)
        {
        case 5:
            printf("*");
        case 4:
            printf("*");
        case 3:
            printf("*");
        case 2:
            printf("*");
        case 1:
            printf("*");
            break;
        default:
            printf("-----------------------------------\n        GECERLI DEGER GIRIN\n-----------------------------------");
            break;
        }
    //}
}
