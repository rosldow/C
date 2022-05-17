//Bir diziyi dinamik bir şekilde oluşturunuz. Ve bu diziyi selection sort ile sıralayınız.
int main () {
    int *ptr;
    int elemanSayisi, i, n;
    *ptr=(int *)malloc(sizeof(int));

    printf("Eleman saiyisini giriniz: ");
    scanf("%d", &elemanSayisi);

    for(i=1;i<elemanSayisi+1; i++)
    {
        *ptr=(int *)realloc(ptr,i*sizeof(int));
    }

    printf("%d", sizeof(ptr));
    return 0;
}
