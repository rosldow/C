#include <stdio.h>
int strLen(char A[]) {
    int karakterSayisi=0;
    while (A[karakterSayisi] != '\0') {
        karakterSayisi++;
    }
    printf("\nIsminizde %d kadar harf bulunmaktadir.", karakterSayisi);

}
void strCpy(char A[], char B[]) {
    int i, karakterSayisi=0;
    while(A[karakterSayisi] != '\0') {
        karakterSayisi++;
    }
    for(i=0; i<=karakterSayisi; i++) {
        B[i] = A[i];
    }
    printf("\n%s", A);
    printf("\n%s", B);
}

void strCat(char A[], char B[]) {
    int karakterSayisi=0, karakterSayisi2=0, i=0;
    
    while(A[karakterSayisi] != '\0'){
        karakterSayisi++;
    }
    
    while(B[karakterSayisi2] != '\0'){
        karakterSayisi2++;
    }
    
    for(i=0; i<karakterSayisi2; i++){
        if(B[i] != '\0') {
        A[karakterSayisi+i] = B[i];
        }  
    }
        A[karakterSayisi+i] = '\0';
        printf("\n%s", A);
}
void strCmp(char A[], char B[]) {
    int karakterSayisi=0, karakterSayisi2=0, i=0;
    int esitlik=1;
    while(A[karakterSayisi] != '\0'){
        karakterSayisi++;
    }
    
    while(B[karakterSayisi2] != '\0'){
        karakterSayisi2++;
    }
    while (A[i] !='\0' && B[i] != '\0') {
        if(A[i] > B[i]){
            printf("%s kelimesi %s kelimesinden alfabetik olarak sonra gelmektedir.", A, B);
            esitlik=0;
            break;
        }
        else if (A[i] < B[i]) {
            printf("%s kelimesi %s kelimesinden alfabetik olarak once gelmektedir.", A, B);
            esitlik=0;
            break;
        }
        i++;
    }
    if(esitlik) {
        if(karakterSayisi==karakterSayisi2){
            printf("Giridiginiz 2 kelime tamamen aynidir.");
        }
        else if (karakterSayisi > karakterSayisi2) {
            printf("%s kelimesi %s kelimesinden alfabetik olarak sonra gelmektedir.", A, B);
        }
        else
            printf("%s kelimesi %s kelimesinden alfabetik olarak once gelmektedir.", A, B);
    }
}

int main () {
    char isim[100], isim2[100];
    printf("Lutfen isminizi giriniz: ");
    scanf("%s", isim);
    printf("Lutfen isminizi giriniz: ");
    scanf("%s", isim2);
    strLen(isim);
    strCpy(isim, isim2);
    strCat(isim, isim2);
    strCmp(isim, isim2);    

    
    
    
    return 0;
}