#include <stdio.h>
#include <stdlib.h>

void swap_numbers_xor(int *a, int *b);

int main()
    {
        int num, num1;
        printf("Enter two numbers\na = ");
        scanf("%d",&num);
        printf("\nb = ");
        scanf("%d",&num1);
        swap_numbers_xor(&num, &num1);
    }

void swap_numbers_xor(int *a, int *b)
    {
        printf("Before swap a = %d, b = %d\n", *a, *b);
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
        printf("After swap a = %d, b = %d\n", *a, *b);
    }
