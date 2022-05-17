//seçim sıralamasını kullanarak belirli bir diziyi sıralamak için bir C programı yazınız.
#include <stdio.h>
#include <stdlib.h>
void selectionSort(int dizi[],int n) {
     int i,j;
     int index, enKucuk; 
     for (i=0; i<n-1; i++) {
        enKucuk = dizi[n-1];
        index = n-1;
        
        for(j=i; j<n-1; j++) {
            
            if(dizi[j]<enKucuk) {
                enKucuk = dizi[j];
                index = j;
            }
        }
        dizi[index] = dizi[i];
        dizi[i] = enKucuk;
    }
}

int main () {
    int i=0, a[5];
    printf("Siralamak istediginiz 5 sayiyi rastgele bir sekilde giriniz: ");
    while (i<5) {
        scanf("%d", &a[i]);
        i++;
    }
    i=0;
    selectionSort(a,5);

    printf("Girdiginiz sayilarin sirali hali:\n");
    while (i<5) {
        printf("%d ", a[i]);
        i++;
    }
    
    return 0;
}