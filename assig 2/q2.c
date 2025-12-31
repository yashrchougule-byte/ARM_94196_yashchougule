#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reg = 0x08, num, rem, a[8], i = 7;
    int bv = 1;
    num = reg;

    printf("Hex value = 0x%X",reg);

    while(i >= 0)
    {
        rem = num%2;

        a[i] = rem;
        i--;
        num = num/2;
    }

    printf("\nBinary No. of HEX value = ");
    for(i = 0; i < 8; i++)
    {
        printf("%d",a[i]);
    }

    bv = bv << 3;

    if(reg & bv)
    {
        printf("\nBit 3 is SET");
    }
    else
    {
        printf("\nBit 3 is CLEAR");
    }
}
