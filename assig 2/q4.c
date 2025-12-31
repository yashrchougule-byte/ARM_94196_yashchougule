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
    int reg = 5, num, num1;

    printf("Original value = %d",reg);
    printf("\nOriginal binary value = ");
    convert_to_binary(reg);

    num = reg << 2;
    printf("\nValue after left shift = %d",num);
    printf("\nBinary of this = ");
    convert_to_binary(num);

    num1 = reg >> 1;
    printf("\nValue after right shift = %d",num1);
    printf("\nBinary of this = ");
    convert_to_binary(num1);
}