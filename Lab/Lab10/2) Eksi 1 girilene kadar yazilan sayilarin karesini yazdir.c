// 2) Eksi 1 girilene kadar yazilan sayilarin karesini yazdir.//

#include <stdio.h>

int main()
{
    int A[1000]={0} , i , j;

    for(i=0 ; i<1000 ; i++)
    {
        printf("Bir sayi giriniz: \n");
        scanf("%d", &A[i]);
        if(A[i]==-1)
        {
            break;
        }

    }
    
    for(j=0 ; j<i ; j++)
    {
        printf("%d\n",A[j]*A[j]);
    }

    return 0;
}