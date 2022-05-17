//Kullanıcının girdiği doğal sayıya kadar olan sayıların toplamını bulan rekürsif fonksiyonu yazınız.

#include <stdio.h>

int sum (int x) {
    if (x==1)
        return x;
    else
        return (x + sum(x-1));
}

int main() {
    int N;
    printf("Lutfen bir dogal sayi giriniz: ");
    scanf("%d", &N);
    
    printf("Sonuc = %d", sum(N));
    
return 0;
}
