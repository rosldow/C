//Write a program in C compute the sum of all elements in array using pointers

#include <stdio.h>
int main () {
int i, n, *ptr, sum=0;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf ("%d", &n);
    int dizi[n];
    for(i=0; i<n; i++) {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }

    ptr = dizi;

    for(i=0; i<n; i++){
        sum += *(ptr+i);
    }
    printf("Dizinin toplami = %d",sum);
return 0;
}