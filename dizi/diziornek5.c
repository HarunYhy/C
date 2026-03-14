// ihtiyacın olursa dizi elemanları böyle sıralanıyor
#include <stdio.h>
#define N 5
int a[N] = {4, 6, 2, 78, 15};
int i, j, takas;
void main()
{

   for (i = 0; i < 4; i++)
   {
      for (j = i + 1; j < 5; j++)
      {
         if (a[j] > a[i])
         {
            takas = a[j];
            a[j] = a[i];
            a[i] = takas;
         }
      }
   }
   for (i = 0; i < 5; i++)
      printf("%d ", a[i]);
}