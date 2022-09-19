// Write a program to print all the prime numbers between two entered numbers.
#include <stdio.h>
void main()
{
    int a, b, i, sum, b1, a1;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (b; b <= a; b++)
        {
            sum = 0;
            for (i = 1; i <= b / 2; i++)
            {
                if (b % i == 0)
                {
                    sum += i;
                }
            }
            if (sum == b)
                printf("%d \t", b);
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            sum = 0;
            for (i = 1; i <= a / 2; i++)
            {
                if (a % i == 0)
                {
                    sum += i;
                }
            }
            if (sum == a)
                printf("%d \t", a);
        }
    }
}
