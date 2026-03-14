#include <stdio.h>
#include <string.h>
char isim[15];
int i;

void main()
{
    strcpy(isim, "Attila");
    printf("%s\n", isim);

    // Stringler karakter dizileri olduğu için harf harf erişmek mümkündür.
    for (i = 0; isim[i] != '\0'; i++)
    {
        printf("%c", isim[i]);
    }

    // strlen fonksiyonu dizi sonu karakterine '\0' kadar olan elemanları sayar.
    // strlen(isim) fonksiyonu 6 değerini döndürür.  
    printf("\nisim uzunlugu %d \n", strlen(isim));
    for (i = 0; i < strlen(isim); i++)
    {
        printf("%c", isim[i]);
    }
    printf("%d",strlen(isim));
}