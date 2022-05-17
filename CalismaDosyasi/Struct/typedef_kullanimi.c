#include <stdio.h>
#include <string.h>
struct ogrenci {
        char isim[20];
        char soyisim[20];
        float ortalama;
};

typedef struct ogrenci ogrenci;

void bilgileriOku(ogrenci *ogrPtr) {
    puts("Lutfen ogrencinin adini giriniz:");
    scanf("%s", &ogrPtr->isim);
    puts("Lutfen ogrencinin soyadini giriniz:");
    scanf("%s", &ogrPtr->soyisim);
    puts("Lutfen ogrencinin ortalamasini giriniz:");
    scanf("%f", &ogrPtr->ortalama);

}
void bilgileriYazdir(ogrenci *ogrPtr) {
    printf("Ogrencinin Adi-Soyadi:%s %s\n", ogrPtr->isim, ogrPtr->soyisim);
    printf("Ogrenci ortalamasi:%.2f\n", ogrPtr->ortalama);
}
void bilgileriDegistir(ogrenci *ogr, ogrenci *ogr2){
    ogrenci gecici;
    strcpy(gecici.isim, ogr->isim);
    strcpy(gecici.soyisim, ogr->soyisim);
    gecici.ortalama=ogr->ortalama;

    strcpy(ogr->isim, ogr2->isim);
    strcpy(ogr->soyisim, ogr2->soyisim);
    ogr->ortalama=ogr2->ortalama;

    strcpy(ogr2->isim, gecici.isim);
    strcpy(ogr2->soyisim, gecici.soyisim);
    ogr2->ortalama = gecici.ortalama;

}
int main () {
    ogrenci ogr;
    ogrenci ogr2;    
    bilgileriOku(&ogr);
    bilgileriOku(&ogr2);
   
    printf("Birinci ogrencinin bilgileri:\n");
    bilgileriYazdir(&ogr);
    
    printf("ikinci ogrencinin bilgileri:\n");
    bilgileriYazdir(&ogr2);

    bilgileriDegistir(&ogr, &ogr2);

    printf("Birinci ogrencinin bilgileri:\n");
    bilgileriYazdir(&ogr);
    
    printf("ikinci ogrencinin bilgileri:\n");
    bilgileriYazdir(&ogr2);
    return 0;
}