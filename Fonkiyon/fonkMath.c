#include <stdio.h>
#include <math.h>
// Biraz farklı bi örnek
float f(float x){
    return (3 * pow(x, 3)) + 5 * x * x + 3 * x + 2;
// F(x): 3x^3+5x^2+3x+2 fonksiyonunun C'ye geçirilmiş hali aslında
}

void main(){
    float fdizi[25];
    float i;
    int k = 0;
    for (i = -1.0; i <= 1.0; i += 0.1)
        fdizi[k++] = f(i);

    for (int j = 0; j < k; j++)
        printf("%f\t", fdizi[j]);
}
