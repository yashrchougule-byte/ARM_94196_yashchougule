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

    printf("\nBinary No. of HEX value = ");
    for(i = 0; i < 8; i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int reg = 0x2A, num;
    int bv = 1;
    num = reg;//0x2A = 42
    //printf("%d",num);
    printf("Hex value = 0x%X",reg);
    convert_to_binary(num);

    bv = bv << 4;
    //printf("\n");
    //printf("%d",bv);
    int set = reg | bv;
    printf("\nHex value after set bit no. 4 = 0x%X",set);
    convert_to_binary(set);

    bv = bv >> 3;
    int clear = reg & (~bv);
    printf("\nHex value after clear bit no. 1 = 0x%X",clear);
    convert_to_binary(clear);

    bv = bv << 4;
    int toggle = reg ^ bv;
    printf("\nHex value after toggle bit no. 5 = 0x%X",toggle);
    convert_to_binary(toggle);
}
