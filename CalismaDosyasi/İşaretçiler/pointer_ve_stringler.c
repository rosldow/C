#include <stdio.h>
#include <stdlib.h>
int main (){
    char *ptr="Osman Acikgoz";
    while (*ptr != '\0'){
        printf("%#X adresinde tutulan deger : %c\n", ptr,*ptr);
        ptr++;
    }
    return 0;
}