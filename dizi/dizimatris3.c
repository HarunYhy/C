#include <stdio.h>
#define N 2
int a[N][N] = {{2, 3, 25}, {5, 6, 16}, {20, 60, 4}};
int b[N][N] = {{8, 10, 8}, {9, 12, 28}, {44, 61, 32}};
int c[N][N];

void main()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < N; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}