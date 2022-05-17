#include <stdio.h>
#include <stdlib.h>
void sayiDegistir(int a, int b) {
    int gecici;
    gecici = a;
    a = b;
    b = gecici;
}

void sayiDegistirPointer(int *ptrA, int *ptrB) {
    int gecici;
    gecici = *ptrA;
    *ptrA = *ptrB;
    *ptrB = gecici;

}

int main () {
    int x=5,y=12;
    printf("X sayisinin degeri: %d, Y sayisinin degeri: %d\n", x,y);
    sayiDegistir(x,y);//değerleriyle çağırıyoruz (CALL BY VALUE)
    printf("X sayisinin degeri: %d, Y sayisinin degeri: %d\n", x,y);
    
    
    sayiDegistirPointer(&x,&y);//adresleriyle çağırıyoruz (CALL BY REFERENCE)
    printf("X sayisinin degeri: %d, Y sayisinin degeri: %d", x,y);

    
    return 0;
}