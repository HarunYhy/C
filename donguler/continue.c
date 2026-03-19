#include <stdio.h>
int x, y;

void main()
{
    // continue döngüde bloğu başa almak için kullanılır. Break gibi döngüyü sonlandırmaz, döngünün başına döner koşulu kontrol eder
    // eğer koşul sağlıyorsa döngü devam eder

    printf("\n-----------------(1)-----------------");
    // diyelim ki 1'den 50'ye kadar tüm sayıları yazdırmak istiyorsunuz ama 21'e gıcığınız var onu yazdırmak istemiyorsunuz
    for (int i = 0; i < 50; i++)
    {
        if (!(i % 10)) // her satırda 10 sayı görünmesi için daha formatlı dursun diye
            printf("\n");

        if (i == 21) // i 21'e eşit olduğunda
        {
            printf("   "); // sayı yerine boşluk atıp
            continue;      // döngünün bitmesini beklemeden başa sarıyoruz
        }
        printf("%2d ", i);
    }

    printf("\n-----------------(2)-----------------\n");
    x = 1;
    y = 12;
    while (x <= y)
    {
        if (x % 2 == 0) // x çiftse
        {
            x += 2;   // x'e 2 ekleniyor
            continue; // ve döngü başa dönüyor.
        }
        x += 3;          // 4'ü yazdırdıktan sonra hep çift olacağı için
        printf("%d", x); // bu kısım bir daha çalışmaz
    }
}