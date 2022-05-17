#include <stdio.h>
#define PI 3.14
float area(int r);
int main()
{
    int a;

    printf("Yaricapi giriniz: ");
    scanf("%d",&a);

    printf("%d yaricapli dairenin alani: %.2f", a, area(a));

    return 0;
}

float area(int r)
{
    return PI*r*r;
}