#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rem, loop = 0, a[4], count = 0, i = 3;
    printf("Enter 4 bit No.\t");
    scanf("%d",&num);
    //num = 1;
    while(i >= 0)
    {
        rem = num%2;

        a[i] = rem;
        i--;
        num = num/2;
       // loop = loop + 1;
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
}