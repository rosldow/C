#include <stdio.h>
#include <string.h>
struct ogrenci {
        char isim[20];
        char soyisim[20];
        float ortalama;
};
int main () {
    int i;
    struct ogrenci ogrenciler[3];
    for(i=0; i<3; i++) {
        printf("Lutfen %d. ogrencinin adini giriniz: \n",i+1);
        scanf("%s", &ogrenciler[i].isim);
        printf("Lutfen %d. ogrencinin soyismini giriniz: \n",i+1);
        scanf("%s", &ogrenciler[i].soyisim);
        printf("Lutfen %d. ogrencinin ortalamasini giriniz: \n", i+1);
        scanf("%f", &ogrenciler[i].ortalama);

    }
     for(i=0; i<3; i++) {
        printf("%d. ogrencinin adi-soyadi:%s - %s Ortalamasi: %.2f\n", i+1, ogrenciler[i].isim, ogrenciler[i].soyisim, ogrenciler[i].ortalama);
     }
    
    return 0;
}