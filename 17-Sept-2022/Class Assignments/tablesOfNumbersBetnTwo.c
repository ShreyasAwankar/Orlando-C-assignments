// Write a program to print the tables of a the numbers between two entered numbers.
#include <stdio.h>
void main()
{
    int a, b, multiplier, c;
    printf("Enter two  numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (b; b <= a; b++)
        {
            c = 1;
            multiplier=1;
            while (multiplier <= 10)
            {
                c = b * multiplier;
                printf("%d\t", c);
                multiplier++;
            }
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            c = 1;
            multiplier=1;
            while (multiplier <= 10)
            {
                c = a * multiplier;
                printf("%d\t", c);
                multiplier++;
            }
        }
    }
}