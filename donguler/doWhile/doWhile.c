#include <stdio.h>

void main()
{
    /*
    do                  //while'dan farkı koşulu kontrol etmeden önce bloğu çalıştırmasıdır
    {
        blok            // önce blok çalışır
    } while (koşul);    // sonra koşul kontrol edilir artısı blok en az bir kere çalışmış olur.
     */

    char x='q';
    do
    {
        printf("Dongu icindesin cikmak icin q'ya bas: ");
        scanf(" %c",&x);
    } while (!(x=='q'||x=='Q'));    // "!" ters alma "==" eşitlik kontrol "||" veya 'or' operatörüdür
                                    // x 'q' veya 'Q' değilse diye kontrol yapar    
}