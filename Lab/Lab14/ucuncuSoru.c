//Main fonksiyonu içerisibde verilen sayının basamakları toplamını Rekürsif fonk kullanarak bulunuz.
#include <stdio.h>
int top (int x) {    
        if ( x == 0 ) {
            return 0;
        }
        return (x%10) + top(x/10);
}

int main () {
    int sayi;
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);

        printf("Girdiginiz sayini basamaklari toplami = %d", top(sayi));
        return 0;
}