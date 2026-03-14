// İki diziyi toplayıp üçüncü başka bir diziye kaydeder
#include <stdio.h>
#define N 5

void dizisayar(int *x);
int a[N] = {4, 6, 2, 78, 15};
int b[N] = {3, 65, 48, 5, 12};
int c[N];

void main()
{

   for (int i = 0; i < N; i++)
      c[i] = a[i] + b[i];
   printf("toplanan diziler\n");
   dizisayar(a);
   dizisayar(b);
   printf("bu işlemden elde ettiğimiz dizi\n\n");
   dizisayar(c);
}

void dizisayar(int *x)
{
   printf("{");
   for (size_t i = 0; i < N; i++)
      printf("%d,", x[i]);
   printf("}\n");
}