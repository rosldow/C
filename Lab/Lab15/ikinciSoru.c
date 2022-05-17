#include <stdio.h>
int tek (int a[], int b) {
    if ( b < 0 )
        return 0;
    if (a[b] %2 != 0) {
        return 1+ tek (a, b-1);
    } 
    else
        return 0+ tek (a, b-1); 
}

int main () {
    int dizi [] = {1 , 586 , 98 , 5 , 3, 13};
    printf("%d", tek(dizi, 5));
}