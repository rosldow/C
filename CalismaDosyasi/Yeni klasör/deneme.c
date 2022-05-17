#include <stdio.h>
#include <stdlib.h>
int main () {
    int *ptr, *dizi, a, i=0,n=1;
    ptr=dizi;
    ptr=(int *)malloc(sizeof(int));

    while(1){
        if(a == -1) {
            break;
        }
        scanf("%d", &a);
        *(dizi+i)=a;
        i++;
        n++;
        realloc(dizi, n*sizeof(int));
    }
    for(i=0; i<n-2; i++){
        printf("%d ", *(dizi+i));
    }
}