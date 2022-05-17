// Write a program in C to add two numbers using pointers
#include <stdio.h>
int main () {
    int x,y,sonuc;
    int *p;
    p=&x;
    x =5;
    y =6;
    sonuc = (*p)+y;

    printf("Sonuc: %d", sonuc);
}