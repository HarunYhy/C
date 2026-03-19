#include <stdio.h>
#define n 5
// ekrana üçgen oluştıracak şekilde yızldız yazdırır
void main()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}