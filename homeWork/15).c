//Write C code to print all natural numbers in reverse (from n to 1)//
#include <stdio.h>
        int main () {
            int i,n;
                printf("Kactan 1\'e kadar yazalim abey?");
                    scanf("%d", &n);
                        for (i=n; i>0; i--)
                            printf("%d ", i);
            return 0;
        }