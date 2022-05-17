//Write C code to print multiplication table of any number.//
    #include <stdio.h>
        int main () {
            int n,i,carpim;
                printf("Carpim tablosunu ogrenmek istedigin sayiyi giriniz: ");
                scanf("%d", &n);
                for (i=1; i<=10; i++) {
                    carpim = n * i;
                    printf("%d * %d = %d\n", n, i, carpim);
                }
            return 0;
        }