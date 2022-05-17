#include <stdio.h>
#include <string.h>
struct ogrenci {
        char isim[20];
        char soyisim[20];
        float ortalama;
};
void bilgileriOku(struct ogrenci *ogrPtr) {
    puts("Lutfen ogrencinin adini giriniz: \n");
    scanf("%s", &ogrPtr->isim);
    puts("Lutfen ogrencinin soyadini giriniz: \n");
    scanf("%s", &ogrPtr->soyisim);
    puts("Lutfen ogrencinin ortalamasini giriniz: \n");
    scanf("%f", &ogrPtr->ortalama);

}
void bilgileriYazdir(struct ogrenci *ogrPtr) {
    printf("Ogrencinin Adi-Soyadi: %s %s\n", ogrPtr->isim, ogrPtr->soyisim);
    printf("Ogrenci ortalamasi: %.2f\n", ogrPtr->ortalama);
}
void bilgileriDegistir(struct ogrenci *ogr, struct ogrenci *ogr2){
    struct ogrenci gecici;
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
    struct ogrenci ogr;
    struct ogrenci ogr2;    
    bilgileriOku(&ogr);
    bilgileriYazdir(&ogr);
    bilgileriOku(&ogr2);
    bilgileriYazdir(&ogr2);

    printf("\n");

    bilgileriDegistir(&ogr, &ogr2);
    bilgileriYazdir(&ogr);
    bilgileriYazdir(&ogr2);

    return 0;
}