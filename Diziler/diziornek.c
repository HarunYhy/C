//Dizi içinde eleman arama

#include <stdio.h>
int a[10]={6,2,-1,13,8,18,2,4,0,2};
int x,i;

void main()
{
    printf("aranacak sayıyı giriniz: ");scanf("%d",&x);
    // Kullanıcıdan girdi isteyip aldığımız değeri dizi içinde arıyoruz
    for ( i = 0; i < 10; i++)
    {
        if (x==a[i])
        {
            printf("%d sayısı dizinin %d indisli elemanıdır\n",x,i); 
            /* İstenilen değeri bulursa indisiyle beraber yazdırır */
            //break;    //break olursa bulduğu ilk değerde program durur inanmıyorsan dene :)
        }        
    }
}