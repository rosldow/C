//Write C code to find the largest of three numbers A, B, and C//
#include <stdio.h>
        int main () {
            double A, B, C;
                printf("Bir sayi giriniz: ");
                    scanf("%lf", &A);
                printf("Bir sayi giriniz: ");
                    scanf("%lf", &B); 
                printf("Bir sayi giriniz: ");
                    scanf("%lf", &C);
                        if (A > B && A > C){
                            printf("%lf en buyuk sayidir.", A);}
                                else if (B > C)
                                    printf("%lf en buyuk sayidir.", B);
                                        else
                                            printf("%lf en buyuk sayidir.", C);

            return 0;
        }