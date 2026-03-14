#include <stdio.h>
#define n 5

int a[5]={8,3,7,11,-2},i;

void main()
{
    for (i = 0; i < n; i++)
    {
        printf("%d. elemanı giriniz=",i);
        scanf("%d",&a[i]);
    // Dizi elemanlarına dizi indisleriyle değer atama yapılabilir
    }
    
    for (; --i;)
        printf("%d\t",a[i]);
    printf("%d\t",a[i]);
    // sondan başa doğru elemanları yazdıralım
}
