#include <stdio.h>
#include <string.h>
char isim[15];
int i;

void main()
{
    strcpy(isim,"ahmet");
    printf("%s\n",isim);

    for ( i = 0; isim[i]!= '\0' ; i++)
    {
        printf("%c",isim[i]);
    }
    printf("\nisim uzunlugu %d \n",strlen(isim));
    for ( i = 0; i <strlen(isim) ; i++)
    {
        printf("%c",isim[i]);
    }
    
}