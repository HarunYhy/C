#include <stdio.h>

void main()
{

    /* if (koşul)
    {                   genel yapısı bu şekildedir. parantez içindeki koşul sağlanırsa
        blok            aşağısındaki blok çalışır sağlanmazsa blok atlanıp program devam eder.
    }
    */

    int a = 1, b = 2;

    if (a < b) // 1 2'den küçük olduğu için blok çalışır
    {
        printf("%d %d'den kucuktur", a, b);
    }

    if (a > b) // 1 2'den büyük oldmadığı için blok çalışmaz
    {
        printf("\n%d %d'den buyuktur", a, b);
    }

    // koşul değeri 0 dışındaki değerler doğru kabul edilir.

    if (10)
    {
        printf("\nkosul:10");
    }

    if (5)
    {
        printf("\nkosul:5");
    }

    if (1)
    {
        printf("\nkosul:1");
    }

    if (0)
    {
        printf("\nkosul:0");
    }

    if (-1) // ilginç değil mi :)
    {
        printf("\nkosul:-1");
    }
}
