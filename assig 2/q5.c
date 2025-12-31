#include <stdio.h>
#include <stdlib.h>

void convert_to_binary(int num)
{
    int rem, a[8], i = 7;
    while(i >= 0)
    {
        rem = num%2;

        a[i] = rem;
        i--;
        num = num/2;
    }

    //printf("\nBinary No. of HEX value = ");
    for(i = 0; i < 8; i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int reg = 0xAA;
    int a[8], i = 7;
    int num = reg;

    printf("Initial Register Value = 0x%X\n", reg);
    printf("Binary Before = ");
    convert_to_binary(num);

    int read;
    read = (reg >> 2) & 0x07;
    printf("\nRead bits 2 to 4 = 0x%X", read);
    printf("\nBinary value of 2 to 4 bits = ");
    convert_to_binary(read);

    int write = 0x03;
    reg = reg & ~(0x07 << 2);
    reg = reg | (write << 2);

    printf("\nModified Register Value = 0x%X\n", reg);

    num = reg;
    i = 7;
    printf("Binary After  = ");
    convert_to_binary(num);
}

