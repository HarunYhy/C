#include <stdio.h>
#define x 5 // faktoriyeli alınacak değer belirlenir

int sonuc = 1; //ilk değeri 1 olarak belirliyoruz çünkü 0 ve 1 girdilerinde döngüyü çalıştırmayacağız sonucun direkt 1 gerekiyor
void main()
{
    for (int i = 2; i <= x; i++)    // döngüyü 2'den başlatıyoruz 5! = 1*2*3*4*5 sonuc değişkenimiz değeri zaten 1 alacağımız faktoriyel 2'den küçükse sonuc 1 kalacak
        sonuc *= i;

    printf("%d", sonuc);
}