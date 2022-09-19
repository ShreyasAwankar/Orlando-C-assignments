#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter your number: \n");
    scanf("%d", &a);
    for (b = 0; b <= a; b++)
    {
        if (b % 2 != 0)
        {
            printf("%d \t", b);
        }
    }
}
