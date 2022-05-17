// Bir cumlenin kelimelerini sondan basa dogru yazan programi dinamik bellek yontemiyle olustur.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr, str[1];
    int b, i;
    ptr=str;
    ptr = (char*) calloc(1, sizeof(char));

    printf("Yazacaginiz kelimenin karakter sayisini giriniz: ");
    scanf("%d",&b);
    ptr = realloc(ptr,b*sizeof(char));

    printf("Kelimeyi giriniz: ");
    scanf("%s",ptr);

    printf("Kelimenin ters yazilmis hali:\n");
    for(i=b-1 ; i>-1 ; i--) printf("%c",*(ptr+i));

    free(ptr);

    return 0;
}