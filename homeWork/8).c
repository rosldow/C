//Write C code to print the SUM of numbers from LOW to HIGH. Test with LOW=3 and HIGH=9.//
    #include <stdio.h>
        int main () {
            int low, toplam=0;
                for(low=3; low<10; low++) {
                    toplam += low;}
                        printf("%d\n", toplam);
            return 0;
        }
