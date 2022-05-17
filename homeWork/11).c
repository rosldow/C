//.Write C code for a program that reads 10 numbers from the user and prints out their sum, and their product.//
    #include <stdio.h>
        int main () {
            int A[10], i, toplam=0, carpim=1;
                printf("10 tane dizi elemani giriniz:\n");
                for (i=0; i<10; i++) {
                    scanf("%d", &A[i]); }
                
                for (i=0; i<10; i++) {
                    printf("A[%d] = %d\n", i, A[i]); }
                
                for (i=0; i<10; i++) {
                    toplam = toplam + A[i];
                    carpim = carpim * A[i]; }
                    
                printf("Toplam degeri = %d\n", toplam);
                printf("Carpim degeri = %d\n", carpim); 
            return 0;
        }