#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        while (b <= a)
        {
            if (a % 2 != 0)
            {
                printf("%d \t", a);
            }
            a--;
        }
    }
    else
    {
        while (a <= b)
        {
            if (b % 2 != 0)
            {
                printf("%d \t", b);
            }
            b--;
        }
    }
}
