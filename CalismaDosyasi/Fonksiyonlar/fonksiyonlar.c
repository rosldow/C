/*
    dönüşTipi fonksiyonunadi (alacagiArgüman) {
        yapılacakİşlemler;
    }
*/    

/* #include <stdio.h>

void selam(){
    printf("Selam!");
}

int sum(int sayi1, int sayi2) {
    return sayi1+sayi2;
}
char toupper(char ch){
    return ch-32;
}

int main () {
    //selam();
    
    int sonuc, x, y;
        
        printf("Aralarinda bosluk birakarak iki sayi giriniz: ");
        
        scanf("%d %d", &x, &y);
    
    sonuc = sum(x,y);

    printf("Sonuc = %d", sonuc);

    //printf("%c", toupper('e'));


    return 0;
} */

// R E C U R S I V E  F U N C T I O N S
#include <stdio.h>
    int yazdirma(int sayi){
        if (sayi == 0) {
            return 0; }
        printf("%d ", sayi);
        yazdirma(sayi-1);
    }
    
    int faktoriyel(int sayi) {
        if (sayi == 0 || sayi == 1) {
            return 1;
        }
        return sayi * faktoriyel(sayi -1);
    }
    
    
    int main () {
        //yazdirma(10);
        //printf("%d ", faktoriyel(16));
        
    }