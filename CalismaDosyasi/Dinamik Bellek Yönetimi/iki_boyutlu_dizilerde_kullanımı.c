#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(NULL));
    int **ikiBoyutlu;
    int i, j, satirSayisi, sutunSayisi;
    printf("Satir sayisini giriniz: ");
    scanf("%d", &satirSayisi);
    printf("\nSutun sayisini giriniz: ");
    scanf("%d", &sutunSayisi);

    ikiBoyutlu=(int **)malloc(sizeof(int *)*satirSayisi);
    for(i=0; i<satirSayisi; i++) {
        ikiBoyutlu[i]=(int **)malloc(sizeof(int *)*sutunSayisi);
    }
    for(i=0; i<satirSayisi; i++) {
        for(j=0; j<sutunSayisi; j++) {
            ikiBoyutlu[i][j] = rand()%100;
        }
    }
    for(i=0; i<satirSayisi; i++) {
        for(j=0; j<sutunSayisi; j++) {
            printf("%d ",ikiBoyutlu[i][j]);
        }
        printf("\n");
    }
}