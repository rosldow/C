#include <stdio.h>
#include <string.h>
struct ogrenci {
        char isim[20];
        char soyisim[20];
        float ortalama;
};
int main () {
    struct ogrenci ogr;
    struct ogrenci *ptr;
    ptr=&ogr;

    /* strcpy((*ptr).isim, "Osman");
    strcpy((*ptr).soyisim,"Acikgoz");
    (*ptr).ortalama = 3.54; */

    strcpy(ptr->isim, "Osman");
    strcpy(ptr->soyisim, "Acikgoz");
    ptr->ortalama = 3.54;

    printf("Ogrencinin ismi: %s\n", ptr->isim);
    printf("Ogrencinin soyismi: %s\n", ptr->soyisim);
    printf("Ogrencinin ortalamasi: %.2f\n", ptr->ortalama);



    return 0;
}