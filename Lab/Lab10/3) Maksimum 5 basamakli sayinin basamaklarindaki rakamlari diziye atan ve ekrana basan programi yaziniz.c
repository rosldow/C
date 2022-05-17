// 3) Maksimum 5 basamakli sayinin basamaklarindaki rakamlari diziye atan ve ekrana basan programi yaziniz.//

#include <stdio.h>
    int main() {
        int A[5]={0} , i, j, n;
        
            printf("Bir n giriniz: ");
            scanf("%d", &n);

        for(i=0 ; i<5 ; i++)
        {
            A[i] = n % 10;
            n = n/10;
            if (n==0) break;
        }

        for(j=0 ; j<=i ; j++)
        {
            printf("%d\n",A[j]);
        }
    return 0;
}