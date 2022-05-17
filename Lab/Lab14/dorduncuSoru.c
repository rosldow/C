//Main fonks/iyonu içerisinde verilen iki pozitif sayıyı kullanarak bu sayıların en büyük ortak bölenini rekürsif fonk kullanarak bulunuz.
#include <stdio.h>
int ebob(int x, int y) {
    if (y!=0) {
        return ebob(y, x%y);
    }      
    else 
        return x;
}

int main () {
    int sayi1, sayi2;
        printf("Aralarinda bosluk birakarak iki sayi giriniz : ");
        scanf("%d %d", &sayi1, &sayi2);

        printf("Girdiginiz sayilarin en buyuk ortak boleni = %d", ebob(sayi1, sayi2));
    
    return 0;    
}