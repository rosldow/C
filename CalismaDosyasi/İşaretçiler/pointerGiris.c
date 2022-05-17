#include <stdio.h>
#include <stdlib.h>
int main () {
    int sayi=5;
    int *ptr, *ptr2; //pointer tanımlama
    ptr = &sayi; //pointer a atama
    ptr2 = &sayi;
    *ptr2 = 8; //2.pointerın gösterdiği adres birinci pointer ile aynı olduğu için o adresin içindeki değeri değiştirdiğimizde aynı adresi gösteren pointerların da değerleri değişmiş oluyor.

    printf("%#X\n",ptr); //adresi hexadecimal düzeyde yazdırma
    printf("%#X\n",ptr2);
    printf("%d\n", *ptr); //pointer kullanarak sayı değişkenini yazdırma (burada kullandığımız yıldız pointer ın değeri anlamına geliyor)
    printf("%d\n", *ptr2);


    return 0;
}