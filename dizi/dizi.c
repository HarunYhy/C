#include <stdio.h>
#define n 5
int a[5]={8,3,7,11,-2},i;
void main()
{
    for (i = 0; i < n; i++)
    {
        printf("%d. elemanı giriniz=",i);
        scanf("%d",&a[i]);
    }
    
    for (; --i;)
    {
        printf("%d\t",a[i]);
    }
    
    
    printf("aaa");
}
/*
#include <stdio.h>
#define n 5
int a[5]={8,3,7,11,-2};
void main()
{
    for (size_t i = 0; i <n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    printf("aaa");
}*/