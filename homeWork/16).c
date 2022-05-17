//Write C code which generates even numbers between 1000 and 2000 and then prints them in the standard output. It should also print total sum.//
#include <stdio.h>
        int main () {
            int i, toplam=0;
                for (i=1000; i<2001; i++)
                    if (i % 2 == 0) 
                        printf("%d ",i);
                
                for (i=1000; i<2001; i++) {
                    if (i % 2 == 0)
                        toplam = toplam + i;}
                            printf("\nToplam = %d", toplam);
            return 0;
        }