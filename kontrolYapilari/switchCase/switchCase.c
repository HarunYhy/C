#include <stdio.h>

void main()
{
    /* 
    switch (istenilen değer)    // case'lerden hangisinin değeri istenilen değere eşitse o blok çalışır
    {                           // break görmediği sürece çalışmaya devam eder    
    case değer:                 // default şart değildir hiçbi case istenilen değere eşit değilse çalışır
        blok 1;                 
    case değer:
        blok 2 break;
    default:
        break;
    } */

    printf("\n-----------1-----------\n");
    switch (5)
    {
    case 6:
        printf("*");
    case 5:
        printf("*");
    case 4:
        printf("*");
    case 3:
        printf("*");
    case 2:
        printf("*");
    case 1:
        printf("*");
    
    default:
        break;
    }

    printf("\n-----------2-----------\n");
    // break görmek zorunda da değil case blokları bittikten sonra switch bloğu da biter
    switch (5)
    {
    case 6:
        printf("*");
    case 5:
        printf("*");
    case 4:
        printf("*");
    case 3:
        printf("*");
    case 2:
        printf("*");
    case 1:
        printf("*");
    }

    printf("\n-----------3-----------\n");
    printf("Bugun gunlerden ");
    switch (3)      // istenilen değerin günlere eşit olduğunu düşünelim pazartesi=1 salı=2 gibi 
    {
    case 1: printf("pazartesi");
        break;
    case 2:printf("sali");
        break;
    case 3:printf("carsamba");
        break;
    case 4:printf("parsembe");
        break;
    case 5:printf("cuma");
        break;
    case 6:printf("cumartesi");
        break;
    case 7:printf("pazar");
        break;
    }
    printf("\n");
}