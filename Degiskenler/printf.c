#include <stdio.h>   /* Bu satırda consola bişeyler yazdırmak için kütüphane ekledik */

void main(){
    char harf = 'a';
    int yas = 21;
    float depoDoluluk = 0.5;

    printf("harf = %c \nYaş = %d \nDepo doluluk oranı = %f", harf, yas, depoDoluluk);
    printf("\n%.2f",depoDoluluk);   //.2 virgülden sonra 2 basamak gösterileciğini belirtir.
    
    // printf fonksiyonu colsola çıktı vermek için kullanılır stdio.h kütüphanesinin içinde bulunur.
    // tırnak içindeki yazıyı direkt yazdırır özel karakterler dışında
    //   %d, %i  : işaretli tam sayı,
    //   %u      : işaretsiz tam sayı,
    //   %f      : ondalıklı sayı,
    //   %ld     : uzun tam sayı,
    //   %lf     : uzun ondalıklı sayı,
    //   %c      : tek karakter,
    //   %s      : string (karakter grubu),
    //   %x      : hexadecimal
    //   %e      : exponansiyel sayı yazdırmak için kullanılır.
    

}