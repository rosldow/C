#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char string[50], geciciKarakter, string2[50];
    int i, karakterSayisi;
    printf("Kelime girisi yapiniz: ");
    scanf("%s", string);
    karakterSayisi = strlen(string);
    
    for(i=0; i<karakterSayisi/2; i++){
        geciciKarakter=string[i];
        string[i] = string[karakterSayisi-i-1];
        string[karakterSayisi-i-1] = geciciKarakter;
    }
    printf("Girdiginiz kelimenin tersi: %s", string);
  
    return 0;
}