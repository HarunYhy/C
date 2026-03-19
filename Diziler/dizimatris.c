#include <stdio.h>
#define N 3

int a[N][N]; /* Matris tanımı */

void main()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (j == i)
                a[i][j] = 1;        /* Matrisin sol üst köşeden alt köşeye doğru bir köşegen çiziyoruz */
            else
                a[i][j] = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
}