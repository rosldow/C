#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    int main () {
    int dizi [10], i, j, enKucukSayi, indexEnKucukSayi;
    srand(time(NULL));
    
    printf("Sirasiz dizi: ");
    
    for (i=0; i<10; i++){
        dizi[i] = rand()%100;
        printf("%d ", dizi[i]);
    }

    printf("\n");

    for (i=0; i<9; i++) {
        enKucukSayi = dizi[9];
        indexEnKucukSayi = 9;
            for (j=i; j<9; j++){
                if (dizi[j] < enKucukSayi ) {
                    enKucukSayi = dizi [j];
                    indexEnKucukSayi = j;
                }
            }
        printf("%d ile %d yer degistirdi.\n", enKucukSayi, dizi[i]);
        dizi[indexEnKucukSayi] = dizi [i];
        dizi[i] = enKucukSayi;
    
    }
    printf("Sirali dizi: ");
    for (i=0; i<10; i++){
        printf("%d ", dizi[i]);
    }
}
*/


void diziOlustur (int dizi [] , int elemenaSayisi) { 
    int i;
    srand(time(NULL));
    
    for (i=0; i<elemenaSayisi; i++){
        dizi[i] = rand()%100;
    }

}

void diziyiSirala (int dizi [] , int elemanSayisi) {
    int i, j, enKucukSayi, indexEnKucukSayi;
    for (i=0; i<elemanSayisi-1; i++) {
        enKucukSayi = dizi[elemanSayisi-1];
        indexEnKucukSayi = elemanSayisi-1;
            for (j=i; j<elemanSayisi-1; j++){
                if (dizi[j] < enKucukSayi ) {
                    enKucukSayi = dizi [j];
                    indexEnKucukSayi = j;
                }
            }
        printf("%d ile %d yer degistirdi.\n", enKucukSayi, dizi[i]);
        dizi[indexEnKucukSayi] = dizi [i];
        dizi[i] = enKucukSayi;
    
    }

}

void diziyiYazdir (int dizi [], int elemanSayisi) {
    int i;
    for (i=0; i<elemanSayisi; i++){
        printf("%d ", dizi[i]);
    }
}

int main () {
    int dizi[10], elemanSayisi=10;
    diziOlustur (dizi , elemanSayisi);
    
        printf("Sirasiz dizi :");
    
    diziyiYazdir (dizi , elemanSayisi);
    
        printf("\n");
    
    diziyiSirala (dizi , elemanSayisi);
    
        printf("Sirali dizi: ");

    diziyiYazdir (dizi , elemanSayisi);
}