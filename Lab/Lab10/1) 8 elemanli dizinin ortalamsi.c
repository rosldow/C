//  1) 8 elemanli dizinin ortalamasi //

#include <stdio.h>

int main ()
{
    float A[8], toplam=0;
    int i;

    for(i=0; i<8; i++)
    {
        printf("%d. elemani giriniz: \n",i+1);
        scanf("%f", &A[i]);
    }

    for(i=0; i<8; i++)
    {
        toplam = toplam + A[i];
    }

    printf("Ortalama: %.2f",toplam/8);

    return 0;
}