#include <stdio.h>
    int main () {
        int ogrenci[10][2];
        int i,topBoy=0, topKilo=0;
            for (i=0; i<10; i++) {
                printf("%d. ogrencinin boy ve kilosunu giriniz: ", i+1);
                scanf("%d %d", &ogrenci[i][0] ,&ogrenci[i][1]);
            }

            for (i=0; i<10; i++){
                topBoy = topBoy + ogrenci[i][0];
                topKilo = topKilo + ogrenci[i][1];
            }
                printf("Sinifin ortalama boyu = %d\n", topBoy/10);
                printf("Sinifin ortalama kilosu = %d", topKilo/10);

        return 0;
    }
