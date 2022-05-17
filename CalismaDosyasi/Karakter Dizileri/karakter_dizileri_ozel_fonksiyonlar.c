#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    char isim[20];
    char isim2[20];
//    char soyİsim[20];
    puts("Lutfen isim giriniz: ");
    gets(isim);
//    puts("Lutfen soyisim giriniz: ");
//    gets(soyİsim);
    
//    int karakterSayisi=strlen(isim);
//    printf("Girdiginiz isimdeki harf sayisi=%d", karakterSayisi);

    puts("Lutfen isim giriniz: ");
    gets(isim2);
//    strcpy(isim, isim2);
//    printf("%s", isim);  

//    strcat(isim, soyİsim);
//    strcat(isim2, soyİsim);
//    strcat(isim,isim2);

//   printf("%s", isim);
    int karsilastirmaSonucu = strcmp(isim, isim2);
    if(karsilastirmaSonucu==0) {
        printf("iki string aynidir.");
    }
    else if (karsilastirmaSonucu > 0) {
        printf("ilk string alfabetik olarak ikinci stringden sonra gelmektedir.");
    }
    else
        printf("ilk string alfabetik olarak ikinci stringden once gelmektedir");

    return 0;
}