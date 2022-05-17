//Kullanıcadan alacağınız satır ve sutün sayısına göre bir adet iki boyutlu diziyi dinamik şekilde oluşturunuz. Değerleri kullanıcıdan alarak matrisin içeriğini doldurup
//bir kere ekrana yazdırınız. Matrisin simetrik olup olmadığını kontrol ediniz.
#include <stdio.h>
#include <stdlib.h>
void diziyiDoldur(int **matris, int satirSayisi, int sutunSayisi) {
    int i, j;
    for(i=0; i<satirSayisi; i++) {
        for(j=0; j<sutunSayisi; j++) {
            printf("Lutfen [%d][%d] degerlerini giriniz: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
}
void diziyiYazdir(int **matris, int satirSayisi, int sutunSayisi) {
    int i, j;
    for(i=0; i<satirSayisi; i++) {
        for(j=0; j<sutunSayisi; j++) {
            printf("%d ", matris[i][j]);
        }
            printf("\n");
    }
}

int simetrikKontrol(int **matris, int satirSayisi, int sutunSayisi){
    int i, j;
    for(i=0; i<satirSayisi; i++) {
        for(j=0; j<sutunSayisi; j++) {
            if(matris[i][j] != matris[j][i]) {
                return 0;
            }

        }
    }
    return 1;
}
int main () {
    int satirSayisi, sutunSayisi, i;
    int **ikiBoyutluMatris;
    
    printf("Satir ve sutun sayilarini aralarinda birer bosluk birakarak giriniz: ");
    scanf("%d %d", &satirSayisi, &sutunSayisi);
    
    ikiBoyutluMatris = (int **)malloc(sizeof(int)*satirSayisi);
    
    for(i=0; i<satirSayisi; i++){
        ikiBoyutluMatris[i]=(int *)malloc(sizeof(int)*sutunSayisi);
    }

    diziyiDoldur(ikiBoyutluMatris, satirSayisi, sutunSayisi);
    diziyiYazdir(ikiBoyutluMatris, satirSayisi, sutunSayisi);
    
    if (simetrikKontrol(ikiBoyutluMatris, satirSayisi, sutunSayisi)) {
        printf("Giridiginiz matris simetriktir.");
    }
    else
        printf("Girdiginiz matris simetrik degildir.");

    free(ikiBoyutluMatris);
    return 0;
}