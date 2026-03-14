#include <stdio.h>
#define N 3
// a ve b olarak verilen matrisleri toplayıp toplam matrisine atayalım

int a[N][N] = {{2, 3, 25}, {5, 6, 16}, {20, 60, 4}};
int b[N][N] = {{8, 10, 8}, {9, 12, 28}, {44, 61, 32}};
int toplam[N][N];

void main()
{
    // Eleman eleman dolaşıp toplama işlemini yapalım
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            toplam[i][j] = a[i][j] + b[i][j];
    
    // Matrisi yazdırıp sonuca bakalım :)
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", toplam[i][j]);
        printf("\n");
    }
}