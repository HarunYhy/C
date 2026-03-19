#include <stdio.h>
#include <conio.h>
int fin, vize, but, donemson;
char cevap;
void main()
{
    do
    {
        printf("\nvize: ");
        scanf("%d", &vize);
        printf("final: ");
        scanf("%d", &fin);
        donemson = (fin * 0.6 + vize * 0.4);

        if (donemson >= 50 && fin >= 50) // donem sonu notunu ve finali kontrol eder ikisi de 50'nin üstündeyse
        {

            printf("\nGecti!");          // geçti yazar
            printf("\nDevam mi(E/H)? "); // devam edip etmeyeceğini sorar
            cevap = getch();
            if (cevap == 'e' || cevap == 'E') // devam etmek istenirse döngü başa alınır
                continue;
            else // istenmezse döngü sonlandırılır
                break;
        }

        printf("bütünleme:"); // geçme şartı sağlanmazsa devreye bütünleme girer
        scanf("%d", &but);
        donemson = (but * 0.6 + but * 0.4);
        if (donemson >= 50 && but >= 50) // aynı işlem bütünleme için de uygulanır

            printf("\nGecti!");
        else
            printf("\nKaldi!");
        printf("\nDevam mi(E / H) ?:");
        cevap = getch();
    } while (cevap == 'e' || cevap == 'E');
}
