// iki zar atılır,
// 1- Zarların toplamı hesaplanır,
// 2- İlk atışta 7 VEYA 11 gelirse oyuncu kazanır,
// 3- İlk atışta 2, 3 VEYA 12 gelirse oyuncu kaybeder,
// 4- İlk atışta 4, 5 , 6 ,8 ,9, 10 gelirse bu oyuncunun puanı oluyor,
// 5- Oyuncu 7 atmadan önce kendi puanını tutturmalıdır.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main ( ) {
    int zar1, zar2, zarToplami, oyuncuPuani;
    char oyuncuAdi[100];
    srand(time(NULL));
        printf("Oyuncu adini giriniz: ");
        scanf("%s", oyuncuAdi);
        printf("\nOyuncu %s zarlari atmak icin Y tusuna basiniz.\n",oyuncuAdi);
        
        getch();
        
        printf("Zarlar atiliyor...\n");

        
        zar1=rand()%6+1;
        zar2=rand()%6+1;

        printf("ilk zar: %d\n", zar1);
        printf("ikinci zar: %d\n", zar2);

        zarToplami = zar1 + zar2;

        if(zarToplami==7 || zarToplami == 11) {    
            printf("Tebrikler! %s oyunu kazandin.\n", oyuncuAdi);
        }
        else if (zarToplami == 2 || zarToplami == 3 || zarToplami == 12) {
            printf("%s oyunu kaybettiniz.\n", oyuncuAdi);
        }

        else {
        oyuncuPuani = zarToplami;
        do  {
        printf("\nOyuncu %s zarlari atmak icin Y tusuna basiniz.\n",oyuncuAdi);
        
        getch();
        
        printf("Zarlar atiliyor...\n");

        
        zar1=rand()%6+1;
        zar2=rand()%6+1;

        printf("ilk zar: %d\n", zar1);
        printf("ikinci zar: %d\n", zar2);

        zarToplami = zar1 + zar2;

        if(zarToplami==oyuncuPuani) {
            printf("Tebrikler! %s oyunu kazandin.\n", oyuncuAdi);
            break;
                }
        else if(zarToplami==7 || zarToplami == 11) {
            printf("Oyunu kaybettiniz.\n");
            break;
                }
            }
            while(1);

        }

        printf("Oyunu bitirmek icin SPACE tusuna basiniz.");
        getch();


    return 0;
}