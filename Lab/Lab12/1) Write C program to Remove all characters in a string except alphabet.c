/*
    1) Write C program to Remove all characters in a string except alphabet.

    Enter a string: p2'r-o@gram84iz./
    Output string: programiz
*/

#include <stdio.h>
int main()
{
    int i;
    char S[1500];
    
    printf("Girdiyi giriniz: ");
    gets(S);

    for(i=0 ; S[i]!='/0' ; i++)
    {
        printf("%c",S[i]);
    }


    return 0;
}