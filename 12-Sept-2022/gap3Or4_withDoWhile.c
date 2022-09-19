#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        do
        {
            if (b % 3 == 0)
            {
                printf("%d \t", b);
            }
            b++;
        } while (b <= a);
    }
    else
    {
        do
        {
            if (a % 4 == 0)
            {
                printf("%d \t", a);
            }
            a++;
        } while (a <= b);
    }
}