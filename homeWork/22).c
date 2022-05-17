//Write C code to swap first and last digits of a number.//
#include <stdio.h>
        int main () {
            int i, n, a, b, ilkBas, sonBas, degistirilmisSAyi, us;
                printf("Lutfen bir sayi giriniz: ");
                scanf("%d", &n);
                        sonBas = n % 10;
                            a = n;
                    for(i=0; a>0; i++) {
                        a = a / 10;}
            printf("%d\n", i);
            us = i;
                     while (n > 0) {
                        ilkBas = n / 10;}
            printf("%d\n", ilkBas);
            degistirilmisSAyi = sonBas;        
                    
                    for (i=1; i<us; i++) {
                            degistirilmisSAyi *= 10;
                    }
                        printf("%d\n", degistirilmisSAyi);
            degistirilmisSAyi = degistirilmisSAyi + n;
                printf("%d\n", degistirilmisSAyi);

                    b = ilkBas;
                    
                    for (i=1; i<us; i++) {
                            b *= 10;                    
                    }
                        degistirilmisSAyi = degistirilmisSAyi - b;
                        degistirilmisSAyi = degistirilmisSAyi - sonBas;
                        degistirilmisSAyi = degistirilmisSAyi + ilkBas;
                        printf("%d\n", degistirilmisSAyi);

            return 0;
        }