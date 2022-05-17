//.Write C code to count and print all numbers from LOW to HIGH by steps of STEP. Test with LOW=0 and HIGH=100 and STEP=5//

#include <stdio.h>
        int main () {
            int low,high,i,step;
                printf("Araligi aralarinda bosluk birakarak giriniz (low high): ");
                    scanf("%d %d", &low, &high);
                printf("Kacar kacar artsin istersiniz? ");
                    scanf("%d", &step);
                for(i=low; i<=high; i++) {
                    if (i % step == 0) {
                        printf("%d\n", i);
                    }
                }
            return 0;
        }