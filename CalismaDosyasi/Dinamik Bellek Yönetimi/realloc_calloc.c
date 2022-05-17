#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//calloc : clear and allocation, atanan yerleri temizle ve yerlerine 0 değerini ata
//realloc : reallocation, daha önceden ayrılan alanı tekrardan boyutlandırır.

int main () {
    int elemanSayisi;
    printf("eleman sayisini giriniz: ");
    scanf("%d", &elemanSayisi);
    
    int *dizi = (int *)calloc(elemanSayisi, sizeof(int));
    int *ptr;
    for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++){
        printf("%d ", *ptr);
    }

    printf("eleman sayisini kaca yukseltmek istersiniz: ");
    scanf("%d", elemanSayisi);
    
    dizi=realloc(dizi,elemanSayisi*sizeof(int));
    
    for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++){
        printf("%d ", *ptr);
    }



    free(dizi);
    return 0;
}