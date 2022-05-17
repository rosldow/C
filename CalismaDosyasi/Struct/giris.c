#include <stdio.h>
#include <string.h>
struct ogrenci {
        char isim[20];
        char soyisim[20];
        float ortalama;
}; //veri tipini oluşturma

int main ( ) {
    struct ogrenci ogr1 = {"Osman", "Acikgoz", 3.5};   // değişken oluşturm. VERİ TİPİ: Struct ogrenci, DEĞİŞKEN TİPİ: ogr1
    struct ogrenci ogr2;
    strcpy(ogr2.isim, "Kerem");
    strcpy(ogr2.soyisim, "Acikgoz");
    ogr2.ortalama = 3.6;
    
        printf("Ogrenci isim: %s\n", ogr1.isim);
        printf("Ogrenci soyisim: %s\n", ogr1.soyisim);
        printf("Ogrenci ortalamasi: %.2f\n", ogr1.ortalama);
        printf("Ogrenci isim: %s\n", ogr2.isim);
        printf("Ogrenci soyisim: %s\n", ogr2.soyisim);
        printf("Ogrenci ortalamasi: %.2f\n", ogr2.ortalama);
    
    return 0;
}