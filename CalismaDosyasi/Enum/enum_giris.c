#include <stdio.h>
#include <string.h>

typedef enum {
    pazartesi=1, sali, carsamba, persembe,cuma, cumartesi,pazar
}haftaninGunleri;

typedef enum {
    acemi=1, superAcemi, caylak, superCaylak, pro
}oyuncuSeviyeleri;

int main () {
   /* haftaninGunleri gunler;
    puts("Lutfen 1-7 arasi tuslama yapiniz:");
    scanf("%d", &gunler);

    switch (gunler)  {
        case pazartesi:
        case sali:
        case carsamba:
        case persembe:
        case cuma:
            printf("Haftaici.");
            break;
        case cumartesi:
        case pazar:
            printf("Haftasonu.");
            break;
        default:
            printf("Hatali tuslama yaptiniz.");
    } */
    oyuncuSeviyeleri seviye;
    
    puts("Oyuncu seviyeseni giriniz:");
    scanf("%d", &seviye);
    if(seviye==1) {
        puts("Bu gorevi almaya layik degilsin!");
    }
    else if(seviye==2) {
        puts("Fena degil ama bu gorevi almaya gucun yetmez.");
    }
    else if(seviye==3||seviye==4){
        puts("Bu gorevi almaya layik bir aday.");
    }
    else if (seviye==5)
        puts("Bu gorevi almak icin seviyeni cok yuksek. Kendi gucundekilerle ugras pisi.");

    else
        puts("Hatali seviye girisi.");
    return 0;
}