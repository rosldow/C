/*
malloc(), calloc(), realloc() icin 'stdlib' kutuphanesi gerekir.
    > #include <stdlib.h>

- malloc() fonksiyonu:
    > Bir degisken icin hafizadan bir blok yer ayirir.
    > Eger yeterli alan yoksa fonksiyon NULL dondurur.
    - Kullanim:
        > ptr = (int*) malloc(n*sizeof(int));
        > n: ayirmak istedigin boyut.

- calloc() fonksiyonu:
    > Hafiza blogu almak icin kullanilabilir. 
    > Eger yeterli alan yoksa fonksiyon NULL dondurur.
    > malloc fonksiyonundan farki arguman listesi degismektedir.
    - Kullanim:
        > ptr = (char*) calloc(n, sizeof(char));
        > n: ayirmak istedigin boyut.

- realloc() fonksiyonu:
    > Hafizadan ayrilan bir alani yeniden boyutlandirmak icin kullanilir.
    - Kullanim:
        > realloc (ptr, 20*sizeof(char));

- Free() fonksiyonu:
    > malloc ve calloc fonksiyonlari ile hafizadan ayrilan alanin tekrar heap alanina serbest birakilmasi icin kullanilir.
    - Kullanim:
        > free(ptr);,
*/