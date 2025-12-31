#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rem, a[4], count = 0, i = 3;
    printf("Enter 4 bit No.\t");
    scanf("%d",&num);

    while(i >= 0)
    {
        rem = num%2;

        a[i] = rem;
        i--;
        num = num/2;
    }

    printf("Binary No. = ");
    for(i = 0; i < 4; i++)
    {
        if(a[i] == 1)
        {
            count = count + 1;
        }
        printf("%d",a[i]);
    }
    printf("\nNumber's of one = %d ",count);
    if(count%2 == 0)
    {
        printf("\nNumber has even parity");
    }
    else
    {
        printf("\nNumber has odd parity");
        a[0] = 1;
        printf("\nNumber is converted into even parity\n");
         printf("Binary No. = ");
        for(i = 0; i < 4; i++)
        {
            if(a[i] == 1)
                {
                    count = count + 1;
                }
        printf("%d",a[i]);
        }
    }
}
