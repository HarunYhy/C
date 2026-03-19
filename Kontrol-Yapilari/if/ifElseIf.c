#include <stdio.h>

void main()
{
    /*
    if (koşul 1)            sırayla koşullar kontrol edilir ilk hangi koşul doğruysa o bloktaki kod çalışır
    {
        blok 1              hiçbi koşul sağlanmazsa son blok çalıştırılır. else şart değildir!
    }
    else if (koşul 2)
    {
        blok 2
    }
    else if (koşul 3)
    {
        blok 3
    }
    else
    {
        son blok
    }  */

    int a = 5, b = 5;

    if (a < b)
    {
        printf("%d, %d'ten kucuktur", a, b);
    }
    else if (a > b)
    {
        printf("\n%d, %d'ten buyuktur", a, b);
    }
    else
    {
        printf("\n%d, %d'e esittir", a, b);
    }

    if (a < 5)
    {
        printf("%d, 5'ten kucuktur", a);
    }
    else if (a == 5) // '==' bir operatördür eşitliği kontorl eder (a 5'e eşit mi?)
        printf("%d, 5'e esittir");     /* tek komuttan oluşan bloklar için kırlangıç paranteze gerek yoktur
                                        ki bence böyle daha şık duruyor :) */
}   




