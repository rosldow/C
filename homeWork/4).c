//Determine Whether a Temperature is Below or Above the Freezing Point//
#include <stdio.h>
        int main () {
            int T;
                printf("Hava durumunu giriniz: ");
                scanf("%d", &T);
                    if (T > 0)
                    printf("Hava durumu donma noktasinin ustunde.");
                        else if (T == 0)
                        printf("Hava durumu donma noktasinda.");
                        else
                        printf("Hava durumu donma noktasinin altinda.");
         return 0;
                    }