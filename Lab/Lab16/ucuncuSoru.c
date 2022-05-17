//Write a program in C to store n elements in an array and print the elements using pointer.
#include <stdio.h>
int main () {
    int i, n, *ptr;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf ("%d", &n);
    int dizi[n];
    for(i=0; i<n; i++) {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }

    ptr = dizi;

    for(i=0; i<n; i++){
        printf("Dizinin %d. elemani = %d\n", i+1, *(ptr+i));
    }
return 0;
}