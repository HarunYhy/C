// On elemanlı bir dizide dışarıdan girilen bir değerden küçük olanların sayısını bulur
#include <stdio.h>
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b,sayac;
void main()
{
    printf("hangi sayidan kucukleri sayayim: ");
    scanf("%d",&b);

    for (int i = 0; i < 10; i++)
    {
       /* if (b>a[i])
        {
           sayac++; 
           //printf("%d\t",a[i]);
        }
        */
       sayac+=(a[i]<b);    //yukarıda yorum satırı içine alınmış kodlarla aynı görevi yerine getirir
    }
    
    printf("\n%d tane sayi var",sayac);
}