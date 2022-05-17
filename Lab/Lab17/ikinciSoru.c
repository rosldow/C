/*  
    Ad ve soyad icin gereken minimum char icin bellekten malloc ile yer ayir.
    Strcpy kullanarak adinizi ve soyadinizi yazdirin.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, i2;
    char *ptr, *ptr2, isim[1], soyisim[1];
    ptr=isim; ptr2=soyisim;
    
    printf("Isim ve soyisim uzunlugunu bosluk birakarak giriniz: ");
    scanf("%d %d", &i, &i2);

    ptr=(char*)calloc(i,sizeof(char));
    printf("Isimini gir: ");
    scanf("%s",isim);
    strcpy(ptr, isim);

    ptr2=(char*)calloc(i2,sizeof(char));
    printf("Soyisimi gir: ");
    scanf("%s",soyisim);
    strcpy(ptr2,soyisim);

    printf("Adiniz ve soyadiniz: %s %s", ptr, ptr2);

    return 0;    
}