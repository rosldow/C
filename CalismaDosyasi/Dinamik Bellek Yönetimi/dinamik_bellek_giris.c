#include <stdio.h>
#include <stdlib.h>
int main () {
    // baslangic_adresi=malloc(); Alan ayırmak için.

    int *ptr;
    int elemanSayisi, i,n=1;
    ptr = (int *)malloc(sizeof(int));
    for(i=0; i<elemanSayisi; i++) {
        *(ptr+i)=i+5;
        *ptr=(int *)realloc(*ptr, n * sizeof(int));
        n++;
    }
    for(i=0; i<elemanSayisi; i++) {
        printf("%d ", *(ptr+i));
    }

    free(ptr);
    return 0;    
}
