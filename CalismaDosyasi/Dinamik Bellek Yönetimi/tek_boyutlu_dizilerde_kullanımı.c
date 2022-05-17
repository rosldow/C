#include <stdio.h>
#include <stdlib.h>
int main () {
    int elemanSayisi, i;
    printf("Lutfen elemansayisini giriniz: ");
    scanf("%d", &elemanSayisi);
    int *dizi =(int *)malloc(sizeof(int)*elemanSayisi);
    for(i=0; i<elemanSayisi; i++) {
        dizi[i]=i+1;
    }
    for(i=0; i<elemanSayisi; i++){
        printf("%d\n", dizi[i]);
    }
    free(dizi);
    return 0;
}