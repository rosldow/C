#include <stdio.h>
    int main () {
        int a;
            printf("M matrisinin satir sayisini giriniz: ");
            scanf("%d", &a);
        int M[a][a], N[a][a];
        int i,j;   
            printf("M matrisi icin deger girin:"); 
            for (i=0; i<a; i++){
                for (j=0; j<a; j++){
                    scanf("%d", &M[i][j]);}
            }
            printf("N matrisi icin deger girin:"); 
                for (i=0; i<a; i++){
                    for (j=0; j<a; j++){
                        scanf("%d", &N[i][j]);}
        }
            for (i=0; i<a; i++){
                for (j=0; j<a; j++){
                    printf("%d ",M[i][j]+N[i][j]);}
        }

        
        return 0;
    }
