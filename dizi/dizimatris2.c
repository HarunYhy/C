#include <stdio.h>
#define N 3
int a[N][N] = {{2, 3, 25}, {5, 6, 16}, {20, 60, 4}};
int b[N][N] = {{8, 10, 8}, {9, 12, 28}, {44, 61, 32}};
int top[N][N];

void main()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            top[i][j] = a[i][j] + b[i][j];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", top[i][j]);
        printf("\n");
    }
}