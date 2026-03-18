#include <stdio.h>

int x;              // x değişkeninde hangi sayının faktoriyelini alacağımızı tutacağız
long int sonuc = 1; // sonucu 1 yapcağız 2 den küçük faktoriyellerde sonuç 1 dir döngüye dahi sokmayacağız

void main()
{
    printf("Hangi sayinin faktoriyelini alayim: ");
    scanf("%d", &x); // girilen değeri x değişkenine kaydeder

    while (x > 1)     // x 1'den büyükse faktoriyeli şu şekilde hesaplar;
        sonuc *= x--; // örneğin 5 girildi (((1*5)*4)*3)*2 en son sonuc=120 olur                                                  
    printf("%ld", sonuc);
}