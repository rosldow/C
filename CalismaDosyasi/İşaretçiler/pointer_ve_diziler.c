#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int dizi[10],i;
    srand(time(NULL));
    int *ptr = &dizi[0]; //1. yöntem: Dizinin ilk elemanın adresi dizinin adresi ile aynı anlama gelir.

    int *ptr2 = dizi; //2. yöntem: Dizinin adı aynı zamanda dizinin adresi anlamına gelir.

    printf("%#X\n", ptr);
    printf("%#X\n", ptr2);

    for(i=0; i<10; i++) {//Burada pointer güncellenmiyor. Bu işlemden sonra pointer yazdırılırsa  ilk adresini ve değerini gösterir.
        printf("Dizinin %d. indeksinin adresi: %#X",i,ptr+i);
        *(ptr+i) = rand()%100; //pointer ile diziye random değer atama
        printf(" ve degeri: %d\n", *(ptr+i));
    }
    printf("%#X\n", ptr);
    
    for(ptr=dizi; ptr!=dizi+10; ptr++){//Burada pointerı güncelliyoruz. Bu işlemden sonra pointer yazdırılırsa en son hangi adresteyse onu gösterir.
        printf("Adresi: %#X ve degeri:%d\n",ptr,*ptr);
    } 
    printf("%#X\n", ptr);
    
    //POINTER ARİTMATİĞİ//
    
    int *p = dizi;
    printf("%d\n", (*p)++); //dizinin 1. elemanını yazdır, sonra o değeri arttır.

    printf("%d\n", *(p++) ); //önce yazdır sonra pointerı bir sonraki indekse geçir.

    printf("%d\n", *(++p)); //önce adresi arttır(pointer bir sonraki indekse geçsin), sonra yazdır.

    printf("%d\n", ++(*p)); //pointer nereyi gösteriyorsa değerini arttır, sonra da yazdır.

    return 0;
}