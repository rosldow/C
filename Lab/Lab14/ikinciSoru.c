//Girilen dizideki en büyük elemanı bulan programı C dilinde Rekürsif olarak yazınız.
#include <stdio.h>
int enBuyuk (int a[], int n) {
    static int i = 0;
    while ( i < 7 ) {
        if (a[i] > n) {
            n = a[i];
            i++;
        }
        else if (a [i] <= n ) {
            i++;}
        return enBuyuk(a, n);    
    }
    return n;
}



int main () {
    int dizi[]={15, 1, 87, 26, 18, 86, 99};
    printf("Dizinin en buyuk elemani = %d", enBuyuk(dizi,dizi[0]));
    
return 0;
}