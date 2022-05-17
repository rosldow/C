//10 elemanlı tamsayı dizisine klavyeden değerler girilerek bir fonksiyona gönderilecektir. Dizide yer alan en büyük ilk iki sayıyı bularak ekrana yazdıran fonksiyon//
#include <stdio.h>

int* max (int S[10]);

int main (){
    int S[10], i;
    
    for (i=0; i<10; i++) {
        printf("sayi giriniz: ");
        scanf("%d", &S[i]);
    }

    int res[2] = max(S);

    printf("En buyuk sayi : %d", max(S));

    return 0;
}
    int* max(int S[10])
{
int res[2];

    int max = S[0];
    int max2 = S[0],i;
    for (i=0; i<10; i++){
        if (S[i] > max)
            max2 = max;
            max = S[i];
    }
    return res;
}