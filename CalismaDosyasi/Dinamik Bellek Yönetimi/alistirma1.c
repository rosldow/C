//Kullanıcıdan alacağınız 2 adet stringin birbirinin anagramı olup olmadığını bulunuz.Bunu yaparken harflerin frekanslarını iki adet dizide tutarak yapınız.
//(calloc fonksiyonnu kullanarak)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int anagramKontrol(char *str, char *str2) {
    int *frekansDizisi,*frekansDizisi2, i;

    char *ptr=str,*ptr2=str2, c;

    if(strlen(str) != strlen(str2)) {
        return 0;
    }

    frekansDizisi=(int *)calloc(26,sizeof(int));
    
    frekansDizisi2=(int *)calloc(26,sizeof(int));

    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }
    printf("\n");

    while(*ptr!='\0' && *ptr2!='\0') {
        int indeks=*ptr-'a';
        frekansDizisi[indeks]+=1;
        
        indeks=*ptr2-'a';
        frekansDizisi2[indeks]+=1;
        ptr++;
        ptr2++;
    }

    for(i=0; i<26; i++){
        printf("%d ", frekansDizisi[i]);
    }
        printf("\n");
    for(i=0; i<26; i++){
        printf("%d ", frekansDizisi2[i]);
    }

    for(i=0; i<26; i++) {
        if(frekansDizisi[i]!=frekansDizisi2[i])
        return 0;
    }
    
    return 1;
}

int main () {
    if(anagramKontrol("kalem", "kelam")) {
        printf("\nGirdiginiz iki string birbirinin anagramidir.\n");
    }
    else
        printf("Girdiginiz iki string birbirinin anagrami degildir.");

    return 0;
}