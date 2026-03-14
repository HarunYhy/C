#include <stdio.h>

// Fonksiyonu en üstte tanımlamak zorunda değiliz
int topla (int a,int b);
int cikar (int a,int b);
int carp (int a,int b);
int bol (int a,int b);
int mod (int a,int b);
// Bunun gibi önce tanımlayacağımız fonksiyonları bildirip daha sonra tanımlayabiliriz


void main()
{
    int a,b;
    printf("iki sayı giriniz arasına boşluk bırakarak: ");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,topla(a,b));
    printf("%d - %d = %d\n",a,b,cikar(a,b));
    printf("%d * %d = %d\n",a,b,carp(a,b));
    printf("%d / %d = %d\n",a,b,bol(a,b));
    printf("%d %c %d = %d\n",a,37,b,mod(a,b));
}

// Böylece main fonksiyonu en üstte yardımcı fonksiyonlar da allta durur 
// Kodların karmaşını azaltır 
int topla (int a,int b){
    return a+b;
}

int cikar(int a,int b){
    return a-b;
}

int carp(int a,int b){
    return a*b;
}

int bol(int a,int b){
    return a/b;
}

int mod(int a,int b){
    return a%b;
}