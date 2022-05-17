//Write C code with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = ½ + ¼ + …+1/n //
    #include <stdio.h>
        int main () {
                int n;
                float S,i;
                    printf("Bir sayi giriniz: ");
                        scanf("%d", &n);
                    for (i=2; i<=n; i+=2){
                        S = S + (1/i); }
                            printf("Toplam = %.2lf", S);
            return 0;
        }