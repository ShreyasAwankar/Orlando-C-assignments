#include <stdio.h>

void main()
{
    int a, b = 0;
    printf("Enter your number: \n");
    scanf("%d", &a);
    do
    {
        if (b % 2 != 0)
        {
            printf("%d \t", b);
        }
        b++;
    }while (b <= a);
}
