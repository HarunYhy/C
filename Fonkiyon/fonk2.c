#include <stdio.h>

// Her fonksiyonun değer döndürmesine gerek yoktur
void ciz(int n)
{
    for (int i = 0; i < n; i++)
        printf("-");
//çağırıldı değer kadar ekrana "-" sembolü yazar
}

void main()
{
    int x;
    printf("çizgi uzunlugu girin: ");
    scanf("%d",&x);
    ciz(x);
}
