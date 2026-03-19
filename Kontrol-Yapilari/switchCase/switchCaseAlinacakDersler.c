#include <stdio.h>

void main()
{
    printf("Kacinci siniftasın: [1 ~ 4] ");
    int sinif;
    scanf("%d", &sinif); // kullanıcıdan aldığı değeri sinif adresindeki değişkene '%d' int kaydeder
                         // scanf("hangi tipte değer",hangi adresteki değişken);

    printf("Alinacak dersler: ");
    switch (sinif){
    case 1: printf(" Algoritma Ve Programlama-I");
    case 2: printf(" Nesne Tabanli Proglamlama");
    case 3: printf(" Algoritma Analizi");
    case 4: printf(" Mesleki Uygulama-I");
        break;
    default:
        printf(" \nbos olamamsı gerekti yanlis deger girmis olabilir misin :)");
    }
}