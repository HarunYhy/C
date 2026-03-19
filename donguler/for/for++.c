#include <stdio.h>
#define n 10
int i, j;

void main()
{
    printf("-------------(1)-------------\n");
    for (i = 0, j = n; i <= j; i++ + j--)   // burda olduğu gibi aynı anda birden fazla tanım, artırma eksiltme işlemi yapılabilir
        printf("i=%d \t j=%d\n", i, j);

    printf("-------------(2)-------------\n");
    for (int i = 0; i < 20 && i!=10 ; i++) // ya da burda olduğu gibi birden fazla kontrol de yapılabilir esnektir 
        printf("%d ",i);
    
}