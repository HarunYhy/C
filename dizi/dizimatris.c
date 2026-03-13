#include <stdio.h>
#define N 3
int a[N][N];

void main()
{
    for (int i = 0; i < N; i++)

        for (int j = 0; j < N; j++)
            if (j == i)
                a[i][j] = 1;
            else
                a[i][j] = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}