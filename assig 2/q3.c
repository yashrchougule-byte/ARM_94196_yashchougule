#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reg = 0xABCD;
    int a[16], i = 15;
    int num = reg;

    printf("Hex value = 0x%X", reg);
    printf("\nDecimal of Hex = %d", num);


    while(i >= 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i--;
    }

    printf("\nBinary No. of HEX value = ");
    for(i = 0; i < 16; i++)
    {
        printf("%d", a[i]);
    }

    int lower4, upper4;


    lower4 = reg & 0x000F;
    upper4 = (reg & 0x00F0) >> 4;

    printf("\n\nExtracted Values:");
    printf("\nLower 4 bits = 0x%X", lower4);
    printf("\nUpper 4 bits of lower byte = 0x%X", upper4);

    return 0;
}
