#include <stdio.h>
#include <math.h>

void main()
{

    // Break döngüyü sonlandırmak için kullanır örneğin birden 100'e kadar sayan bir döngünüz var 23'de durmasını istiyorsunuz
    printf("\n-----------------(1)-----------------\n");
    for (int i = 0; i < 100; i++)
    {
        if (i == 24) // i 24 olduğunda döngüyü sonlandırıyoruz tekrar koşulu kontrole gitmeden for bloğunu atlıyor
            break;
        printf("%d ", i);
    }

    // asal sayı
    printf("\n-----------------(2)-----------------\n");
    int karekok, i, j, tam, sayi = 0;

    for (i = 2; i <= 100; i++)
    {
        karekok = sqrt(i);             // bir sayının asal olup olmadığını kontrol etmek için o sayının köküne kadar olan sayılara bölünüp bölünmediğini kontrol etmemiz yeterli örneğin 9, kökü 3 3'e kadar kontrol ettikten sonra 9'a kadar olan sayıları denemeye gerek yok
        tam = 0;                       // tam bölünüp bölünmediğini kontrol ediyor. Bölünüyorsa 1, bölünmüyorsa 0
        
        for (j = 2; j <= karekok; j++) // i sayısı kökünden küçük olan sayılara bölünüp bölünmediğini test ediyoruz
        {
            if (i % j == 0) // burda break'i performans için kullandık eğer tam böldüğü bi sayı bulursa diğerlerini kontrol etme döngüden çık
            {               // örneğin 60'ı kontrol edecek 2 tam bölüyor. 3'ü kontrol etmiyor en az bir bölen bulmamız yeterli
                tam = 1;
                break;
            }
        }

        if (!(tam)) // üstteki döngü de tam bölünmeyen sayıları ekrana yazdırıp tek tek sayımını yapıyoruz
        {
            printf("%d ", i);
            sayi++;
        }
    }

    printf("\n[1-100] arası %d tane asal sayı var\n", sayi);
}