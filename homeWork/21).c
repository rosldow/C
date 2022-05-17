//Write C code to find first and last digit of a number//
#include <stdio.h>
        int main () {
                int i, n, ilkBas, sonBas;
                printf("Basamak sayisini bulmak istediginiz sayiyi giriniz: ");
                scanf("%d", &n);
                    ilkBas = n;
                    if (n>0) {
                        sonBas = n % 10;
                        while (ilkBas >= 10) {
                            ilkBas = ilkBas / 10;
                        }
                    }
                     printf("Girdiginiz sayinin ilk basamagi : %d\n", ilkBas);
                     printf("Girdiginiz sayinin son basamagi : %d", sonBas);

            return 0;
        }