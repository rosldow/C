//2) 10 elemanli tamsayi dizisine klavyeden degerler girilerek bir fonksiyona gönderilecek. Dizide yer alan en buyuk iki sayiyi ekrana yazdiran fonksiyon.//
#include <stdio.h>

int maximum(int S[11]);

int main(void)
{
    int S[11], i;
    for(i=1 ; i<11 ; i++)
    {
        printf("%d. sayiyi giriniz: ",i);
        scanf("%d",&S[i]);
    }

    printf("En buyuk iki deger: %d", maximum(S));
    return 0;
}

int maximum(int S[11])
{
    int max=S[1], max2=S[1],i;
    for(i=2 ; i<11 ; i++)
    {
        if (S[i]>max)
        {
            max2=max;
            max=S[i];
        }
    }

    return max;
}