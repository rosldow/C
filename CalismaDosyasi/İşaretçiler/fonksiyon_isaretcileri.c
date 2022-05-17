#include <stdio.h>
#include <stdlib.h>
void merhaba() {
    printf("Merhaba Dunya\n");
}
void yaz(int a) {
    printf("%d\n", a);
}
int sonucHesaplama(int a, int b) {
    printf("Sonuc = %d\n", a*2+b*3);
}
int sonucHesaplama2(int a, int b) {
    printf("Sonuc = %d\n", (a+2)*(b-5));
}
int sonucHesaplama3(int a, int b) {
    printf("Sonuc = %d\n", a*5-b*1);
}
int hesapla(int (*ptr)(int, int), int a, int b){ //fonksiyon içine fonksiyon gönderme. int (*ptr)(int , int), int a ,int b --> int sonucHesaplama   3 , 5
    ptr(a,b);                                                                     //   --------------------     **    **        -----------------   ** **
}
int main () {
    void (*fonkPtr)(void); //İçine değer almadığı zamanlarda böyle tanımlanıyor.
    fonkPtr=merhaba; //fonksiyona atanıyor
    (*fonkPtr)();//çağırılıyor

    void(*fonkPtr2)(int); //İçine değer aldığında ise böyle tanımlanıyor
    fonkPtr2=yaz;
    (*fonkPtr2)(5);

    int(*fonkPtr3[3])(int,int);
    fonkPtr3[0] = sonucHesaplama;
    fonkPtr3[1] = sonucHesaplama2;
    fonkPtr3[2] = sonucHesaplama3;

    (*fonkPtr3[0])(3,5);
    (*fonkPtr3[1])(6,7);
    (*fonkPtr3[2])(8,12);

    hesapla(sonucHesaplama,3,5);
}