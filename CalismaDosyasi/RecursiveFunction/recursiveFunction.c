#include <stdio.h>
// 1. Girilen N doğal sayısına kadar olan sayıların toplamını bulan recursive fonksiyon
/* int toplama (int x) {
    if (x==0)
        return x;
    else
        return (x + toplama (x-1));        
}
int main () {
    int N;
    printf("Lutfen bir dogal sayi giriniz: ");
    scanf("%d", &N);

    printf("Girmis oldugunuz dogal sayiya kadar olan dogal sayilarin toplami = %d", toplama(N));

} */

// 2. Girilen N dogal sayısının faktoriyelini bulan recursive fonksiyon
/* int faktoriyel (int x) {
    if (x == 1)
        return x;
    else
        return(x * faktoriyel (x-1));
}

int main (){
    int N;
    printf("Lutfen bir dogal sayi giriniz: ");
    scanf("%d", &N);
    
    printf("Sonuc = %d", faktoriyel (N));
    return 0;
} */

// 3. Girilen taban ve üs degerine göre üs alma işlemi uygulayan recursive fonksiyon
/*
int usAlma (int x, int y){
    if (y == 1)
        return x;
    else if (x == 0)
        return x;
    else
        return ( x * usAlma( x , y-1 ));
}
int main (){
    int a,b;
    printf("Lutfen bir taban ve bir us sayi giriniz: ");
    scanf("%d %d", &a ,&b);
    
    printf("Sonuc = %d", usAlma (a, b));
    return 0;
} */

//4. Girilen bir dogal sayiya kadar olan sayilarin kaç tanesinin çift oldugunu bulan recursive fonksiyon.
/*
int mod2(int x) {
    if (x>=0) 
    {
        if (x%2==0)
        {
            return 1+ mod2 (x-1);
        }
        else 
            return mod2(x-1);
    }
    return 0;
}

int main()
{
    int N;

    printf("Siniri belirleyiniz: ");
    scanf("%d",&N);

    printf("Cift sayi sayisi: %d", mod2(N));

    return 0;
} */

//5. Girilen doğal sayıya kadar olan sayıların kaç tanesinin tek olduğunu bulan recursive function
/*
int mod3 (int x) {
    if (x>=0) 
    {
        if (x%2 != 0)
        {
            return 1 + mod3(x-1);
        }
        else
            return mod3(x-1);
    }
    return 0;
}
int main()
{
    int N;

    printf("Siniri belirleyiniz: ");
    scanf("%d",&N);

    printf("Cift sayi sayisi: %d", mod3(N));

    return 0;
} */

// Girilen doğal sayıya kadar olan doğal sayıların kaç tanesinin 5'in katı olduğunu bulan recursive function
/*
int mod5 (int x) {
    if (x>=0) 
    {
        if (x%5 == 0)
        {
            return 1 + mod5(x-1);
        }
        else
            return mod5(x-1);
    }
    return 0;
}
int main()
{
    int N;

    printf("Siniri belirleyiniz: ");
    scanf("%d",&N);

    printf("Cift sayi sayisi: %d", mod5(N));

    return 0;
} */

//6. Kullanıcının girdiği diziyi tersten yazdıran recursive function
/*
int reverseDizi (int a[], int b) {
    int i=b-1;
        if (i>=0)
        {
            printf("%d ", a[i]);
            return reverseDizi(a , b-1);  
        }
        else
            return 0;
}
int main()
{
    int elemanSayisi;

    printf("Dizinizin elaman sayisini giriniz: ");
    scanf("%d",&elemanSayisi);
    
    int dizi[elemanSayisi];
    for(int i=0; i< elemanSayisi; i++)
    {
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d", &dizi[i]);
    }

    reverseDizi (dizi ,elemanSayisi);

    return 0;
} */
//7.
/*
int fun(int n)
{
 if (n == 6)
    return n;
 else 
    return 2*fun(n+1);
}
 int main()
{
 printf("%d ", fun(1));
 return 0;
} */

//8. Merdiven oluşturma
/*
void merdiven(int a){
int i;
    if (a>1)
    {
        merdiven(a-1);
        printf("\n");
    }
    for(i=0; i<a; i++)
        printf("-"); 
}
int main () {
    merdiven(5);
    return;
} */
//9. Çam ağacı oluşturma

void camAgaci(int a) {
    int i,j;
    if (a>1)
    {
        camAgaci(a-1);
        printf("\n");
    }
    for(i=0; i<a; i++) {
        printf("*");
        for (j=0; j<a-1; j--){
            printf(" ");
        }
    }

}
int main () {
    camAgaci(5);
    return 0;
}