#include <stdio.h>

int a,y;

int kare(int x){
    int kare=x*x;
    return kare;
/* çağırıldığı değerin karesini alır */
}
 
void main(){
    printf("sayi girin: "); scanf("%d",&a);
    y=kare(a);       
    printf("%d sayisinin karesi %d\n",a,y); 
    // BU şekilde önce sonucu bi değişkene atayıp da kullanılabilir
   
    printf("%d sayisinin karesi %d ",a,kare(a));
    //  ama bu daha pratik en azından benim için :)
}

