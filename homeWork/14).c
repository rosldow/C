//Write C code for computing factorial N (N!)//
#include <stdio.h>
        int main () {
            int fak=1,n,i;
                printf("Faktoriyelini ogrenmek istediginiz sayiyi giriniz: ");
                    scanf("%d", &n);
                        for (i=1; i<=n; i++) {
                            fak = fak * i;}
                             printf("Girdiginiz sayinin faktoriyeli = %d", fak);

            return 0;
        }