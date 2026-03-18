#include <stdio.h>

void main()
{
    /*
    for (başlangıç ; koşul; değişim)    
    {                                   // ilk başlangıç kısmı çalışır bir defaya mahsus (zorunlu değil)
        blok                            // sonra koşul kontrol edilir. koşul sağlanırsa blok çalışır
    }                                   // en son değişim kısmı çalışıp tekrar koşul kontrol edilir koşul sağlanmayana kadar böyle devam eder (zorunlu değil)
    */
    printf("-----------------(1)-----------------\nTek sayilar:");
    for (int i = 0; i < 10; i++) // başlangıçta i 0'a setlenmiş. i 10'a eşit olana kadar devam eder.
        if (i % 2)               //'%' mod alma operatörüdür i'yi 2'ye bölüp kalan 1 olunca -yani i tek olunca- i'yi yazdırır
            printf(" %d", i);

    int ustSinir = 5, altSinir = 0;         //Sınırları belirliyoruz scanfle girdi de alabilirdik 
    int tekToplam = 0, ciftToplam = 0;      //topladığımız değerleri tutan değişkenler
    int temp = altSinir + 1;                //Alt sınırın topladığımmız değerlerden hariç tutmak için bir fazlasına eşitledik örneğin alt sınır 1 ise saymaya 2 den başlayacak
    for (; temp < ustSinir; temp++)         //üst sınırı hariç tutacak şekilde döngü tanımlanır
    {
        if (temp % 2)                       // yalnızca tek değerleri toplar
            tekToplam += temp;
        else
            ciftToplam += temp;             // yalnız çift değerleri toplar
    }                                                   
    printf("\n-----------------(2)-----------------\n%d ile %d arasındaki\nSayilarin Toplami:%d \nTek sayilarin toplami: %d \nCift sayilarin toplami: %d ", altSinir, ustSinir, tekToplam + ciftToplam, tekToplam, ciftToplam);
}