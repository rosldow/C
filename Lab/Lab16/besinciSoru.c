//Write a program in C to print a string reverse using a pointer
#include <stdio.h>
int main () {
int i;
char *ptr;
char str[]="w3resource";
puts(str);

ptr = str;
for(i=10; i>-1; i--) {
    printf("%c", *(ptr+i));
}
return 0;
}