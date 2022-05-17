#include <stdio.h>
#include <stdlib.h>
int main () {
    int *ptr, *dizi, elemanSayisi;
    int i,k,n=1;
    dizi=(int *)malloc(sizeof(int));
    ptr = dizi;

    printf("eleman sayisini giriniz: ");
    scanf("%d", &elemanSayisi);
    
    for(i=0; i<elemanSayisi; i++) {
        printf("%d. elemani giriniz: ", i+1);
        scanf("%d", &k);
        
        *(ptr+i)=k;
        n++;
        realloc(ptr, n*sizeof(int));
        
    }
    for(i=0; i<elemanSayisi; i++) {
        printf("%d ", *(ptr+i));
    }
    free(ptr);
    free(dizi);

    return 0;
}