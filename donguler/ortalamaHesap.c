#include <stdio.h>

int i, x, toplam = 0;
float ort;
char devam = 'a';

void main()
{

    do
    {
        for (i = 0; i < 5; i++)
        {
            do
            {
                printf("Not giriniz (0~100): ");  //burdaki yaklaşım çok da doğru değil kullanıcı yanlış değer girdiğinde
                scanf("%d", &x);                //tekrar değer isteniyor ama kullanıcı farkında değil
            } while (!(x >= 0 && x <= 100));    //
            toplam += x;
        }
        ort = (float)toplam / i;
        printf("Notlarin;\n  Toplami=%d\n  Ortalamasi=%.2f", toplam, ort);
        printf("\nTekrar hesaplamak icin d'ye basin ");
        scanf(" %c",&devam);

    } while(devam=='d' || devam== 'D');
}
