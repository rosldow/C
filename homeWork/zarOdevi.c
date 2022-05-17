#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    int c, n, sayac[100]={0};
    srand(time(NULL));

printf("Zari atiliyor: \n");
    for (c = 1; c <= 100; c++) {
        n = rand() % 6 + 1;
            sayac[n]++;                        
                                }
    for (c = 1; c<=6; c++) {
        printf("%d gelme sayisi: %d\n", c, sayac[c]);
    }                            
return 0;
}