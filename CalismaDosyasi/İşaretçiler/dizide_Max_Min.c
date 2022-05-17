#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziyiDoldur (int *dizi, int elemanSayisi) {
    srand(time(NULL));
    int *ptr;
    for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++) {
        *ptr=rand()%100;
    }
}
void diziYazdir(int *dizi, int elemanSayisi){
    int *ptr;
    for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++){
        printf("%d ",*ptr);
    }
    printf("\n");
}
void maxMinBul(int *dizi, int elemanSayisi, int *max, int *min){
    int *ptr=dizi;
    *max=*ptr;
    *min=*ptr;
    ptr++;
    
    for(;ptr<dizi+elemanSayisi; ptr++){
        if(*ptr>*max) {
            *max = *ptr;
        }
        else if(*ptr<*min) {
            *min = *ptr;
        }
    }
}

int main () {
    int dizi[10];
    int max,min;
    
    diziyiDoldur(dizi, 10);
    diziYazdir(dizi, 10);
    maxMinBul(dizi,10, &max, &min);

    printf("Dizinin en buyuk elemani: %d\nDizinin en kucuk elemani:%d", max,min);
    
    return 0;
}