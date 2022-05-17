   //Write C code to print all numbers between LOW and HIGH that are divisible by NUMBER//
   #include <stdio.h>
        int main () {
            int dusuk, yuksek,sayac,N;
                printf("Dusuk olan sayiyi giriniz: ");
                    scanf("%d", &dusuk);
                printf("Yuksek olan sayiyi giriniz: ");
                    scanf("%d", &yuksek);
                printf("Modu giriniz: ");
                    scanf("%d", &N);
                        for (sayac = dusuk; sayac < yuksek+1; sayac++){
                            if(sayac%N==0)
                                printf("%d\n", sayac);}

    return 0;}