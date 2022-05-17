// 4) 10 elemanli diziyi klavyeden alan ve tersten ekrana yazan.//

#include <stdio.h>
    int main () {
        int A[10]={0}, i,j,n;
        for (i=0; i<10; i++)
        {
            printf("%d. elemani giriniz: ", i+1);
            scanf("%d", &n);
            A[i]=n;
        }
        for (j=9; j>-1; j--)
        {
            printf("%d\n", A[j]);
        }
    }