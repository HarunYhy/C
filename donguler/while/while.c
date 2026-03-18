#include <stdio.h>

void main()
{
    /*
    while (koşul)       // Döngüleri aynı komutları istenen kadar tekrar çalıştırmak için kullanılır
    {                   // koşulun sağlanıp sağlamadığı kontrol edilir sağlanırsa blok çalıştırılır sonra sağlanmazsa devam blok atlanıp devam eder
        blok            // blok çalıştıktan sonra tekrar koşul kontrol edilir tekrar blok çalışır döngüye girmiş olur
    }
     */

    // tek çift sayıları ayrı ayrı toplama
    int deger = 0, tektop = 0, cifttop = 0;

    while (++deger <= 5)    // deger değişkeni 1 artırılıp 5 ten küçük eşit mi diye kontrol eder ***burdaki 5 hangi değere kadar sayacağıdır
        if (deger % 2 == 0) // kontrol ettiği değer 2 ile bölümünden kalan 0 ise değer cifttop değişkenine eklenir
            cifttop += deger;
        else // kalan 0 değilse 1'dir yani tektir o da tektop değişkenine eklenir
            tektop += deger;

    printf("\nTek toplam: %d \nCift toplam: %d", tektop, cifttop);
}
