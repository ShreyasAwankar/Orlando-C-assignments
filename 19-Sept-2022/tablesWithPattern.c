// Write a program to read two numbers from the user and display the table s between these two numbers.

#include <stdio.h>
void main()
{
    int a, b, multiplier, k;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        multiplier = 1;
        while (multiplier <= 10)
        {
            for (k = b; k <= a; k++)
            {
                printf("%d*%d\t", k, multiplier);
            }
            multiplier++;
            printf("\n");
        }
    }
    else
    {
        multiplier = 1;
        while (multiplier <= 10)
        {
            for (k = a; k <= b; k++)
            {
                printf("%d*%d\t", k, multiplier);
            }
            multiplier++;
            printf("\n");
        }
    }
}
