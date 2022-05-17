/*  Kullanicidan kac deger girecegini al ve calloc ile yer ayir.
    Girecegi deger sayisi kadar degeri kullanicidan al.
    Girilen en buyuk degeri tanimladigin pointer ile yazdir.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int index, i, max, *ptr, array[1];
    ptr=array;

    printf("Kac eleman gireceksiniz? ");
    scanf("%d",&index);

    ptr = (int*) calloc(index, sizeof(int));

    for(i=0 ; i<index ; i++)
    {
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d",ptr+i);
    }

    max=ptr[0];

    for(i=1 ; i<index ; i++)
    {
        if (*(ptr+i)>max) max=*(ptr+i);
    }

    printf("Girdiginiz degerlerden en buyugu: %d", max);

    return 0;