//Write C code to count number of digits in a number.//
#include <stdio.h>
        int main () {
            int i, n;
                printf("Basamak sayisini bulmak istediginiz sayiyi giriniz: ");
                scanf("%d", &n);
                    if (n>0) {
                        for (i=0; n>0; i++) {
                            n = n / 10;     }
                    }
                        printf("Girdiginiz sayinin basamak sayisi = %d", i);
            return 0;
        }