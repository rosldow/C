//petagon sayıları n=n(3n-1)/2 formülüne göre üretilmektedir. 100'den küçük pentagon sayılarını ekrana yazdırın.//
    #include <stdio.h>
    int main () {
        int i,sonuc;
            for(i=1; sonuc<100; i++) {
                sonuc = i * (3*i - 1)/2;
                    if(sonuc <100){
                        printf("%d\n", sonuc);}
            }    

        return 0;
    }
