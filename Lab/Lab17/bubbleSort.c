//bubble sort kullanarak belirli bir diziyi sıralamak için bir C programı yazınız.
#include <stdio.h>
#include <stdlib.h>
void bubbleSort (int dizi[], int n){
    int i,j, gecici;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++) 
        {
            if(dizi[j] > dizi[j+1]) {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici; }
        }
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
    bubbleSort(a,5);

    printf("Girdiginiz sayilarin sirali hali:\n");
    while (i<5) {
        printf("%d ", a[i]);
        i++;
    }
    
    return 0;

}