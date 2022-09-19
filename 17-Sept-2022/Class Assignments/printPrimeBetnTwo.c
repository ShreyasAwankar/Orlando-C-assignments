// Write a program to print all the prime numbers between two numbers.
#include <stdio.h>
void main()
{
    int a,a1, b,b1, i, checker;
    printf("Enter two  numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (b; b <= a; b++)
        {
            i = 2;
            checker = 1;
            b1=b;
            while (i < b / 2)
            {
                if (b % i == 0)
                {
                    checker = 0;
                    break;
                }
                i++;
            }
            if (checker == 1)
            printf("%d\t",b);
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            i = 2;
            checker = 1;
            a1=a;
            while (i < a / 2)
            {
                if (a % i == 0)
                {
                    checker = 0;
                    break;
                }
                i++;
            }
            if (checker == 1)
            printf("%d\t",a);
        }
    }
}