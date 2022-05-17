//Write C code to print the multiplication table for 6's.//
    #include <stdio.h>
        int main () {
            int n=6,i,carpim;
                for (i=1; i<=10; i++) {
                    carpim = n * i;
                    printf("%d * %d = %d\n", n, i, carpim);
                }
            return 0;
        }