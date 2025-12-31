#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int ascii = 0;
    printf("Enter a letter\t");
    scanf("%c",&ch);
    ascii = ch;

    if(ascii > 64 & ascii < 118)
    {
        printf("\nGiven char is a alphabet");
        printf("\nAscii value of alphabet = %d",ascii);
        int xor = ascii ^ 32;
        printf("\nXORing of alphabet with 32 = %c",xor);
    }
    else
    {
        printf("\nGiven char is not a alphabet");
    }
}
