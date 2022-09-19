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
            if (a % 2 != 0)
            {
                printf("%d \t", a);
            }
            a--;
        }while (b <= a);
    }
    else
    {
        do
        {
            if (b % 2 != 0)
            {
                printf("%d \t", b);
            }
            b--;
        }while (a <= b);
    }
}
