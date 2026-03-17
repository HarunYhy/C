#include <stdio.h>

void main()
{
    /* if (koşul)
    {                       koşul tekrar kontrol edilir. doğruysa blok 1 çalışır blok 2 atlanır
        blok 1
    }
    else                    değilse blok 1 atlanır ve blok 2 çalıştırılır
    {
        blok 2
    }
     */

    int a = 5, b = 10;

    if (a < b) // koşul doğru olduğu için ilk blok çalışır
    {
        printf("%d %d'dan kucuktur", a, b);
    }
    else
    {
        printf("%d %d'dan kucuk değildir", a, b);
    }

    // diğerini de görelim
    if (a > b) // burda da koşul sağlanmadığı için ilk blok atlanp ikinci blok çalıştırılacak
    {
        printf("%d %d'dan buyuktur", a, b);
    }
    else
    {
        printf("\n%d %d'dan buyuk degildir", a, b);
    }
}
